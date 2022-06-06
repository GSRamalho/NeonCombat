#include "Level.h"
#include "Platform.h"

Level::Level()
{
   cm.setLO(&platform);
}

Level::Level(Player* player1, sf::RenderWindow* window)
{

	this->window = window;
	this->player1 = player1;
	entityList = new EntityList();
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
    sf::Texture texture;
    sf::Text text;


    
    platform.setWindow(window);

    // Logic
    player->move();

    // Display
    window->clear(sf::Color::Black);

    // Show player
    player->draw();
    
    // Show colliders
    for (int i = 0; i < 1; i++)
    {
        // (window->getSize().y)-platform.getBodySize()
        platform.setBodyPosition(i * 50, 200);
        cm.verify_collisions(player);
        platform.draw();
        
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
