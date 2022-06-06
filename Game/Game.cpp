#include "Game.h"
Game::Game() :
    window(sf::VideoMode(1100, 720), "Swamp Bros")
{
    option = Options::MENU;
    player.setWindow(&window);    
    execute();
}
Game::~Game()
{
}
void Game::execute()
{
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        if (option == Options::MENU)
        {
            //Colocar endereço na construtora
            menu.select_options(&option, &window);
        }
        else if (option == Options::LEVEL)
        {
            
            level->display_level();
        }
        window.display();
    }
}
