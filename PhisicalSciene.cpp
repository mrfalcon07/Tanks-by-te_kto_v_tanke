//
// Created by mrfalcon on 27.11.17.
//

#include "PhisicalSciene.h"

PhisicalSciene::PhisicalSciene(AbstructSciene* as, RenderSciene* rs)
        :as(as),
         rs(rs)
{}
PhisicalSciene::~PhisicalSciene()
{
    for(auto i = objects.begin(); i != objects.end(); ++i)
        delete((*i).second);
}
void PhisicalSciene::add(const int id, const string& type)
{
    PhisicalObject* po;
    if(type == "tank")
        po = new PhisicalTank(id);
    else if(type == "bullet")
        po = new PhisicalBullet(id);
    else if(type == "boom")
        po = new PhisicalBoom(id);
    //else smth
    objects.insert(pair(id, po));
}
vector<const State *> & PhisicalSciene::calculate(vector<const Action*>& action)
{
    vector<const State*> state;
    state = as->get_state();
    vector<const State*> *new_states = new vector<const State*>;
    static int number_of_bullets = 0;
    const State* current_state;
    const State* new_state = NULL;
    for(int i = 0; i < state.size(); ++i)
    {
        current_state  = as->get_state(state[i]->id);
        bool flag = false;
        for(int j = 0; j < action.size(); ++j)
        {
            flag = true;
            if(action[j]->id == state[i]->id)
            {
                if(action[j]->action == SHOOT)
                {
                    const int direction = dynamic_cast<const movableState*>(state[i])->direction;
                    switch(direction)
                    {
                        case RIGHT:
                            as->add(action[i]->id * 11 + number_of_bullets, "bullet",
                                    {state[i]->coords.x + 45, state[i]->coords.y + 16}, direction);
                            break;
                        case LEFT:
                            as->add(action[i]->id * 11 + number_of_bullets, "bullet",
                                    {state[i]->coords.x - 15, state[i]->coords.y + 16}, direction);
                            break;
                        case DOWN:
                            as->add(action[i]->id * 11 + number_of_bullets, "bullet",
                                    {state[i]->coords.x + 16, state[i]->coords.y + 45}, direction);
                            break;
                        case UP:
                            as->add(action[i]->id * 11 + number_of_bullets, "bullet",
                                    {state[i]->coords.x + 16, state[i]->coords.y - 15}, direction);
                    }
                    add(action[i]->id * 11 + number_of_bullets, "bullet");
                    rs->add(action[i]->id * 11 + number_of_bullets, "bullet");
                    ++number_of_bullets;
                }
                else
                    new_state = objects[action[i]->id]->calculate(state, current_state, action[i]->action);
                action.erase(action.begin() + j);
                break;
            }
        }
        if(!flag) {
            if (state[i]->type == "bullet") {
                new_state = objects[state[i]->id]->calculate(state, current_state,
                                                             dynamic_cast<const movableState *>(state[i])->direction);
            } else if (state[i]->type == "boom") {
                new_state = objects[state[i]->id]->calculate(state, current_state);
                if (!new_state) {
                    destroy(state[i]->id);
                    continue;
                }
            } else if (state[i]->type == "tank")
                new_state = objects[state[i]->id]->calculate(state, current_state);
        }
        if(new_state)
            if(new_state->type == "destroyed")
            {
                destroy(new_state->id);
                const int boom_id = new_state->id + 1000 + rand();
                as->add(boom_id, "boom", new_state->coords, -1);
                add(boom_id, "boom");
                rs->add(boom_id, "boom");
                delete(new_state);
            }
        else
            new_states->push_back(new_state);
        delete(current_state);
    }
    return *new_states;
}
void PhisicalSciene::destroy(const int id)
{
    delete(objects[id]);
    for(auto i = objects.begin(); i != objects.end(); ++i)
        if((*i).first == id)
            objects.erase(i);
    objects.erase(id);
    as->destroy(id);
    rs->destroy(id);
}