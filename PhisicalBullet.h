//
// Created by mrfalcon on 27.11.17.
//

#ifndef TANKS_PHISICALBULLET_H
#define TANKS_PHISICALBULLET_H

#include "PhisicalMovable.h"

class PhisicalBullet : public PhisicalMovable
{
public:
    PhisicalBullet(const int id);
    ~PhisicalBullet();
    const State* calculate(std::vector<const State*>& state, const State* current_state, const int direction = 0);
};


#endif //TANKS_PHISICALBULLET_H
