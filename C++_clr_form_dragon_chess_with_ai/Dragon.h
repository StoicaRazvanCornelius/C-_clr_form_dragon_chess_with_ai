#pragma once
#include "Piece.h"
class Dragon :
    public Piece
{
public:
	Dragon(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y);
	int getPrice();
};

