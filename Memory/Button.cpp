#include "Button.h"

Button::Button()
{

}
Button::Button(std::string s, sf::Font& font, sf::Vector2f position, sf::Uint32 style)
{
	// Set the position of the button
	m_position = position;

	// Set the initial state
	m_btnstate = buttonState::normal;

	// Set the button style
	m_style = style;

	switch (m_style)
	{
	case buttonStyle::none:
	{
		m_textNormal = sf::Color(255, 255, 255);
		m_textHover = sf::Color(255, 255, 255);
		m_textClicked = sf::Color(255, 255, 255);
		m_bgNormal = sf::Color(255, 255, 255, 100);
		m_bgHover = sf::Color(200, 200, 200, 100);
		m_bgClicked = sf::Color(150, 150, 150);
		m_border = sf::Color(255, 255, 255, 100);
		break;
	}
	case buttonStyle::save:
	{
		m_textNormal = sf::Color(255, 255, 255);
		m_textHover = sf::Color(255, 255, 255);
		m_textClicked = sf::Color(255, 255, 255);
		m_bgNormal = sf::Color(255, 0, 0, 100);
		m_bgHover = sf::Color(200, 0, 0, 100);
		m_bgClicked = sf::Color(150, 0, 0);
		m_border = sf::Color(255, 255, 255, 100);
		break;
	}
	case buttonStyle::cancel:
	{
		m_textNormal = sf::Color(255, 255, 255);
		m_textHover = sf::Color(255, 255, 255);
		m_textClicked = sf::Color(255, 255, 255);
		m_bgNormal = sf::Color(255, 0, 0, 100);
		m_bgHover = sf::Color(200, 0, 0, 100);
		m_bgClicked = sf::Color(150, 0, 0);
		m_border = sf::Color(255, 255, 255, 100);
		break;
	}
	case buttonStyle::clean:
	{
		m_textNormal = sf::Color(255, 255, 255);
		m_textHover = sf::Color(255, 255, 255);
		m_textClicked = sf::Color(255, 255, 255);
		m_bgNormal = sf::Color(0, 255, 255, 100);
		m_bgHover = sf::Color(0, 200, 200, 100);
		m_bgClicked = sf::Color(0, 150, 150);
		m_border = sf::Color(255, 255, 255, 100);
		break;
	}
	default:
		break;
	}

	// Set up the text
	m_text.setString(s);
	m_text.setFont(font);
	m_text.setOrigin(m_text.getGlobalBounds().width / 2, m_text.getGlobalBounds().height / 2);
	m_text.setColor(m_textNormal);

	// Set some of the default values
	m_borderRadius = 5.0f;
	m_borderThickness = 0.0f;
	m_size = sf::Vector2f(m_text.getGlobalBounds().width * 1.5f, m_text.getGlobalBounds().height * 1.5f);

	m_button = sf::RectangleShape(m_size);
	m_button.setOrigin(m_button.getGlobalBounds().width / 2, m_button.getGlobalBounds().height / 2);
	m_button.setPosition(m_position);

	sf::Vector2f textPosition = sf::Vector2f(m_button.getPosition().x, m_button.getPosition().y - (m_button.getGlobalBounds().height / 4));

	m_text.setPosition(textPosition);

	m_shadow.setFont(font);
	m_shadow = m_text;
	m_shadow.setOrigin(m_shadow.getGlobalBounds().width / 2, m_shadow.getGlobalBounds().height / 2);
	m_shadow.setPosition(m_text.getPosition().x + 3.0f, m_text.getPosition().y + 3.0f);
}
Button::~Button()
{

}
void Button::setSize(unsigned int size)
{
	m_fontSize = size;
	m_text.setCharacterSize(m_fontSize);
	m_text.setOrigin(m_text.getGlobalBounds().width / 2, m_text.getGlobalBounds().height / 2);
	m_shadow.setCharacterSize(m_fontSize);
	m_shadow.setOrigin(m_shadow.getGlobalBounds().width / 2, m_shadow.getGlobalBounds().height / 2);
	m_size = sf::Vector2f(m_text.getGlobalBounds().width * 1.5f, (m_text.getGlobalBounds().height + m_text.getGlobalBounds().height) * 1.5f);
	m_button = sf::RectangleShape(m_size);
}
void Button::setStyle(sf::Uint32 style)
{
	// Set the button style
	m_style = style;

	switch (m_style)
	{
	case buttonStyle::none:
	{
		m_textNormal = sf::Color(255, 255, 255);
		m_textHover = sf::Color(255, 255, 255);
		m_textClicked = sf::Color(255, 255, 255);
		m_bgNormal = sf::Color(255, 255, 255, 100);
		m_bgHover = sf::Color(200, 200, 200, 100);
		m_bgClicked = sf::Color(150, 150, 150);
		m_border = sf::Color(255, 255, 255, 100);
		break;
	}
	case buttonStyle::save:
	{
		m_textNormal = sf::Color(255, 255, 255);
		m_textHover = sf::Color(255, 255, 255);
		m_textClicked = sf::Color(255, 255, 255);
		m_bgNormal = sf::Color(0, 255, 0, 100);
		m_bgHover = sf::Color(0, 200, 0, 100);
		m_bgClicked = sf::Color(0, 150, 0);
		m_border = sf::Color(0, 0, 0, 100);
		break;
	}
	case buttonStyle::cancel:
	{
		m_textNormal = sf::Color(255, 255, 255);
		m_textHover = sf::Color(255, 255, 255);
		m_textClicked = sf::Color(255, 255, 255);
		m_bgNormal = sf::Color(255, 0, 0, 100);
		m_bgHover = sf::Color(200, 0, 0, 100);
		m_bgClicked = sf::Color(150, 0, 0);
		m_border = sf::Color(255, 255, 255, 100);
		break;
	}
	case buttonStyle::clean:
	{
		m_textNormal = sf::Color(255, 255, 255);
		m_textHover = sf::Color(255, 255, 255);
		m_textClicked = sf::Color(255, 255, 255);
		m_bgNormal = sf::Color(0, 255, 255, 100);
		m_bgHover = sf::Color(0, 200, 200, 100);
		m_bgClicked = sf::Color(0, 150, 150);
		m_border = sf::Color(255, 255, 255, 100);
		break;
	}
	default:
		break;
	}
}
void Button::setFont(sf::Font& font)
{
	m_text.setFont(font);
	m_shadow.setFont(font);
}
void Button::update(sf::Event& e, sf::RenderWindow& window)
{
	// Perform updates for settings from user
	switch (m_style)
	{
	case buttonStyle::none:
	{
		m_size = sf::Vector2f(m_text.getGlobalBounds().width * 1.5f, m_text.getGlobalBounds().height * 1.75f);
		m_button = sf::RectangleShape(m_size);
		m_button.setOrigin(m_button.getGlobalBounds().width / 2, m_button.getGlobalBounds().height / 2);
		m_button.setPosition(m_position);
		m_text.setOrigin(m_text.getGlobalBounds().width / 2, m_text.getGlobalBounds().height / 2);
		sf::Vector2f textPosition = sf::Vector2f(m_button.getPosition().x, m_button.getPosition().y - m_button.getGlobalBounds().height / 4);
		m_text.setPosition(textPosition);
		m_text.setColor(m_textNormal);
		m_shadow.setOrigin(m_shadow.getGlobalBounds().width / 2, m_shadow.getGlobalBounds().height / 2);
		m_shadow.setPosition(m_text.getPosition().x + 3.f, m_text.getPosition().y + 3.f);
		m_shadow.setColor(sf::Color(0, 0, 0));
	}
	break;

	case buttonStyle::save:
	{
		m_size = sf::Vector2f(m_text.getGlobalBounds().width * 1.5f, m_text.getGlobalBounds().height * 1.75f);
		m_button = sf::RectangleShape(m_size);
		m_button.setOrigin(m_button.getGlobalBounds().width / 2, m_button.getGlobalBounds().height / 2);
		m_button.setPosition(m_position);
		m_text.setOrigin(m_text.getGlobalBounds().width / 2, m_text.getGlobalBounds().height / 2);
		sf::Vector2f textPosition = sf::Vector2f(m_button.getPosition().x, m_button.getPosition().y - m_button.getGlobalBounds().height / 4);
		m_text.setPosition(textPosition);
		m_text.setColor(m_textNormal);
		m_shadow.setOrigin(m_shadow.getGlobalBounds().width / 2, m_shadow.getGlobalBounds().height / 2);
		m_shadow.setPosition(m_text.getPosition().x + 3.f, m_text.getPosition().y + 3.f);
		m_shadow.setColor(sf::Color(0, 0, 0));
	}
	break;

	case buttonStyle::cancel:
	{
		m_size = sf::Vector2f(m_text.getGlobalBounds().width * 1.5f, m_text.getGlobalBounds().height * 1.75f);
		m_button = sf::RectangleShape(m_size);
		m_button.setOrigin(m_button.getGlobalBounds().width / 2, m_button.getGlobalBounds().height / 2);
		m_button.setPosition(m_position);
		m_text.setOrigin(m_text.getGlobalBounds().width / 2, m_text.getGlobalBounds().height / 2);
		sf::Vector2f textPosition = sf::Vector2f(m_button.getPosition().x, m_button.getPosition().y - m_button.getGlobalBounds().height / 4);
		m_text.setPosition(textPosition);
		m_text.setColor(m_textNormal);
		m_shadow.setOrigin(m_shadow.getGlobalBounds().width / 2, m_shadow.getGlobalBounds().height / 2);
		m_shadow.setPosition(m_text.getPosition().x + 3.f, m_text.getPosition().y + 3.f);
		m_shadow.setColor(sf::Color(0, 0, 0));
	}
	break;

	case buttonStyle::clean:
	{
		m_size = sf::Vector2f(m_text.getGlobalBounds().width * 1.5f, m_text.getGlobalBounds().height * 1.75f);
		m_button = sf::RectangleShape(m_size);
		m_button.setOrigin(m_button.getGlobalBounds().width / 2, m_button.getGlobalBounds().height / 2);
		m_button.setPosition(m_position);
		m_text.setOrigin(m_text.getGlobalBounds().width / 2, m_text.getGlobalBounds().height / 2);
		sf::Vector2f textPosition = sf::Vector2f(m_button.getPosition().x, m_button.getPosition().y - m_button.getGlobalBounds().height / 4);
		m_text.setPosition(textPosition);
		m_text.setColor(m_textNormal);
		m_shadow.setOrigin(m_shadow.getGlobalBounds().width / 2, m_shadow.getGlobalBounds().height / 2);
		m_shadow.setPosition(m_text.getPosition().x + 3.f, m_text.getPosition().y + 3.f);
		m_shadow.setColor(sf::Color(0, 0, 0));
	}
	break;

	default:
		break;
	}

	//perform updates for user mouse interactions
	sf::Vector2i m_mousePosition = sf::Mouse::getPosition(window);

	bool mouseInButton = m_mousePosition.x >= m_button.getPosition().x - m_button.getGlobalBounds().width / 2
		&& m_mousePosition.x <= m_button.getPosition().x + m_button.getGlobalBounds().width / 2
		&& m_mousePosition.y >= m_button.getPosition().y - m_button.getGlobalBounds().height / 2
		&& m_mousePosition.y <= m_button.getPosition().y + m_button.getGlobalBounds().height / 2;

	if (e.type == sf::Event::MouseMoved)
	{
		if (mouseInButton)
		{
			m_btnstate = buttonState::hovered;
		}

		else
		{
			m_btnstate = buttonState::normal;
		}
	}

	if (e.type == sf::Event::MouseButtonPressed)
	{
		switch (e.mouseButton.button)
		{
		case sf::Mouse::Left:
		{
			if (mouseInButton)
			{
				m_btnstate = buttonState::clicked;
			}

			else
			{
				m_btnstate = buttonState::normal;
			}
		}
		break;
		}
	}

	if (e.type == sf::Event::MouseButtonReleased)
	{
		switch (e.mouseButton.button)
		{
		case sf::Mouse::Left:
		{
			if (mouseInButton)
			{
				m_btnstate = buttonState::hovered;
			}

			else
			{
				m_btnstate = buttonState::normal;
			}
		}
		}
	}

	switch (m_btnstate)
	{
	case buttonState::normal:
	{
		m_button.setFillColor(m_bgNormal);
		m_text.setColor(m_textNormal);
	}
	break;

	case buttonState::hovered:
	{
		m_button.setFillColor(m_bgHover);
		m_text.setColor(m_textHover);
	}
	break;

	case buttonState::clicked:
	{
		m_button.setFillColor(m_bgClicked);
		m_text.setColor(m_textClicked);
	}
	break;
	}
}
void Button::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
	switch (m_style)
	{
	case buttonStyle::none:
	{
		target.draw(m_button, states);
		target.draw(m_shadow, states);
		target.draw(m_text, states);
	}
	break;

	case buttonStyle::save:
	{
		target.draw(m_button, states);
		target.draw(m_shadow, states);
		target.draw(m_text, states);
	}
	break;

	case buttonStyle::cancel:
	{
		target.draw(m_button, states);
		target.draw(m_shadow, states);
		target.draw(m_text, states);
	}
	break;

	case buttonStyle::clean:
	{
		target.draw(m_button, states);
		target.draw(m_shadow, states);
		target.draw(m_text, states);
	}
	break;

	default:
		break;
	}
}
}
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