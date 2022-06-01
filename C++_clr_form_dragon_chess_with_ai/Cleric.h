#pragma once
#include "Piece.h"
class Cleric :
    public Piece
{
public:
	Cleric(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y);
	int getPrice();
	char getLetter();
	Piece* copy();
};

