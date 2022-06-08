#pragma once
#include "Character.h"
class Enemy :public Character
{
private:
    bool isJumping = false;

public:
    Enemy();
    Enemy(float x, float y, sf::RenderWindow* window);
    ~Enemy();
    void move();

};

