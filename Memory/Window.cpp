#include "Window.h"

Window::Window(Squares* square)
{
	this->squares = square;
}
Window::~Window()
{
	delete squares;
}
void Window::draw(sf::RenderWindow &window)
{
	// Clear the window with black color
	window.clear(sf::Color::Black);
	// Calls on what to draw in the window
	window.draw(*squares);
	// End the current frame
	window.display();
}
void Window::Update(float time)
{
	
}