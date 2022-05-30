#include "pch.h"
#include "GameLogic.h"
#include "GameState.h"

GameLogic::GameLogic()
{
}

list<tableRelated::Move>* GameLogic::GetMoves(int table, int y, int x)
{
	Piece* currentPiece = NULL;
	switch (table)
	{
	case 1:
		currentPiece = GameState::airTable[y][x];
		break;
	case 2:
		currentPiece = GameState::earthTable[y][x];
		break;
	case 3:
		currentPiece = GameState::undergroundTable[y][x];
	default:
		break;
	}
	if (currentPiece != NULL) {
		return currentPiece->getPossibleMoves(table, y, x);
	}
	return NULL;
}

bool GameLogic::possibleMove(int table, int y, int x)
{
	if (table <=3 && table >0 && y>=0 && y<=7 && x >= 0 && x <= 11)
		return true;
	return false;
}
