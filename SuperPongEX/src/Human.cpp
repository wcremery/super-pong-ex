#include "Human.h"

Human::Human(std::string name, sf::Color color) 
    : Player(name, color)
{
    m_paddle->setPosition(m_edgeSpacing, m_paddle->getPosition().y);
}

void Human::Move(sf::Time dt, sf::RenderWindow* const window)
{
    m_paddle->setPosition(sf::Vector2f(m_paddle->getPosition().x, sf::Mouse::getPosition(*window).y));

    if (m_paddle->getPosition().y < 0) m_paddle->setPosition(sf::Vector2f(m_paddle->getPosition().x, 0.f));
    if (m_paddle->getPosition().y > window->getSize().y - m_paddle->getGlobalBounds().height)
        m_paddle->setPosition(sf::Vector2f(m_paddle->getPosition().x, window->getSize().y - m_paddle->getGlobalBounds().height));
}
