#include "EntityList.h"

EntityList::EntityList()
{
}

EntityList::~EntityList()
{
}

void EntityList::drawEntities(sf::RenderWindow* window)
{
	for (int i = 0; i < LEs.getLength(); i++) {
		LEs.getItem(i)->draw();
	}
}

void EntityList::moveEntities()
{
	for (int i = 0; i < LEs.getLength(); i++) {
		LEs.getItem(i)->move();
	}
}
