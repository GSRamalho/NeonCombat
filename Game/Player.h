#pragma once
#include "Character.h"
class Player :public Character
{
private:
    bool isJumping = false;
    
public:
    Player();
    ~Player();
    void move();
    void jump();

};