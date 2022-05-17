#include "WindowManager.h"
WindowManager::WindowManager() :
	window(sf::VideoMode(1080, 720), "Swamp Bros"), shape(sf::Vector2f(100.f, 100.f))
{
    shape.setFillColor(sf::Color::Green);
    executar();
}
void WindowManager::executar()
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
        window.draw(shape);
        window.display();

    }
}
