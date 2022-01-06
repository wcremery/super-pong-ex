#pragma once

#include "Player.h"

class Bot : public Player
{
public:
	Bot(sf::Color color);
	virtual void Move(sf::RenderWindow* const window) override;
};