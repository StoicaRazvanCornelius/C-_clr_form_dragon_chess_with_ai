#include "pch.h"
#include "GameLogic.h"
#include "GameState.h"

GameLogic::GameLogic()
{
}

list<tableRelated::Move>* GameLogic::GetMoves(int table, int x, int y)
{
	Piece* currentPiece = GetPiece(table, x, y);
	if (currentPiece != NULL) {
		return currentPiece->getPossibleMoves(table + 1, x, y);
	}
	return NULL;
}

Piece* GameLogic::GetPiece(int table, int x, int y)
{
	switch (table)
	{
	case 0:
		return GameState::airTable[x][y];
		break;
	case 1:
		return GameState::earthTable[x][y];
		break;
	case 2:
		return GameState::undergroundTable[x][y];
		break;
	default:
		return NULL;
		break;
	}
}

bool GameLogic::isMoveValid(int table, int x, int y, Piece* pieceToValidate)
{
	return false;
}
