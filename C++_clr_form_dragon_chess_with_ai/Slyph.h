#pragma once
#include "Piece.h"
#include "GameState.h"

class Slyph : public Piece
{
public:
	Slyph(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y);
	int getPrice();
	char getLetter();
};

