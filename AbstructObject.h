//
// Created by mrfalcon on 21.11.17.
//

#ifndef TANKS_ABSTRUCTOBJECT_H
#define TANKS_ABSTRUCTOBJECT_H
#include "InterfaceObject.h"
#include "config.h"
#include <SFML/Graphics.hpp>

class AbstructObject : public InterfaceObject
{
public:
    AbstructObject(const int id, const coordinates& coords, const double length, const double height);
    ~AbstructObject();
    virtual const State* get_state() const = 0;
    virtual void set_state(const coordinates&, const int) = 0;
protected:
    coordinates coords;
    const double height;
    const double length;
};

#endif //TANKS_ABSTRUCTOBJECT_H
