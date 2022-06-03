#include "Level.h"
#include "Platform.h"

Level::Level()
{
}

Level::Level(Player* player1, sf::RenderWindow* window)
{

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
    platform.draw();
    platform.setBodyPosition(100, 0);
    platform.draw();

    // Show player's life
    text.setFont(font);
    text.setString("Life: " + std::to_string(player->getLife()));
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);
    window->draw(text);
    //create_platforms();
    //cm.getObstacle(0).draw();
  
        
    
}

void Level::initializeElements()
{
	entityList->LEs.push(player1);
	//entityList->LEs.push(enemy1);
}

void Level::create_platforms()
{
    Platform platform;
    platform.setWindow(window);
    cm.setLO(&platform);
    platform.setBodyPosition(0.f, 200.f);
 /*
    for (int i = 1; i < (window->getSize().x / platform.getBodySize()); i++)
    {
        Platform platform;
        platform.setWindow(window);
        cm.setLO(&platform);
        platform.setBodyPosition((i * platform.getBodySize()).f, 200.f);
        //window->getSize().y - (platform.getBodySize())
    }
    */
}
