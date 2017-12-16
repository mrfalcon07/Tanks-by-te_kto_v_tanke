//
// Created by mrfalcon on 26.11.17.
//

#ifndef TANKS_BULLET_H
#define TANKS_BULLET_H

#include "AbstructMovable.h"

class AbstructBullet : public AbstructMovable
{
public:
    AbstructBullet(const int id, const coordinates& coords = {0,0}, const int direction = DOWN, const double length = 14, const double height = 14);
    ~AbstructBullet();
    const State* get_state() const;
};


#endif //TANKS_BULLET_H
