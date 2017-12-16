//
// Created by mrfalcon on 02.12.17.
//

#include "KeyboardController.h"

int KeyboardController::get_action(Event& event) 
{
    if(event.key.code == Keyboard::S)
        return DOWN;
    if(event.key.code == Keyboard::D)
        return RIGHT;
    if(event.key.code == Keyboard::W)
        return UP;
    if(event.key.code == Keyboard::A)
        return LEFT;
    if(event.key.code == Keyboard::Space)
        return SHOOT;
}