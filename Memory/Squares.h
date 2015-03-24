#ifndef SQUARES_H
#define SQUARES_H
//////////////
// Includes //
//////////////
#include "TransformDraw.h"

class Squares : public TransformDraw
{
public:
	virtual ~Squares();
	void flipSquare(bool picked);
	Squares(float posX, float posY,	sf::Texture texture);
	Squares(Squares& other);
	Squares& operator=(const Squares& other);
	sf::Texture loadTexture(std::string filename);
private:
	Squares();
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	sf::RectangleShape rectangle;
	
};
#endif