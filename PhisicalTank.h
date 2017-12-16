//
// Created by mrfalcon on 27.11.17.
//

#ifndef TANKS_PHISICALTANK_H
#define TANKS_PHISICALTANK_H

#include "PhisicalMovable.h"

class PhisicalTank : public PhisicalMovable
{
public:
    PhisicalTank(const int id);
    ~PhisicalTank();
    const State* calculate(std::vector<const State*>& state, const State* current_state, const int direction);
private:
    void shoot(const State* current_state);
    int health;
};

#endif //TANKS_PHISICALTANK_H
