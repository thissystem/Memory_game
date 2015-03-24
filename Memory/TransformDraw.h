#ifndef TRANSFORMDRAW_H
#define TRANSFORMDRAW_H

#include <SFML/Graphics.hpp>

class TransformDraw : public sf::Transformable, public sf::Drawable//: public sf::Drawable, public sf::Transformable
{
public:
	TransformDraw();
	virtual ~TransformDraw();
private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	sf::Sprite mySprite;
};

#endif