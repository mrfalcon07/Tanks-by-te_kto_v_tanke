//
// Created by mrfalcon on 26.11.17.
//

#include "AbstructMovable.h"

AbstructMovable::AbstructMovable(const int id, const coordinates &coords, const int direction, const double length, const double height)
        :AbstructObject(id, coords, length, height),
         direction(direction)
{}
AbstructMovable::~AbstructMovable() {}
void AbstructMovable::set_state(const coordinates &coords, const int direction)
{
    this->coords = coords;
    this->direction = direction;
}

