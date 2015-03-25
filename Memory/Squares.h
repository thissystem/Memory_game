#ifndef SQUARES_H
#define SQUARES_H
//////////////
// Includes //
//////////////
#include <iostream>
#include "TransformDraw.h"

class Squares
{
public:
	Squares();
	virtual ~Squares();

private:
	void LoadSpriteSheet();// Kan l�gga till filename som parameter f�r att kunna g�ra den mer dynamisk/flexibel
	void DrawCards();// Funktion som ska loopa genom en array och varje kort ska f� en unik sprite
};

#endif

////////////////////////////////////////
////	Tutorial links etc			////
////////////////////////////////////////
/*
http://www.sfml-dev.org/tutorials/2.1/graphics-sprite.php

*/