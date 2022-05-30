#pragma once
#include "Piece.h"
#include "GameLogic.h"
public class Griffin : public Piece
{
public:
	Griffin(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int y, int x);
	color getColor();
	int getPrice();

};

