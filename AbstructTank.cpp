//
// Created by mrfalcon on 26.11.17.
//

#include "AbstructTank.h"

AbstructTank::AbstructTank(const int id, const coordinates &coords, const int direction, const double length, const double height)
        :AbstructMovable(id, coords, direction, length, height)
{}
AbstructTank::~AbstructTank() {}
const State* AbstructTank::get_state() const
{
    const State* state = new movableState(id, coords, direction, "tank", length, height);
    return state;
}