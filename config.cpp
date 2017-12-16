//
// Created by mrfalcon on 28.11.17.
//

#include "config.h"

coordinates& coordinates::operator=(const coordinates &coords)
{
    this->x = coords.x;
    this->y = coords.y;
}
ostream& operator<<(ostream& os, const coordinates& coords)
{
    os << coords.x << coords.y;
}
void operator>>(istream& is, coordinates& coords)
{
    is >> coords.x;
    is >> coords.y;
}
State::State(const int id, const coordinates &coords, const string& type, const double length, const double height)
        :coords(coords),
        type(type),
        id(id),
        length(length),
        height(height)
        {}
State::~State() {}
FloatRect State::get_rect() const
{
    return FloatRect(coords.x, coords.y, length, height);
}
movableState::movableState(const int id, const coordinates &coords, const int direction, const string& type,
                           const double length, const double height)
        :State(id, coords, type, length, height),
         direction(direction)
{}
movableState::~movableState() {}
BoomState::BoomState(const int id, const coordinates &coords, const string &type, const double length,
                     const double height, const int tik)
        :State(id, coords, type, length, height),
         tik(tik)
{}
BoomState::~BoomState() {}
Action::Action(const int id, const int action)
        :id(id),
         action(action)
{}
void predraw()
{
    image.loadFromFile("/home/mrfalcon/CLionProjects/resource/Resources/Sprites/60016.png");
    image.createMaskFromColor(Color(0, 0, 0));
    texture.loadFromImage(image);
    Tank_Sprites = new Sprite[8];
    Bullet_Sprites = new Sprite[4];
    Boom_Sprites = new Sprite[3];
    for(int i = 0; i < 8; ++i) {
        Tank_Sprites[i].setTexture(texture);
        Tank_Sprites[i].scale(3, 3);
    }
    for(int i = 0; i < 4; ++i) {
        Bullet_Sprites[i].setTexture(texture);
        Bullet_Sprites[i].scale(2, 2);
    }
    for(int i = 0; i < 3; ++i)
    {
        Boom_Sprites[i].setTexture(texture);
        Boom_Sprites[i].scale(2, 2);
    }
    Tank_Sprites[0].setTextureRect(IntRect(64, 0, 15, 15));
    Tank_Sprites[1].setTextureRect(IntRect(80, 0, 15, 15));
    Tank_Sprites[2].setTextureRect(IntRect(0, 1, 15, 15));
    Tank_Sprites[3].setTextureRect(IntRect(16, 1, 15, 15));
    Tank_Sprites[4].setTextureRect(IntRect(97, 0, 15, 15));
    Tank_Sprites[5].setTextureRect(IntRect(112, 0, 15, 15));
    Tank_Sprites[6].setTextureRect(IntRect(33, 0, 15, 15));
    Tank_Sprites[7].setTextureRect(IntRect(49, 0, 15, 15));
    Bullet_Sprites[0].setTextureRect(IntRect(337, 100, 7, 7));
    Bullet_Sprites[1].setTextureRect(IntRect(344, 100, 7, 7));
    Bullet_Sprites[2].setTextureRect(IntRect(321, 101, 7, 7));
    Bullet_Sprites[3].setTextureRect(IntRect(329, 100, 7, 7));
    Boom_Sprites[0].setTextureRect(IntRect(258, 129, 13, 13));
    Boom_Sprites[1].setTextureRect(IntRect(272, 128, 16, 16));
    Boom_Sprites[2].setTextureRect(IntRect(287, 128, 16, 16));
}