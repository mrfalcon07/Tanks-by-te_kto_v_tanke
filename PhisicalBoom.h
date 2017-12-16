//
// Created by mrfalcon on 29.11.17.
//

#ifndef TANKS_PHISICALBOOM_H
#define TANKS_PHISICALBOOM_H

#include "PhisicalObject.h"

class PhisicalBoom : public PhisicalObject
{
public:
    PhisicalBoom(const int id);
    ~PhisicalBoom();
    const State* calculate(std::vector<const State*>& state, const State* current_state, const int direction = 0);
protected:
    const string& collision(std::vector<const State*>& state, State* current_state) const;
};

#endif //TANKS_PHISICALBOOM_H
