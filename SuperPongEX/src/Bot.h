#pragma once

#include "Player.h"

class Bot : public Player
{
public:
	virtual void Move(sf::RenderWindow* const window) override;
};