#pragma once

#include "Player.h"

class Human : public Player
{
public:
	Human(std::string name, sf::Color color);
	virtual void Move(sf::RenderWindow const& window) override;
};