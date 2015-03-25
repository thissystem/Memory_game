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
	sf::RenderWindow mainWindow(sf::VideoMode(1000, 1000), "Main window is working");
	sf::RenderWindow menuWindow(sf::VideoMode(300, 340), "This is the menu window");
	sf::Clock gameTime;

	while (mainWindow.isOpen())
	{
		sf::Event event;
		sf::Font myFont;
		if (!myFont.loadFromFile("../data/Queen of Camelot Regular.ttf"))
		{
			std::cout << "Couldn't find Queen of Camelot Regular.ttf" << std::endl;
		}

		Button name("Pick name", myFont, sf::Vector2f(150.0f, 100.0f), buttonStyle::save);
		Button board("Choose size", myFont, sf::Vector2f(150.0f, 160.0f), buttonStyle::save);
		Button highscore("Show top 3", myFont, sf::Vector2f(150.0f, 220.0f), buttonStyle::save);
		Button shuffle("Start the game", myFont, sf::Vector2f(150.0f, 40.0f), buttonStyle::cancel);
		Button exit("Exit", myFont, sf::Vector2f(150.0f, 280.0f), buttonStyle::clean);

		if (menuWindow.isOpen())
		{
			while (menuWindow.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					menuWindow.close();
			}
			sf::Vector2i position(800, 400);
			menuWindow.setPosition(position);

			name.update(event, menuWindow);
			board.update(event, menuWindow);
			highscore.update(event, menuWindow);
			shuffle.update(event, menuWindow);
			exit.update(event, menuWindow);
			
			menuWindow.clear(sf::Color::Black);//sf::Color::White

			menuWindow.draw(name);
			menuWindow.draw(board);
			menuWindow.draw(highscore);
			menuWindow.draw(shuffle);
			menuWindow.draw(exit);

			menuWindow.display();
			
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