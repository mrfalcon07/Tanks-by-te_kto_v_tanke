//
// Created by mrfalcon on 26.11.17.
//

#ifndef TANKS_TANK_H
#define TANKS_TANK_H

#include "AbstructMovable.h"

class AbstructTank : public AbstructMovable
{
public:
    AbstructTank(const int id, const coordinates& coords = {0,0}, const int direction = DOWN, const double length = 45, const double height = 45);
    ~AbstructTank();
    const State* get_state() const;
};

#endif //TANKS_TANK_H
