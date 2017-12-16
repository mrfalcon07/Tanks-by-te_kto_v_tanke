//
// Created by mrfalcon on 27.11.17.
//

#ifndef TANKS_PHISICALMOVABLE_H
#define TANKS_PHISICALMOVABLE_H

#include "PhisicalObject.h"

class PhisicalMovable : public PhisicalObject
{
public:
    PhisicalMovable(const int id, const double speed);
    ~PhisicalMovable();
    const State* calculate(std::vector<const State*>& state, const State* current_state, const int direction) = 0;
protected:
    const string& collision(std::vector<const State*>& state, State* current_state) const;
    void move(State* current_state, const int direction) const;
    double speed;
};

#endif //TANKS_PHISICALMOVABLE_H
