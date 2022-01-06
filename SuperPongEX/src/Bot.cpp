#include "Bot.h"

Bot::Bot(sf::Color color)
: Player("AI", color)
{
	m_paddle->setPosition(sf::Vector2f(800 - (m_paddle->getGlobalBounds().width + m_edgeSpacing), 
		m_paddle->getPosition().y));
}

void Bot::Move(sf::RenderWindow* const window)
{

}