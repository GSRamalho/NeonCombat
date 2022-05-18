#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::move()
{
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		body.move(sf::Vector2f(1.0f, 0.f));
	}if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		body.move(sf::Vector2f(-1.0f, 0.f));
	}if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		body.move(sf::Vector2f(0.0f, -1.0f));
	}
}
