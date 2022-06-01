#pragma once
#include "Piece.h"
class Dwarf :
    public Piece
{
public:
	Dwarf(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y);
	int getPrice();
	char getLetter();
	Piece* copy();
};

