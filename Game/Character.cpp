#include "Character.h"

Character::Character()
{
}

Character::~Character()
{
}

int Character::getLife()
{
    return life_num;
}
void Character::setSpeed(float s)
{
    this->speed = s;
}
