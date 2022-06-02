#pragma once
#include "pch.h"
#include "Piece.h"
#include "GameLogic.h"
#include "GameState.h"

class Oliphant: public Piece
{
public:
	Oliphant(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y, Piece* (&airTable)[8][12] = GameState::airTable, Piece* (&earthTable)[8][12] = GameState::earthTable, Piece* (&undergroundTable)[8][12] = GameState::undergroundTable);
	int getPrice();
	char getLetter();
	Piece* copy();
};

