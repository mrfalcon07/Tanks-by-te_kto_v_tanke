//
// Created by mrfalcon on 21.11.17.
//

#ifndef TANKS_ABSTRUCTSCIENE_H
#define TANKS_ABSTRUCTSCIENE_H
#include "InterfaceSciene.h"
#include "AbstructObject.h"
#include "AbstructTank.h"
#include "AbstructBullet.h"
#include "AbstructBoom.h"
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class AbstructSciene : public InterfaceSciene
{
public:
    AbstructSciene();
    ~AbstructSciene();
    void add(const int id, const string& type);
    void add(const int id, const string& type, const coordinates& coords, const int direction);
    const State* get_state(const int id);
    vector<const State*>& get_state();
    void set_state(vector<const State*>& state);
    void destroy(const int id);
private:
    map <int, AbstructObject*> objects;
};

#endif //TANKS_ABSTRUCTSCIENE_H
