#include "Menu.h"

Menu::Menu()
{

}
Menu::~Menu()
{

}
bool Menu::IsEscapePressed()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		return true;
	}
	return false;
}
bool Menu::IsQPressed()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
	{
		return true;
	}
	return false;
}
bool Menu::IsWPressed()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		return true;
	}
	return false;
}
bool Menu::IsEPressed()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
	{
		return true;
	}
	return false;
}
bool Menu::IsRPressed()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
	{
		return true;
	}
	return false;
}
bool Menu::IsLeftMousePressed()
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		return true;
	}
	return false;
}