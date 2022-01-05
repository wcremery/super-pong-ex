#include "Human.h"

Human::Human(std::string name, sf::Color color) 
    : Player(name, color)
{
}

void Human::Move(sf::RenderWindow* const window)
{
    m_paddle->setPosition(sf::Vector2f(.0f, sf::Mouse::getPosition(*window).y));
    if (m_paddle->getPosition().y < 0) m_paddle->setPosition(sf::Vector2f(0.f, 0.f));
    if (m_paddle->getPosition().y > window->getSize().y - m_paddle->getGlobalBounds().height)
        m_paddle->setPosition(sf::Vector2f(0.f, window->getSize().y - m_paddle->getGlobalBounds().height));
}
