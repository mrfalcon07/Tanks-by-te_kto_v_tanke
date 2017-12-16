//
// Created by mrfalcon on 29.11.17.
//

#include "AbstructBoom.h"

AbstructBoom::AbstructBoom(const int id, const coordinates &coords, const double length, const double height)
        :AbstructObject(id, coords, length, height),
         tik(0)
{}
AbstructBoom::~AbstructBoom() {}
const State* AbstructBoom::get_state() const
{
    const State* state = new BoomState(id, coords, "boom", length, height, tik);
    return state;
}
void AbstructBoom::set_state(const coordinates &coords, const int tik)
{
    this->coords = coords;
    this->tik = tik;
}

