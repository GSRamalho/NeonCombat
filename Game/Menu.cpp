#include "Menu.h"

Menu::Menu()
{
    options.push_back("Level A");
    options.push_back("Level B");
    options.push_back("Leaderboard");
}

Menu::~Menu()
{
}

void Menu::select_options(Options* option, sf::RenderWindow* window)
{
    
    sf::Font font;
    if (!font.loadFromFile("resources/arial.ttf"))
    {
        exit(1);
    }
    sf::Text text;

    for (int i = 0; i < options.size(); i++)
    {

        text.setFont(font);
        text.setString(options[i]);
        text.setCharacterSize(24);
        text.setFillColor(sf::Color::White);
        text.setPosition(500.0, 250 + (50 * i));

        window->draw(text);
        
    }

    if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition().x >= 900 &&
       sf::Mouse::getPosition().x <= 1000.0 && sf::Mouse::getPosition().y >= 460 &&
        sf::Mouse::getPosition().y <= 490) {
        window->clear(sf::Color::Black);
         *option = Options::LEVEL;
    }
 }

