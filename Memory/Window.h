#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics.hpp>
#include "Squares.h"
using namespace std;

class Window
{
public:
	Window(Squares*);
	virtual ~Window();

	void Draw(sf::RenderWindow&);
	void Update(float);
	//bool InitializeWindow(bool, int);

private:
	Squares* squares;
};

#endif