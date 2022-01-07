#pragma once

#include <SFML/Graphics.hpp>

class Ball
{
private:
	sf::CircleShape m_shape;
	float m_radius;
	float m_speed;
	float m_velocity_x;
	float m_velocity_y;
	sf::Color m_color;
public:
	Ball();
	sf::CircleShape GetShape() const;
	void InitBall();
	void Move(sf::Time* const dt);
	sf::Vector2f Impulsion();
};

