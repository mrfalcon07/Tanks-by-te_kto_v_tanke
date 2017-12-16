//
// Created by mrfalcon on 06.12.17.
//

#include "AI.h"
#include <random>

int choose_direction(const int direction, const Point& point, const Point& target_point)
{
    if ((target_point.x > point.x) && (direction != RIGHT) && (direction != LEFT))
        return RIGHT;
    if ((target_point.x < point.x)  && (direction != RIGHT) && (direction != LEFT))
        return LEFT;
    if ((target_point.y > point.y)  && (direction != UP) && (direction != DOWN))
        return DOWN;
    if ((target_point.y < point.y)  && (direction != UP) && (direction != DOWN))
        return UP;
    return direction;
}
bool is_availible(const Point& point, const Point& target_point, AbstractScene* abstract_scene)
{
    for(auto i : abstract_scene->obj_list)
    {
        if(abstract_scene->accord_list[i.first] == "UnDistrBlock")
        {
            Point block_point = i.second->get_point();
            if (((target_point.y < point.y) && ((target_point.x <= point.x + 15) && (target_point.x >= point.x - 15)) && (block_point.y < point.y) && ((block_point.x <= point.x + 15) && (block_point.x >= point.x - 15))) || ((target_point.y > point.y) && ((target_point.x <= point.x + 15) && (target_point.x >= point.x - 15)) && (block_point.y > point.y) && ((block_point.x <= point.x + 15) && (block_point.x >= point.x - 15))) || ((target_point.x < point.x) && ((target_point.y <= point.y + 15) && (target_point.y >= point.y - 15)) && (block_point.x < point.x) && ((block_point.y <= point.y + 15) && (block_point.y >= point.y - 15))) || ((target_point.x > point.x) && ((target_point.y <= point.y + 15) && (target_point.y >= point.y - 15)) && (block_point.x > point.x) && ((block_point.y <= point.y + 15) && (block_point.y >= point.y - 15))))
                return false;
        }
    }
    return true;
}

void AI::get_action(AbstractScene *abstract_scene, PhisicalScene *phisical_scene)
{
    srand(time(NULL));
    AbstractObject *abstract_object = abstract_scene->obj_list[id];
    AbstrTank *abstract_tank = dynamic_cast<AbstrTank *>(abstract_object);
    PhisicalObject *phisical_object = phisical_scene->object_list[id];
    PhisicalTank *phisical_tank = dynamic_cast<PhisicalTank *>(phisical_object);
    bool was_collided = phisical_tank->did_collided();
    Point point = abstract_object->get_point();
    int direction = abstract_tank->get_dir();
    int target = -1;
    int want_shoot = rand() % 6;
    double min_range = 10000;
    int target_id;
    for (auto i : abstract_scene->obj_list)
    {
        Point target_point = i.second->get_point();
        if((abstract_scene->accord_list[i.first] == "Tank") && (id != i.first)) {
            if(is_availible(point, target_point, abstract_scene)) {
                    if ((target_point.x > point.x) && ((target_point.y <= point.y + 15) && (target_point.y >= point.y - 15)))
                        target = RIGHT;
                    else if ((target_point.y < point.y) && ((target_point.x <= point.x + 15) && (target_point.x >= point.x - 15)))
                        target = UP;
                    else if ((target_point.x < point.x) && ((target_point.y <= point.y + 15) && (target_point.y >= point.y - 15)))
                        target = LEFT;
                    else if ((target_point.y > point.y) && ((target_point.x <= point.x + 15) && (target_point.x >= point.x - 15)))
                        target = DOWN;
                if(target != -1) {
                    abstract_tank->set_dir(target);
                    abstract_scene->create_abctract_bullet(id);
                    return;
                }
            }
            double range = sqrt(pow(target_point.x - point.x, 2) + pow(target_point.y - point.y, 2));
            if (range < min_range) {
                min_range = range;
                target_id = i.first;
            }
        }
    }
    if(want_shoot == 0) {
        abstract_scene->create_abctract_bullet(id);
    }
    if(was_collided)
    {
        target = choose_direction(direction, point, abstract_scene->obj_list[target_id]->get_point());
        if((was_collided) && (target == direction))
        {
            abstract_scene->create_abctract_bullet(id);
            if((direction == UP) || (direction == DOWN))
            {
                target = rand() % 2 + 2;
            }
            else
            {
                target = rand() % 2;
            }
        }
        abstract_tank->set_dir(target);
    }
}
AI::AI(const int id)
        :id(id)
{}