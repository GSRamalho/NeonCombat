#include "Collisions_Manager.h"
#include <iostream>

using namespace std;

Collisions_Manager::Collisions_Manager()
{
    body.setFillColor(sf::Color::Green);
    body.setPosition(100, 100);
}

Collisions_Manager::~Collisions_Manager()
{
}

void Collisions_Manager::setLO(Platform *obstacle)
{
    LO.push(obstacle);
}

void Collisions_Manager::verify_collisions(Character*chara)
{
    if (LO.getLength() > 0)
    {
        for (int i = 0; i < LO.getLength(); i++)
        {
            if (LO.getItem(i)->getBody().getGlobalBounds().intersects(chara->getBody().getGlobalBounds()))
            {
                chara->setCollidedX(LO.getItem(i)->getBody().getPosition().x);
                chara->setCollidedY(LO.getItem(i)->getBody().getPosition().y);
            }
        }
    }
    else
        cout << "LISTA VAZIA" << endl;
}
