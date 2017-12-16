//
// Created by mrfalcon on 27.11.17.
//

#include "PhisicalMovable.h"

PhisicalMovable::PhisicalMovable(const int id, const double speed)
        :PhisicalObject(id),
         speed(speed)
{}
PhisicalMovable::~PhisicalMovable() {}
void PhisicalMovable::move(State *current_state, const int direction) const
{
    dynamic_cast<movableState*>(current_state)->direction = direction;
    switch(direction)
    {
        case DOWN:
            current_state->coords.y += speed * t;
            break;
        case UP:
            current_state->coords.y -= speed * t;
            break;
        case RIGHT:
            current_state->coords.x += speed * t;
            break;
        case LEFT:
            current_state->coords.x -= speed * t;
            break;
    }
}
const string& PhisicalMovable::collision(std::vector<const State*>& state, State *current_state) const
{
    string *collision_type = new string("no");
    for(int i = 0; i < state.size(); ++i)
        if((current_state->get_rect().intersects(state[i]->get_rect())) && (current_state->id != state[i]->id))
        {
            *collision_type = state[i]->type;
            break;
        }
    return *collision_type;
}
