//
// Created by mrfalcon on 21.11.17.
//

#ifndef TANKS_INTERFACEOBJECT_H
#define TANKS_INTERFACEOBJECT_H

class InterfaceObject
{
public:
    InterfaceObject(const int id);
    virtual ~InterfaceObject();
protected:
    const int id;
};

#endif //TANKS_INTERFACEOBJECT_H
