//
// Created by mrfalcon on 29.11.17.
//

#include "PhisicalBoom.h"

PhisicalBoom::PhisicalBoom(const int id)
        :PhisicalObject(id)
{}
PhisicalBoom::~PhisicalBoom() {}
const State* PhisicalBoom::calculate(std::vector<const State *> &state, const State *current_state,
                                     const int direction)
{
    int new_tik = dynamic_cast<const BoomState*>(current_state)->tik + 1;
    const State* new_state = new BoomState(id, current_state->coords, "boom", current_state->length, current_state->height,
                                           new_tik);
    if(new_tik == 3)
        return NULL;
    return new_state;
}
const string& PhisicalBoom::collision(std::vector<const State *> &state, State *current_state) const {}
