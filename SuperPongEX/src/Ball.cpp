#include "Ball.h"

Ball::Ball():
	m_radius{ 10.f },
	m_speed{ 100.f }
{
	m_color = sf::Color::Yellow;
	InitBall();
}

sf::CircleShape Ball::GetShape() const
{
	return m_shape;
}

void Ball::InitBall()
{
	m_shape = sf::CircleShape(m_radius);
	m_shape.setFillColor(m_color);
	m_shape.setPosition(sf::Vector2f(400.f, 300.f));
}

void Ball::Move(sf::Time* const dt)
{

}

sf::Vector2f Ball::Impulsion()
{
	return sf::Vector2f(0.f, 0.f);
}