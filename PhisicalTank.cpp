//
// Created by mrfalcon on 27.11.17.
//

#include "PhisicalTank.h"

PhisicalTank::PhisicalTank(const int id)
        :PhisicalMovable(id, 0.05),
         health(3)
{}
PhisicalTank::~PhisicalTank() {}
const State* PhisicalTank::calculate(std::vector<const State *>& state, const State *current_state, const int direction)
{
    State* new_state = new movableState(current_state->id, current_state->coords, dynamic_cast<const movableState*>(current_state)->direction, current_state->type, current_state->length, current_state->height);
    if(direction != -1)
        move(new_state, direction);
    string type = collision(state, new_state);
    if(type == "tank")
        return current_state;
    else if(type == "bullet")
        health--;
    if(health == 0)
        new_state->type = "destroyed";
    return new_state;
}

