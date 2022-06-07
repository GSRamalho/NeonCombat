#pragma once
#include <SFML/Graphics.hpp>

class Entity
{
private:

protected:
	float posX;
	float posY;
	float obstSize;
	sf::RectangleShape body;
	sf::RenderWindow* window;

public:
	Entity();
	~Entity();
	void setWindow(sf::RenderWindow* window) { this->window = window; }
	void draw() { window->draw(body); }
	float getBodySize() { return body.getSize().x; }
	void setBodyPosition(float x, float y) { this->body.setPosition(x, y); }
	sf::FloatRect getBodyGlobalBounds() { return this->body.getGlobalBounds(); }
	sf::RectangleShape getBody() { return this->body; }
};

