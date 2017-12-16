//
// Created by mrfalcon on 28.11.17.
//

#include "RenderMovable.h"

RenderMovable::RenderMovable(const int id, Sprite* sprites)
        :RenderObject(id),
         sprites(sprites)
{}
RenderMovable::~RenderMovable()
{}
