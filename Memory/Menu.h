#ifndef MENU_H
#define MENU_H

#include <iostream>
#include "Button.h"

class Menu
{
public:
	Menu();
	virtual ~Menu();

	bool IsEscapePressed();
	//sf::RenderWindow InitializeMenuWindow();

private:
	bool IsQPressed();
	bool IsWPressed();
	bool IsEPressed();
	bool IsRPressed();
	
	bool IsLeftMousePressed();
};

#endif