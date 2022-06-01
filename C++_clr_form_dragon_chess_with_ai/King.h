#pragma once
#include "Piece.h"
class King :
    public Piece
{
public:
	King(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y);
	int getPrice();
	

};

