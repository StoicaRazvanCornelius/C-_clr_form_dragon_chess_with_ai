#pragma once
#include "pch.h"
#include "Piece.h"
#include "GameLogic.h"

class Oliphant: public Piece
{
public:
	Oliphant(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y);
	int getPrice();

};

