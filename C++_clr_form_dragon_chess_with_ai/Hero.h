#pragma once
#include "pch.h"
#include "Piece.h"
#include "GameState.h"

class Hero :
    public Piece
{
public:
	Hero(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y, Piece* (&airTable)[8][12] = GameState::airTable, Piece* (&earthTable)[8][12] = GameState::earthTable, Piece* (&undergroundTable)[8][12] = GameState::undergroundTable);
	int getPrice();
	char getLetter();
	Piece* copy();
};

