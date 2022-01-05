#pragma once

#include <SFML/Graphics.hpp>

class Ball
{
private:
	sf::CircleShape m_shape;
	float m_radius;
	float m_speed;
	sf::Color m_color;
public:
	Ball();
	sf::CircleShape GetShape() const;
	void InitBall();
};

