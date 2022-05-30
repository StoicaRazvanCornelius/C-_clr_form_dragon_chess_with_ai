#pragma once
#include "Piece.h"
class Dragon :
    public Piece
{
public:
	Dragon(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int y, int x);
	color getColor();
	int getPrice();

};

