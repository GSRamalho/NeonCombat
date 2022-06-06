#pragma once
#include "Character.h"
class Player :public Character
{
private:
    bool isJumping = false;
    bool intersects = false;
public:
    Player();
    ~Player();
    void move();
    void jump();
    void setIntersects(bool intersection) { this->intersects = intersection; }
    bool getIntersects() { return this->intersects; }
};