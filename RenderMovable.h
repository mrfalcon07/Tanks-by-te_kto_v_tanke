//
// Created by mrfalcon on 28.11.17.
//

#ifndef TANKS_RENDERMOVABLE_H
#define TANKS_RENDERMOVABLE_H

#include "RenderObject.h"

class RenderMovable : public RenderObject
{
public:
    RenderMovable(const int id , Sprite* sprites);
    ~RenderMovable();
    void draw(sf::RenderWindow& window, const State* current_state) const = 0;
protected:
    Sprite* sprites;
};

#endif //TANKS_RENDERMOVABLE_H
