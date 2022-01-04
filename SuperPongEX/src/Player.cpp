#include "Player.h"

Player::Player(std::string_view name, sf::Color const color): 
	m_name { name },
	m_score{ 0 },
	m_healthPoint{ 0 }
{
	InitPlayer();
	m_paddle.setFillColor(color);
}

sf::RectangleShape Player::GetPaddle()
{
	return m_paddle;
}

void Player::InitPlayer()
{
	m_paddle = sf::RectangleShape(sf::Vector2f(15.f, 75.f));
	m_paddle.setPosition(sf::Vector2f(0.f, 300 - (m_paddle.getGlobalBounds().height / 2)));
}