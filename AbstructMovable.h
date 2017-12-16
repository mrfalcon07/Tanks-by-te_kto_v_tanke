//
// Created by mrfalcon on 26.11.17.
//

#ifndef TANKS_MOVABLE_H
#define TANKS_MOVABLE_H

#include "AbstructObject.h"

class AbstructMovable : public AbstructObject
{
public:
    AbstructMovable(const int id, const coordinates& coords, const int direction, const double length, const double height);
    ~AbstructMovable();
    const State* get_state() const = 0;
    void set_state(const coordinates& coords, const int direction);
protected:
    int direction;
};

#endif //TANKS_MOVABLE_H
