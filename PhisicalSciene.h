//
// Created by mrfalcon on 22.11.17.
//

#ifndef TANKS_PHISICALSCIENE_H
#define TANKS_PHISICALSCIENE_H

#include "InterfaceSciene.h"
#include "PhisicalObject.h"
#include "PhisicalTank.h"
#include "PhisicalBullet.h"
#include "AbstructSciene.h"
#include "PhisicalBoom.h"
#include "RenderSciene.h"
#include <iostream>
#include <vector>

class PhisicalSciene : public InterfaceSciene
{
public:
    PhisicalSciene(AbstructSciene* as, RenderSciene* rs);
    ~PhisicalSciene();
    void add(const int id, const string& type);
    vector<const State*>& calculate(vector<const Action*>& action);
    void destroy(const int id);
private:
    map <int, PhisicalObject*> objects;
    AbstructSciene* as;
    RenderSciene* rs;
};

#endif //TANKS_PHISICALSCIENE_H
