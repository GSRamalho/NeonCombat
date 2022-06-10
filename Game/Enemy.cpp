#include "Enemy.h"

Enemy::Enemy()
{
	//body.setFillColor(sf::Color::Red);
	body.setPosition(0.f, 0.f);
}
Enemy::Enemy(float x, float y, sf::RenderWindow* w)
{
	body.setFillColor(sf::Color::Red);
	body.setPosition(x, y);
    this->window = w;
}

Enemy::~Enemy()
{
}

void Enemy::move()
{
    sf::Vector2u size = window->getSize();
    sf::Vector2f enemyPosition = body.getPosition();
    sf::Vector2f enemySize = body.getSize();

    /*
    if (enemyPosition.x + enemySize.x == (float)window->getSize().x) {
        direction = 0;
    }
    */
    
    if (enemyPosition.y + 30 < collidedY)
        if (direction==1 && enemyPosition.x < (size.x - enemySize.x)) {
            body.move(sf::Vector2f(speed, 0.f));
            direction = 1;
        }

    if (direction==0 && enemyPosition.x > 0) {
        body.move(sf::Vector2f(-speed, 0.f));
        direction = 0;
    }    
    
    if (enemyPosition.y < (size.y - enemySize.y) && (body.getPosition().y < collidedY - enemySize.y) && flyingSpeed!=20.000055f) {
        body.move(sf::Vector2f(0.0f, fall_speed));
        if (enemyPosition.y <= maxJumpHeight)
            isJumping = true;

    }

    else
    {
        collidedY = (float) window->getSize().y;
        isJumping = false;
        maxJumpHeight = enemyPosition.y - (enemySize.y * 6);
    }
}

void Enemy::setFlyingSpeed(float s)
{
    this->flyingSpeed = s;
}