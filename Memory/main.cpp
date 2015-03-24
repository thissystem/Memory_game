#include <crtdbg.h>
#include "EndScreen.h"
#include "Squares.h"
#include "Window.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	sf::RenderWindow mainWindow(sf::VideoMode(600, 600), "Main window is working");

	//Squares *squares = new Squares(0, 0, &texture);//lägger till antalet brickor
	Squares* m_square = 0;
	Squares *squares = new Squares(0, 0, m_square->loadTexture("../data/spyro.dds"));
	Window *window = new Window(squares);
	sf::Clock gameTime;

	while (mainWindow.isOpen())
	{
		sf::Event event;
		while (mainWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				mainWindow.close();
		}
		window->Update(gameTime.restart().asSeconds());
		window->draw(mainWindow);
	}

	return 0;
}