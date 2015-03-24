#include "EndScreen.h"
#include "Squares.h"
#include "Window.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	sf::RenderWindow mainWindow(sf::VideoMode(600, 600), "Main window is working");
	Squares *squares = new Squares();//lägger till antalet brickor
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
		window->Draw(mainWindow);
	}

	return 0;
}