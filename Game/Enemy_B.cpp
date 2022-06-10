#include "Enemy_B.h"
Enemy_B::Enemy_B()
{
	body.setFillColor(sf::Color::Red);
}
Enemy_B::~Enemy_B()
{
}
Enemy_B::Enemy_B(float x, float y, sf::RenderWindow* w)
{
	body.setFillColor(sf::Color::Red);
	body.setPosition(x, y);
	this->window = w;
}
