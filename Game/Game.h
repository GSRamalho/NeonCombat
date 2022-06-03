#pragma once
#include <iterator>
#include <SFML/Graphics.hpp>
#include <string>

#include "Level.h"
#include "Menu.h"
#include "Player.h"
#include "Options.h"

class Game
{
private:
    Options option;
    Menu menu;
    Level level;
    sf::RenderWindow window;
    Player player;
    
public:
    Game();
    ~Game();
    void execute();
};

