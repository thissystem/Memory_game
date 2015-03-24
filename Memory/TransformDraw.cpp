#include "TransformDraw.h"

void TransformDraw::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(mySprite, states);
}