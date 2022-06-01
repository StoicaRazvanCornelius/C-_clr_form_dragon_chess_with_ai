#pragma once
#include "Piece.h"
#include "color.h"

class GameState
{
public:
	static Piece* airTable[8][12];
	static Piece* earthTable[8][12];
	static Piece* undergroundTable[8][12];
	static color currentColor;
	static bool isAITurn;

	static void ChangePlayerColor();
};

