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
	void MakeMove(int tableOrigin, int xOrigin, int yOrigin, int tableTarget, int xTarget, int yTarget);
	void SetPiece(int table, int x, int y, Piece* piece);
	static bool possibleMove(int table, int y, int x);
};

