#pragma once
#include "color.h"
#include <list>
#include "Move.h"

using namespace std;
class Piece
{
public:
	Piece(color pieceColor);
	virtual list<tableRelated::Move>* getPossibleMoves(int table, int y, int x) = 0;
	virtual color getColor() = 0;
	virtual int getPrice() = 0;

protected:
	color pieceColor;
};

