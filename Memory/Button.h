#ifndef BUTTON_H
#define BUTTON_H

#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Mouse.hpp>
#include <SFML/Graphics.hpp>
#include <SFML\Graphics\Sprite.hpp>
enum buttonStyle
{
	none = 0,
	save = 1,
	cancel = 2,
	clean = 3
};
enum buttonState
{
	normal = 0,
	hovered = 1,
	clicked = 2
};
class Button : public sf::Drawable
{
public:
	Button();
	Button(std::string s, sf::Font& font, sf::Vector2f position, sf::Uint32 style);
	virtual ~Button();

	void setColorTextNormal(sf::Color text);
	void setColorTextHover(sf::Color text);
	void setColorTextClicked(sf::Color text);
	void setColorNormal(sf::Color bgNormal);
	void setColorHover(sf::Color bgHover);
	void setColorClicked(sf::Color bgClicked);
	void setBorderColor(sf::Color border);
	void setBorderThickness(float t);
	void setBorderRadius(float r);
	void setPosition(sf::Vector2f position);
	void setSize(unsigned int size);
	void setText(std::string s);
	void setStyle(sf::Uint32 style);
	void setFont(sf::Font& font);

	sf::Vector2f getPosition();
	sf::Vector2f getDimensions();
	sf::Uint32 getState();
	void update(sf::Event& e, sf::RenderWindow& window);

	//void checkClick(sf::Vector2f);
	//void setState(bool);
	//void setText(std::string);
	//bool getVar();
	//sf::Sprite* getSprite();
	//sf::String* getText();
	//bool IsLeftMousePressed();// kanske är checkClick istället

private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	sf::Color m_bgNormal;
	sf::Color m_bgHover;
	sf::Color m_bgClicked;
	sf::Color m_textNormal;
	sf::Color m_textHover;
	sf::Color m_textClicked;
	sf::Color m_border;

	float m_borderThickness;
	float m_borderRadius;
	sf::Vector2f m_size;
	sf::Vector2f m_position;
	sf::Uint32 m_style;
	sf::Uint32 m_btnstate;

	sf::ConvexShape m_button;
	sf::Font m_font;
	unsigned int m_fontSize;
	sf::Text m_text;
	sf::Text m_shadow;

	/*sf::Sprite normal, clicked;
	sf::Sprite* currentSprite;
	sf::String string;
	bool current;*/
};

#endif