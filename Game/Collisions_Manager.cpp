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

void Collisions_Manager::verify_collisions(Player*player)
{
    if (LO.getLength() > 0)
    {
        for (int i = 0; i < LO.getLength(); i++)
        {
            if (LO.getItem(i)->getBodyGlobalBounds().intersects(player->getBodyGlobalBounds()))
            {
                player->setCantGoX(LO.getItem(i)->getPosX());
                player->setCantGoY(LO.getItem(i)->getPosY());
            }
        }
    }
    else
        cout << "LISTA VAZIA" << endl;

}
