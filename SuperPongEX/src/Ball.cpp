#include "Ball.h"

Ball::Ball():
	m_radius{ 10.f },
	m_speed{ 25.f }
{
	m_color = sf::Color::White;
	InitBall();
}

void Ball::InitBall()
{
	m_shape = sf::CircleShape(m_radius);
	m_shape.setFillColor(m_color);
	m_shape.setPosition(sf::Vector2f(400.f, 300.f));
}