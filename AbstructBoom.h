//
// Created by mrfalcon on 29.11.17.
//

#ifndef TANKS_ABSTRUCTBOOM_H
#define TANKS_ABSTRUCTBOOM_H

#include "AbstructObject.h"

class AbstructBoom : public AbstructObject
{
public:
    AbstructBoom(const int id, const coordinates& coords, const double length = 45, const double height = 45);
    ~AbstructBoom();
    const State* get_state() const;
    void set_state(const coordinates&, const int);
private:
    int tik;
};

#endif //TANKS_ABSTRUCTBOOM_H
