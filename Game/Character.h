#pragma once
#include "Entity.h"
class Character :public Entity
{
protected:
    float speed = 2.0f;
    float fall_speed = speed*3;
    float jump_speed = -fall_speed*1.5;
    int life_num;
    int direction = 1;
    float maxJumpHeight;
    float cantGoY = 720;
    float cantGoX = 0;
public:
    Character();
    ~Character();
    int getLife();
    void setCantGoY(float value) { this->cantGoY = value; }
    void setCantGoX(float value) { this->cantGoX = value; }
};