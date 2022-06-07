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
    sf::RenderWindow window;
    Player player;
    Level * level = new Level(&player, &window);
public:
    Game();
    ~Game();
    void execute();
};

