#include "Player.h"
#include <SFML/Window/Event.hpp>
#include <iostream>

using namespace std;
Player::Player()
{
    life_num = 3;
    body.setFillColor(sf::Color::Blue);
}

Player::~Player()
{
}

void Player::move()
{
    sf::Vector2u size = window->getSize();
    sf::Vector2f playerPosition = body.getPosition();
    sf::Vector2f playerSize = body.getSize();

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && playerPosition.x < (size.x - playerSize.x)) {
        body.move(sf::Vector2f(speed, 0.f));
        direction = 1;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && playerPosition.x > 0) {
        body.move(sf::Vector2f(-speed, 0.f));
        direction = 0;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && playerPosition.y > 0) {
        if (!isJumping)
            body.move(sf::Vector2f(0, jump_speed));
    }

    if (playerPosition.y < (size.y - playerSize.y)) {
        body.move(sf::Vector2f(0.0f, fall_speed));
        if(playerPosition.y <= maxJumpHeight)
            isJumping = true;
    }
    else
    {
        isJumping = false;
        maxJumpHeight = playerPosition.y - (playerSize.y*3);
    }



    posX = playerPosition.x;
    posY = playerPosition.y;
}