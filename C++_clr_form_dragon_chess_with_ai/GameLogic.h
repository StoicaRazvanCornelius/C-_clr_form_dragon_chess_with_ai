#pragma once

#include <list>
#include "Move.h"

class GameLogic
{
public:
	GameLogic();
	std::list<tableRelated::Move>* GetMoves(int table, int x, int y);
};

