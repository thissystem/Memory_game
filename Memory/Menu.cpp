#include "Menu.h"

Menu::Menu()
{

}
Menu::~Menu()
{

}
sf::RenderWindow Menu::InitializeMenuWindow()
{
	sf::RenderWindow menuWindow(sf::VideoMode(250, 300), "This is the menu window");
	sf::Event event;
	if (menuWindow.isOpen()) // In this if statement I want to put all my calls to my menuclass and logic about how the menu is handled
	{
		sf::Vector2i position(800, 400);
		menuWindow.setPosition(position);
		
		menuWindow.clear(sf::Color::White);
		menuWindow.display();
	}
	return menuWindow;
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