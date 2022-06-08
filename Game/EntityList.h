#pragma once
#include "List.h"
#include "Entity.h"
#include "Enemy.h"
class EntityList
{
public:
	EntityList();
	~EntityList();
	List<Enemy> LEs;
	void drawEntities(sf::RenderWindow* window);
	void moveEntities();
};

