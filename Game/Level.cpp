#include "Level.h"
#include "Platform.h"

Level::Level()
{
   
}

Level::Level(Player* player1, sf::RenderWindow* window)
{
    cm.setLO(&platform);
	this->window = window;
	this->player1 = player1;
	entityList = new EntityList();
	initializeElements();
 
}

Level::~Level()
{
}

void Level::display_level()
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
    player1->move();

    // Display
    window->clear(sf::Color::Black);

    // Show player
    player1->draw();
    
    reposition_platform();

    // Show player's life
    text.setFont(font);
    text.setString("Life: " + std::to_string(player1->getLife()));
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);
    window->draw(text);
}

void Level::initializeElements()
{
	entityList->LEs.push(player1);
	//entityList->LEs.push(enemy1);
}

void Level::reposition_platform()
{
    for (int i = 0; i < window->getSize().x/platform.getBodySize(); i++)
    {
        platform.setBodyPosition(i * platform.getBodySize(), (window->getSize().y-platform.getBodySize()));
        cm.verify_collisions(player1);
        platform.draw();
    }
    for (int i = 0; i < (window->getSize().x / platform.getBodySize())/3; i++)
    {
        platform.setBodyPosition(i * platform.getBodySize(), 450);
        cm.verify_collisions(player1);
        platform.draw();
    }
    for (int i = (window->getSize().x / platform.getBodySize()) / 2.8; i < window->getSize().x; i++)
    {
        platform.setBodyPosition(i * platform.getBodySize(), 250);
        cm.verify_collisions(player1);
        platform.draw();
    }
    for (int i = (window->getSize().y / platform.getBodySize()) / 1.5; i < window->getSize().y; i++)
    {
        platform.setBodyPosition(650, i * platform.getBodySize());
        cm.verify_collisions(player1);
        platform.draw();
    }

}
