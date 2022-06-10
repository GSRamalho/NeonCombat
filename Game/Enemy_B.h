#pragma once
#include "Enemy.h"
class Enemy_B :public Enemy
{
public:
	Enemy_B();
	~Enemy_B();
	Enemy_B(float x, float y, sf::RenderWindow* w);
	
};
