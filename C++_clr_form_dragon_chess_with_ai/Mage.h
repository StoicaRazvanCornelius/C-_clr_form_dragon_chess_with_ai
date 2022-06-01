#pragma once
#include "Piece.h"
class Mage :
    public Piece
{
public:
	Mage(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y);
	int getPrice();
	char getLetter();
	Piece* copy();
};

