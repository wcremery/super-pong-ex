#pragma once

#include <SFML/Graphics.hpp>
#include<string>
#include<string_view>

class Player
{
private:
	std::string m_name;
	sf::RectangleShape m_paddle;
	sf::Color m_color;
	int m_score;
	int m_healthPoint;
	void InitPlayer();
public:
	Player(std::string_view name, sf::Color const color);
	sf::RectangleShape GetPaddle();
};