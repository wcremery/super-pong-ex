#pragma once

#include <SFML/Graphics.hpp>
#include<string>
#include<string_view>

class Player
{
private:
	void InitPlayer();
protected:
	std::string m_name;
	sf::RectangleShape* m_paddle;
	sf::Color m_color;
	int m_score;
	int m_healthPoint;
	float m_edgeSpacing;
public:
	Player(std::string_view name, sf::Color const color);
	sf::RectangleShape* GetPaddle() const;
	virtual void Move(sf::RenderWindow* const window) = 0;
};