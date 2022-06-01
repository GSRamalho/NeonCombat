#pragma once
#include "Entity.h"
class Character :public Entity
{
protected:
    float fall_speed = 10.0f;
    float speed = 0.3f;
    int life_num;
public:
    Character();
    ~Character();
    int getLife();
};