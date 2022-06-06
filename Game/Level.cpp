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
    
    generate_platforms();

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

void Level::generate_platforms()
{
    for (int i = 0; i < window->getSize().x/platform.getBodySize(); i++)
    {
        platform.setBodyPosition(i * platform.getBodySize(), (window->getSize().y-platform.getBodySize()));
        cm.verify_collisions(player1);
        platform.draw();
    }
    for (int i = 0; i < (window->getSize().x / platform.getBodySize())/2; i++)
    {
        platform.setBodyPosition(i * platform.getBodySize(), 550);
        cm.verify_collisions(player1);
        platform.draw();
    }

}
