#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
class WindowManager
{
private:
	sf::RenderWindow window;
	Player player1;
public:
	WindowManager();
	~WindowManager();
	void execute();
};

