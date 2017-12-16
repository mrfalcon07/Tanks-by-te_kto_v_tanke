//
// Created by mrfalcon on 21.11.17.
//

#include "AbstructObject.h"

AbstructObject::AbstructObject(const int id, const coordinates& coords, const double length, const double height)
        : InterfaceObject(id),
          coords(coords),
          length(length),
          height(height)
{}
AbstructObject::~AbstructObject() {}