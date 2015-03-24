#include "Squares.h"

Squares::Squares(float posX, float posY)
{
	this->rectangle.setSize(sf::Vector2f(20.0f, 20.0f));
	this->rectangle.setTexture(nullptr, false);
	this->setPosition(posX, posY);

}
Squares::~Squares()
{

}
void Squares::Draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(rectangle, states);
}
