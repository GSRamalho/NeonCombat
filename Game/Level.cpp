#include "Level.h"
#include "Platform.h"
#include "Entity.h"

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
    
    // Show enemies
    entityList->drawEntities(window);
    entityList->moveEntities();

    reposition_platform();

    // Show player's life
    text.setFont(font);
    text.setString("Life: " + std::to_string(player1->getLife())+" Enemies: " + std::to_string(entityList->LEs.getLength()));
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);
    window->draw(text);
}

void Level::initializeElements()
{
    Enemy* enemy1 = new Enemy(0.f, 0.f, window);
    Enemy* enemy2 = new Enemy(650.f, 360.f, window);
    Enemy* enemy3 = new Enemy(400.f, 0.f, window);
    entityList->LEs.push(enemy1);
    entityList->LEs.push(enemy2);
    entityList->LEs.push(enemy3);
    //entityList->LEs.push(new Enemy(300.f, 500.f, window));
}

void Level::reposition_platform()
{
    for (int i = 0; i < window->getSize().x/platform.getBodySize(); i++)
    {
        platform.setBodyPosition(i * platform.getBodySize(), (window->getSize().y-platform.getBodySize()));
        cm.verify_collisions(player1);
        cm.verify_collisions(entityList->LEs.getItem(0));
        cm.verify_collisions(entityList->LEs.getItem(1));
        cm.verify_collisions(entityList->LEs.getItem(2));
        platform.draw();
    }
    for (int i = 0; i < (window->getSize().x / platform.getBodySize())/3; i++)
    {
        platform.setBodyPosition(i * platform.getBodySize(), 450);
        cm.verify_collisions(player1);
        cm.verify_collisions(entityList->LEs.getItem(0));
        cm.verify_collisions(entityList->LEs.getItem(1));
        cm.verify_collisions(entityList->LEs.getItem(2));
        platform.draw();
    }
    for (int i = (window->getSize().x / platform.getBodySize()) / 2.8; i < window->getSize().x; i++)
    {
        platform.setBodyPosition(i * platform.getBodySize(), 250);
        cm.verify_collisions(player1);
        cm.verify_collisions(entityList->LEs.getItem(0));
        cm.verify_collisions(entityList->LEs.getItem(1));
        cm.verify_collisions(entityList->LEs.getItem(2));
        platform.draw();
    }
    for (int i = (window->getSize().y / platform.getBodySize()) / 1.5; i < window->getSize().y; i++)
    {
        platform.setBodyPosition(650, i * platform.getBodySize());
        cm.verify_collisions(player1);
        cm.verify_collisions(entityList->LEs.getItem(0));
        cm.verify_collisions(entityList->LEs.getItem(1));
        cm.verify_collisions(entityList->LEs.getItem(2));
        platform.draw();
    }

}
