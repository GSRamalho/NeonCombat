#pragma once
#include "Entity.h"
class Character :public Entity
{
protected:
    float fall_speed = 10.0f;
    float speed = 3.0f;
    float jump_speed = -fall_speed*2;
    int life_num;
    int direction = 1;
    float maxJumpHeight;
public:
    Character();
    ~Character();
    int getLife();
};