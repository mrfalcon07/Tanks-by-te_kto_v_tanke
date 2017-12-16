//
// Created by mrfalcon on 21.11.17.
//

#ifndef TANKS_CONFIG_H
#define TANKS_CONFIG_H

#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

struct coordinates
{
    double x;
    double y;
    coordinates& operator=(const coordinates& coords);
};
ostream& operator<<(ostream& os, const coordinates& coords);
void operator>>(istream& is, coordinates& coords);

struct State
{
    State(const int id, const coordinates& coords, const string& type, const double length, const double height);
    virtual ~State();
    FloatRect get_rect() const;
    const int id;
    string type;
    coordinates coords;
    const double length;
    const double height;
};
struct movableState : public State
{
    movableState(const int id, const coordinates& coords, const int direction, const string& type, const double length, const double height);
    ~movableState();
    int direction;
};
struct BoomState : public State
{
    BoomState(const int id, const coordinates& coords, const string& type, const double length, const double height, const int tik);
    ~BoomState();
    int tik;
};

struct Action
{
    Action(const int id, const int action);
    const int id;
    const int action;
};


inline Image image;
inline Texture texture;
inline Sprite* Tank_Sprites;
inline Sprite* Bullet_Sprites;
inline Sprite* Boom_Sprites;
void predraw();

#define DOWN 0
#define UP 1
#define RIGHT 2
#define LEFT 3
#define SHOOT 4

inline double t;

#endif //TANKS_CONFIG_H
