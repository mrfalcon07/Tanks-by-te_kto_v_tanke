//
// Created by mrfalcon on 29.11.17.
//

#include "RenderBoom.h"

RenderBoom::RenderBoom(const int id)
        :RenderObject(id),
         sprites(Boom_Sprites)
{}
RenderBoom::~RenderBoom() {}
void RenderBoom::draw(sf::RenderWindow& window, const State* current_state) const
{
    Sprite drawable_sprite = sprites[dynamic_cast<const BoomState*>(current_state)->tik];
    drawable_sprite.setPosition(current_state->coords.x, current_state->coords.y);
    window.draw(drawable_sprite);
}

