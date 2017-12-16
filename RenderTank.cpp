//
// Created by mrfalcon on 28.11.17.
//

#include "RenderTank.h"

RenderTank::RenderTank(const int id)
        :RenderMovable(id, Tank_Sprites)
{}
RenderTank::~RenderTank() {}
void RenderTank::draw(sf::RenderWindow &window, const State *current_state) const
{
    Sprite drawable_sprite;
    switch(dynamic_cast<const movableState*>(current_state)->direction)
    {
        case DOWN:
            if(current_state->coords.y / 2.0 == 0)
                drawable_sprite = sprites[0];
            else
                drawable_sprite = sprites[1];
            break;
        case UP:
            if(current_state->coords.y / 2.0 == 0)
                drawable_sprite = sprites[2];
            else
                drawable_sprite = sprites[3];
            break;
        case RIGHT:
            if(current_state->coords.x / 2.0 == 0)
                drawable_sprite = sprites[4];
            else
                drawable_sprite = sprites[5];
            break;
        case LEFT:
            if(current_state->coords.x / 2.0 == 0)
                drawable_sprite = sprites[6];
            else
                drawable_sprite = sprites[7];
            break;
    }
    drawable_sprite.setPosition(current_state->coords.x, current_state->coords.y);
    window.draw(drawable_sprite);
}

