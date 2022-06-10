#pragma once
#include "Enemy.h"
class Enemy_A :public Enemy
{
public:
	Enemy_A();
	~Enemy_A();
	Enemy_A(float x, float y, sf::RenderWindow* w);
};

