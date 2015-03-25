//#include <crtdbg.h>
//#include "EndScreen.h"
//#include "Squares.h"
//#include "Window.h"
#include <SFML/Graphics.hpp>
#include "Menu.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	Menu* m_Menu = 0;
	sf::RenderWindow mainWindow(sf::VideoMode(1600, 900), "Main window is working");
	sf::Clock gameTime;

	while (mainWindow.isOpen())
	{
		sf::Event event;
		if (m_Menu->InitializeMenuWindow().isOpen())
		{
			while (m_Menu->InitializeMenuWindow().pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					m_Menu->InitializeMenuWindow().close();
			}
		}
		while (mainWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				mainWindow.close();
		}
		mainWindow.clear(sf::Color::Black);
		mainWindow.display();
	}

	return 0;
}