#include "Collisions_Manager.h"

Collisions_Manager::Collisions_Manager()
{
    body.setFillColor(sf::Color::Green);
    body.setPosition(100, 100);
}

Collisions_Manager::~Collisions_Manager()
{
}

void Collisions_Manager::setLO(Obstacle *obstacle)
{
    LO.push(obstacle);
}
