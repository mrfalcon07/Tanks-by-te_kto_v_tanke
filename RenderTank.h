//
// Created by mrfalcon on 28.11.17.
//

#ifndef TANKS_RENDERTANK_H
#define TANKS_RENDERTANK_H

#include "RenderMovable.h"

class RenderTank : public RenderMovable
{
public:
    RenderTank(const int id);
    ~RenderTank();
    void draw(sf::RenderWindow& window, const State* current_state) const;
};

#endif //TANKS_RENDERTANK_H
