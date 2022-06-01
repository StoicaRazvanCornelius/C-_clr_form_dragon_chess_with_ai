#pragma once
#include "Piece.h"
class Paladin :
    public Piece
{
public:
	Paladin(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y);
	int getPrice();
	char getLetter();
};

