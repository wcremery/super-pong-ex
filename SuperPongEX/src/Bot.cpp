#include "Bot.h"

Bot::Bot(sf::Color color)
: Player("AI", color)
{
	m_paddle->setPosition(sf::Vector2f(800 - (m_paddle->getGlobalBounds().width + m_edgeSpacing), 
		m_paddle->getPosition().y));
}

void Bot::Move(sf::Time* const dt, sf::RenderWindow* const window)
{
	m_paddle->setPosition(sf::Vector2f(m_paddle->getPosition().x, m_paddle->getPosition().y + m_speed * dt->asSeconds()));
	
	if (m_paddle->getPosition().y < 0 || m_paddle->getPosition().y > window->getSize().y - m_paddle_height) m_speed *= -1;
}