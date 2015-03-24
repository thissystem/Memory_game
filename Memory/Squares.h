#ifndef SQUARES_H
#define SQUARES_H
//////////////
// Includes //
//////////////
#include "TransformDraw.h"

class Squares : public sf::Drawable, public sf::Transformable
{
public:
	virtual ~Squares();
	void flipSquare(bool picked);
	Squares(float posX, float posY);
	Squares(Squares& other);
	Squares& operator=(const Squares& other);

private:
	Squares();
	virtual void Draw(sf::RenderTarget& target, sf::RenderStates states) const;
	sf::RectangleShape rectangle;
};
#endif