#include "Squares.h"

Squares::Squares()
{

}
Squares::~Squares()
{

}
void Squares::LoadSpriteSheet()
{
	sf::Texture texture;
	if (!texture.loadFromFile("../data/memory_spritesheet.png"))
	{
		//error
		std::cout << "Couldn't find Queen of Camelot Regular.ttf" << std::endl;
	}
}
void Squares::DrawCards()
{
	// Logik för att rita ut korten
}