//
// Created by mrfalcon on 28.11.17.
//

#include "RenderSciene.h"

RenderSciene::RenderSciene(AbstructSciene *as)
        :as(as)
{
    predraw();
}
RenderSciene::~RenderSciene()
{
    for(auto i = objects.begin(); i != objects.end(); ++i)
        delete((*i).second);
}
void RenderSciene::draw(RenderWindow& window)
{
    vector<const State*> state;
    state = as->get_state();
    for(int i = 0; i < state.size(); ++i)
        objects[state[i]->id]->draw(window, state[i]);
}
void RenderSciene::add(const int id, const string &type)
{
    RenderObject* ro;
    if(type == "tank")
        ro = new RenderTank(id);
    else if(type == "bullet")
        ro = new RenderBullet(id);
    else if(type == "boom")
        ro = new RenderBoom(id);
    //else smth
    objects.insert(pair(id, ro));
}
void RenderSciene::destroy(const int id)
{
    delete(objects[id]);
    for(auto i = objects.begin(); i != objects.end(); ++i)
        if((*i).first == id)
            objects.erase(i);
}
