#pragma once
#include "Piece.h"
class Warrior :
    public Piece
{
public:
	Warrior(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y);
	int getPrice();
	char getLetter();
};

