#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include "Options.h"
class Menu
{
private:
	std::vector< std::string> options;
public:
	Menu();
	~Menu();
	void select_options(Options *option, sf::RenderWindow* window);

};

