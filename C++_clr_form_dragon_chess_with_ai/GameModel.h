#pragma once
#include "Piece.h"

class GameModel
{
public:
	static Piece* currentSelectedPiece;
	static Piece* airTable[8][12];
	static Piece* earthTable[8][12];
	static Piece* undergroundTable[8][12];

};

