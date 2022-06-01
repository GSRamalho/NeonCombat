#pragma once


#include <vector>
#include "Collisions_Manager.h"
#include "Player.h"
//#include "Enemy.h"
#include "EntityList.h"
#include <SFML/Graphics.hpp>


class Level
{
public:
	Level();
	Level(Player* player1, sf::RenderWindow* window);
	~Level();
	EntityList* getEntityList() { return entityList; }
	void display_level(Player* player, sf::RenderWindow* window);
	std::vector<Collisions_Manager> colliders;
private:
	EntityList* entityList;
	//Enemy* enemy1;
	Player* player1;
	sf::RenderWindow* window;
	void initializeElements();
};

