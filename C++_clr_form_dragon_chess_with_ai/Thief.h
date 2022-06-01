#pragma once
#include "Piece.h"
class Thief :
    public Piece
{
public:
	Thief(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y);
	int getPrice();
	char getLetter();
};

