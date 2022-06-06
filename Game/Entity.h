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
	void setPosX() { this->posX = body.getPosition().x; }
	void setPosY() { this->posY = body.getPosition().y; }
	void setObstSize() { this->obstSize = body.getSize().x; }
	float getPosX() { return this->posX; }
	float getPosY() { return this->posY; }
	float getObstSize() { return this->obstSize; }
	sf::FloatRect getBodyGlobalBounds() { return this->body.getGlobalBounds(); }
};

