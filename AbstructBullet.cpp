//
// Created by mrfalcon on 26.11.17.
//

#include "AbstructBullet.h"

AbstructBullet::AbstructBullet(const int id, const coordinates &coords, const int direction, const double length,
               const double height)
        :AbstructMovable(id, coords, direction, length, height)
{}
AbstructBullet::~AbstructBullet() {}
const State* AbstructBullet::get_state() const
{
    const State* state = new movableState(id, coords, direction, "bullet", length, height);
    return state;
}
