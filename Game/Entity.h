#pragma once
#include <SFML/Graphics.hpp>

class Entity
{
private:

protected:
	sf::RectangleShape body;
	sf::RenderWindow* window;

public:
	Entity();
	~Entity();
	void setWindow(sf::RenderWindow* window) { this->window = window; }
	void draw() { window->draw(body); }
	float getBodySize() { return body.getSize().x; }
	void setBodyPosition(float x, float y) { this->body.setPosition(x, y); }
};
