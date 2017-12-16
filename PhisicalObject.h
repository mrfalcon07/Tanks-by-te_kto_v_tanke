//
// Created by mrfalcon on 21.11.17.
//

#ifndef TANKS_PHISICALOBJECT_H
#define TANKS_PHISICALOBJECT_H
#include "InterfaceObject.h"
#include "config.h"
#include <vector>

class PhisicalObject : public InterfaceObject
{
public:
    PhisicalObject(const int id);
    ~PhisicalObject();
    virtual const State* calculate(std::vector<const State*>& state, const State* current_state, const int direction = -1) = 0;
protected:
    virtual const string& collision(std::vector<const State*>& state, State* current_state) const = 0;
};

#endif //TANKS_PHISICALOBJECT_H
