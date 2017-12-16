//
// Created by mrfalcon on 29.11.17.
//

#ifndef TANKS_RENDERBOOM_H
#define TANKS_RENDERBOOM_H

#include "RenderObject.h"

class RenderBoom : public RenderObject
{
public:
    RenderBoom(const int id);
    ~RenderBoom();
    void draw(sf::RenderWindow& window, const State* current_state) const;
private:
    Sprite* sprites;
};

#endif //TANKS_RENDERBOOM_H
