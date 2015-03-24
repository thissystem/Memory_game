#include "TransformDraw.h"

void TransformDraw::Draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(mySprite, states);
}