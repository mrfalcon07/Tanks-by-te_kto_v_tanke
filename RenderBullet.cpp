//
// Created by mrfalcon on 28.11.17.
//

#include "RenderBullet.h"

RenderBullet::RenderBullet(const int id)
        :RenderMovable(id, Bullet_Sprites)
{}
RenderBullet::~RenderBullet() {}
void RenderBullet::draw(sf::RenderWindow &window, const State *current_state) const
{
    Sprite drawable_sprite;
    switch(dynamic_cast<const movableState*>(current_state)->direction)
    {
        case DOWN:
            drawable_sprite = sprites[0];
            break;
        case UP:
            drawable_sprite = sprites[2];
            break;
        case RIGHT:
            drawable_sprite = sprites[1];
            break;
        case LEFT:
            drawable_sprite = sprites[3];
            break;
    }
    drawable_sprite.setPosition(current_state->coords.x, current_state->coords.y);
    window.draw(drawable_sprite);
}


