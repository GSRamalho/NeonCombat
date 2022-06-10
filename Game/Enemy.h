#pragma once
#include "Character.h"
class Enemy :public Character
{
protected:
    bool isJumping = false;
    float flyingSpeed = 0;


public:
    Enemy();
    Enemy(float x, float y, sf::RenderWindow* window);
    ~Enemy();
    void move();
    void setFlyingSpeed(float s);
};
