#pragma once
#include "Entity.h"
class Character :public Entity
{
protected:
    float speed = 5.000022f;
    float fall_speed = 20.000055f;
    float jump_speed = -fall_speed*2.0f;
    int life_num;
    int direction = 1;
    float maxJumpHeight;
    float collidedY;
    float collidedX;
public:
    Character();
    ~Character();
    int getLife();
    void setSpeed(float s);
    void setFlyingSpeed(float s);
    void setCollidedY(float value) { this->collidedY = value; }
    void setCollidedX(float value) { this->collidedX = value; }
};