#include "Button.h"

Button::Button()
{

}
//Button::Button(sf::Image* normal, sf::Image* clicked, std::string words, sf::Vector2f location)
//{
//	this->normal.SetImage(*normal);
//}
void Button::setColorTextNormal(sf::Color text)
{
	m_textNormal = text;
}
void Button::setColorTextHover(sf::Color text)
{
	m_textHover = text;
}
void Button::setColorTextClicked(sf::Color text)
{
	m_textClicked = text;
}
void Button::setColorNormal(sf::Color bgNormal)
{
	m_bgNormal = bgNormal;
}
void Button::setColorHover(sf::Color bgHover)
{
	m_bgHover = bgHover;
}
void Button::setColorClicked(sf::Color bgClicked)
{
	m_bgClicked = bgClicked;
}
void Button::setBorderColor(sf::Color border)
{
	m_border = border;
}
void Button::setBorderThickness(float t)
{
	m_borderThickness = t;
}
void Button::setBorderRadius(float r)
{
	m_borderRadius = r;
}
void Button::setPosition(sf::Vector2f position)
{
	m_position = position;
}
void Button::setText(std::string s)
{
	m_text.setString(s);
	m_shadow = m_text;
}
sf::Vector2f Button::getPosition()
{
	return m_position;
}
sf::Vector2f Button::getDimensions()
{
	return sf::Vector2f(m_button.getGlobalBounds().width, m_button.getGlobalBounds().height);
}
sf::Uint32 Button::getState()
{
	return m_btnstate;
}