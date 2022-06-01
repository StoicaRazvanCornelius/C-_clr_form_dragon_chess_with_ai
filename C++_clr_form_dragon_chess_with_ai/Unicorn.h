#pragma once
#include "Piece.h"
#include "pch.h"
#include "GameState.h"
class Unicorn :
    public Piece
{
public:
	Unicorn(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y);
	int getPrice();

};

