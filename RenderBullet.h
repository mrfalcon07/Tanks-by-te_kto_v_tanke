//
// Created by mrfalcon on 28.11.17.
//

#ifndef TANKS_RENDERBULLET_H
#define TANKS_RENDERBULLET_H

#include "RenderMovable.h"

class RenderBullet : public RenderMovable
{
public:
    RenderBullet(const int id);
    ~RenderBullet();
    void draw(sf::RenderWindow& window, const State* current_state) const;
};

#endif //TANKS_RENDERBULLET_H
