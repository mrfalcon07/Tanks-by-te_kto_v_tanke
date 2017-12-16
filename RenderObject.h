//
// Created by mrfalcon on 21.11.17.
//

#ifndef TANKS_RENDEROBJECT_H
#define TANKS_RENDEROBJECT_H

#include <SFML/Graphics.hpp>
#include "InterfaceObject.h"
#include "config.h"

class RenderObject: public InterfaceObject
{
public:
    RenderObject(const int id);
    ~RenderObject();
    virtual void draw(sf::RenderWindow& window, const State* current_state) const = 0;
protected:
};

#endif //TANKS_RENDEROBJECT_H
