#pragma once
#include "Piece.h"
class Elemental :
    public Piece
{
public:
	Elemental(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y);
	int getPrice();
	char getLetter();
	Piece* copy();
};

