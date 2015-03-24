#include "Squares.h"

Squares::Squares(float posX, float posY, sf::Texture texture)
{
	
	this->rectangle.setSize(sf::Vector2f(20.0f, 20.0f));
	this->rectangle.setTexture(&texture);
	this->setPosition(posX, posY);

}
Squares::~Squares()
{

}
void Squares::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(rectangle, states);
}
sf::Texture Squares::loadTexture(std::string filename)
{
	sf::Texture texture;
	texture.loadFromFile(filename);

	return texture;
}