#include "pch.h"
#include "GameLogic.h"
#include "GameState.h"

GameLogic::GameLogic()
{
}

list<tableRelated::Move>* GameLogic::GetMoves(int table, int x, int y)
{
	Piece* currentPiece = NULL;
	switch (table)
	{
	case 1:
		currentPiece = GameState::airTable[x][y];
		break;
	case 2:
		currentPiece = GameState::earthTable[x][y];
		break;
	case 3:
		currentPiece = GameState::undergroundTable[x][y];
	default:
		break;
	}
	if (currentPiece != NULL) {
		return currentPiece->getPossibleMoves(table, x, y);
	}
	return NULL;
}
