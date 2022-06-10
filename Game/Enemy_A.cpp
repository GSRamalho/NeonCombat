#include "Enemy_A.h"
Enemy_A::Enemy_A()
{
    this->setSpeed(10.000022f);
    this->setFlyingSpeed(20.000055f);
	body.setFillColor(sf::Color::Magenta);
	body.setPosition(100.f, 0.f);
}
Enemy_A::Enemy_A(float x, float y, sf::RenderWindow* w)
{
    this->setSpeed(10.000022f);
    this->setFlyingSpeed(20.000055f);
	body.setFillColor(sf::Color::Magenta);
	body.setPosition(x, y);
	this->window = w;
}
Enemy_A::~Enemy_A()
{
}