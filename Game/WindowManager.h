#pragma once
#include <SFML/Graphics.hpp>

class WindowManager
{
private:
	sf::RenderWindow window;
	sf::RectangleShape shape;
public:
	WindowManager();
	void executar();
};

