#include "Player.h"

Player::Player(std::string_view name, sf::Color const color) :
	m_name{ name },
	m_score{ 0 },
	m_healthPoint{ 0 },
	m_edgeSpacing{ 50.f },
	m_paddle_height{ 75.f },
	m_paddle_width{ 15.f },
	m_speed{ 80.f }
{
	InitPlayer();
	m_paddle->setFillColor(color);
}

sf::RectangleShape* Player::GetPaddle() const
{
	return m_paddle;
}

void Player::InitPlayer()
{
	m_paddle = new sf::RectangleShape(sf::Vector2f(m_paddle_width, m_paddle_height));
	m_paddle->setPosition(sf::Vector2f(0.f, 300 - (m_paddle->getGlobalBounds().height / 2)));
}