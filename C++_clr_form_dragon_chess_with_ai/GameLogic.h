#pragma once

#include <list>
#include "Move.h"
#include "Piece.h"

class GameLogic
{
public:
	GameLogic();
	std::list<tableRelated::Move>* GetMoves(int table, int x, int y);
	Piece* GetPiece(int table, int x, int y);
	bool isMoveValid(int table, int x, int y, list<tableRelated::Move>* possibleMoves);
	static bool possibleMove(int table, int y, int x);
};

