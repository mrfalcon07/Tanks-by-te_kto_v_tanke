//
// Created by mrfalcon on 28.11.17.
//

#ifndef TANKS_RENDERSCIENE_H
#define TANKS_RENDERSCIENE_H

#include "InterfaceSciene.h"
#include "AbstructSciene.h"
#include "RenderObject.h"
#include "config.h"
#include "RenderTank.h"
#include "RenderBullet.h"
#include "RenderBoom.h"

class RenderSciene : public InterfaceSciene
{
public:
    RenderSciene(AbstructSciene* as);
    ~RenderSciene();
    void add(const int id, const string& type);
    void draw(RenderWindow& window);
    void destroy(const int id);
private:
    map <int, RenderObject*> objects;
    AbstructSciene* as;
};

#endif //TANKS_RENDERSCIENE_H
