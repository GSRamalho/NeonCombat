#include "Collisions_Manager.h"
#include <iostream>

using namespace std;
Collisions_Manager::Collisions_Manager(Platform* platform)
{
    body.setFillColor(sf::Color::Green);
    body.setPosition(100, 100);
    LO.push(platform = new Platform());
}

Collisions_Manager::Collisions_Manager()
{
}

Collisions_Manager::~Collisions_Manager()
{
}

void Collisions_Manager::setLO(Platform *obstacle)
{
    LO.push(obstacle);
}

void Collisions_Manager::verify_collisions()
{

}
