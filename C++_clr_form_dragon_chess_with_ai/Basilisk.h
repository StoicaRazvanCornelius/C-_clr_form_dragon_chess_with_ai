#pragma once
#include "Piece.h"
class Basilisk :
    public Piece
{
	Basilisk(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y);
	int getPrice();
	char getLetter();
};

