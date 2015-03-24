#include "Window.h"

Window::Window(Squares* square)
{
	this->squares = square;
}
Window::~Window()
{
	delete squares;
}
void Window::Draw(sf::RenderWindow &window)
{
	// Clear the window
	window.clear();
	// Calls on what to draw in the window
	window.draw(*squares);
	// Display the window
	window.display();
}
void Window::Update(float time)
{
	
}