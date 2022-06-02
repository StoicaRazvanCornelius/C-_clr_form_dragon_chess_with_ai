#pragma once
#include "Piece.h"
#include "GameState.h"

class Elemental :
    public Piece
{
public:
	Elemental(color pieceColor);
	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y, Piece* (&airTable)[8][12] = GameState::airTable, Piece* (&earthTable)[8][12] = GameState::earthTable, Piece* (&undergroundTable)[8][12] = GameState::undergroundTable);
	int getPrice();
	char getLetter();
	Piece* copy();
};

