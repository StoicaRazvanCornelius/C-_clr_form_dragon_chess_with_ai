#pragma once
#include "color.h"
#include <list>
#include "Move.h"

using namespace std;
class Piece
{
public:
	Piece(color pieceColor);
	virtual list<tableRelated::Move>* getPossibleMoves(int table, int x, int y) = 0;
	color getColor();
	virtual int getPrice() = 0;

protected:
	color pieceColor;
};

