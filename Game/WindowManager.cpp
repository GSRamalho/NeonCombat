#include "WindowManager.h"
WindowManager::WindowManager() :
    window(sf::VideoMode(1080, 720), "Swamp Bros")
{
    player1.setWindow(&window);
    execute();
}
WindowManager::~WindowManager()
{
}
void WindowManager::execute()
{
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }

        player1.move();
        window.clear();
        player1.draw();
        window.display();

    }
}
