//
// Created by mrfalcon on 25.11.17.
//

#include "AbstructSciene.h"


AbstructSciene::AbstructSciene() {}
AbstructSciene::~AbstructSciene()
{
    for(auto i = objects.begin(); i != objects.end(); ++i)
        delete((*i).second);
}
const State* AbstructSciene::get_state(const int id)
{
    const int *p = &id;
    const State* state = objects[id]->get_state();
    return state;
}
void AbstructSciene::set_state(vector<const State*>& state)
{
    for(int i = 0; i < state.size(); ++i)
    {
        if((state[i]->type == "tank") || (state[i]->type == "bullet"))
            dynamic_cast<AbstructMovable *>(objects[state[i]->id])->set_state(state[i]->coords,
                                                                              dynamic_cast<const movableState *>(state[i])->direction);
        else if(state[i]->type == "boom")
            dynamic_cast<AbstructBoom*>(objects[state[i]->id])->set_state(state[i]->coords, dynamic_cast<const BoomState*>(state[i])->tik);
        //else smth
    }
}
void AbstructSciene::add(const int id, const string& type)
{
    AbstructObject* ao;
    if(type == "tank")
        ao = new AbstructTank(id);
    else if(type == "bullet")
        ao = new AbstructBullet(id);
    //else smth
    objects.insert(pair(id, ao));
}
void AbstructSciene::add(const int id, const string& type, const coordinates& coords, const int direction)
{
    AbstructObject* ao;
    if(type == "tank")
        ao = new AbstructTank(id, coords, direction);
    else if(type == "bullet")
        ao = new AbstructBullet(id, coords, direction);
    else if(type == "boom")
        ao = new AbstructBoom(id, coords);
    //else smth
    objects.insert(pair(id, ao));
}
vector<const State*>& AbstructSciene::get_state()
{
    vector<const State*> *state = new vector<const State*>;
    for(auto i = objects.begin(); i != objects.end(); ++i)
    {
        const State* buf = (*i).second->get_state();
        state->push_back(buf);
    }
    return *state;
}
void AbstructSciene::destroy(const int id)
{
    delete(objects[id]);
    for(auto i = objects.begin(); i != objects.end(); ++i)
        if((*i).first == id)
            objects.erase(i);
}