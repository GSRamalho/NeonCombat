#include "Level.h"

Level::Level()
{
}

Level::Level(Player* player1, sf::RenderWindow* window)
{
    Collisions_Manager coll;
    coll.setWindow(window);
    colliders.push_back(coll);
	this->window = window;
	this->player1 = player1;
	entityList = new EntityList();
	//enemy1 = new Enemy();
	//enemy1->setWindow(window);
	initializeElements();
}

Level::~Level()
{
}

void Level::display_level(Player* player, sf::RenderWindow* window)
{
    sf::Font font;
    if (!font.loadFromFile("resources/arial.ttf"))
    {
        exit(1);
    }
    sf::Text text;

    // Logic
    player->move();

    // Display
    window->clear(sf::Color::Black);

    // Show player
    player->draw();

    // Show colliders
    for (Collisions_Manager collider : colliders)
    {
        collider.draw();
    }

    // Show player's life
    text.setFont(font);
    text.setString("Life: " + std::to_string(player->getLife()));
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);
    window->draw(text);

}

void Level::initializeElements()
{
	entityList->LEs.push(player1);
	//entityList->LEs.push(enemy1);
}
