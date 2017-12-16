//
// Created by mrfalcon on 03.12.17.
//

#ifndef PLAYER_AI_H
#define PLAYER_AI_H

#include "Controller.h"

class AI {
public:
    AI(const int id);
    void get_action(AbstractScene *abstract_scene, PhisicalScene *phisical_scene);
private:
    const int id;
};


#endif //PLAYER_AI_H
