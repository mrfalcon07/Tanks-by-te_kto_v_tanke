//
// Created by mrfalcon on 27.11.17.
//

#include "PhisicalBullet.h"

PhisicalBullet::PhisicalBullet(const int id)
        :PhisicalMovable(id, 0.2)
{}
PhisicalBullet::~PhisicalBullet() {}
const State* PhisicalBullet::calculate(std::vector<const State*>& state, const State* current_state, const int direction)
{
    State* new_state = new movableState(current_state->id, current_state->coords, dynamic_cast<const movableState*>(current_state)->direction, current_state->type, current_state->length, current_state->height);
    move(new_state, dynamic_cast<const movableState*>(current_state)->direction);
    string type = collision(state, new_state);
    if(type == "tank")
        new_state->type = "destroyed";
    return new_state;
}

