#pragma once
#include "pch.h"
#include "Piece.h"
class Hero :
    public Piece
{
public:
	Hero(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y);
	int getPrice();
	char getLetter();
};

