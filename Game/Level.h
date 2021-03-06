#pragma once
#include <vector>
#include "Collisions_Manager.h"
#include "Player.h"
#include "Enemy.h"
#include "Enemy_A.h"
#include "EntityList.h"
#include <SFML/Graphics.hpp>
#include "Platform.h"


class Level
{
public:
	Level();
	Level(Player* player1, sf::RenderWindow* window);
	~Level();
	EntityList* getEntityList() { return entityList; }
	void display_level();
	void initializeElements();
	void reposition_platform();
private:
	Collisions_Manager cm;
	EntityList* entityList;
	//List<Enemy> ListEnemies;
	Platform platform;
	Player* player1;
	sf::RenderWindow* window;
	
};

