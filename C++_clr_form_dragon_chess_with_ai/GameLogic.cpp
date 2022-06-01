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
		return currentPiece->getPossibleMoves(table, x, y);
	}
	return NULL;
}

Piece* GameLogic::GetPiece(int table, int x, int y)
{
	switch (table)
	{
	case 1:
		return GameState::airTable[y][x];
	case 2:
		return GameState::earthTable[y][x];
	case 3:
		return GameState::undergroundTable[y][x];
	default:
		return NULL;
	}
}

bool GameLogic::isMoveValid(int table, int x, int y, list<tableRelated::Move>* possibleMoves)
{
	for (auto it = possibleMoves->begin(); it != possibleMoves->end(); it++) {
		if (it->x == x && it->y == y && it->table == table) return true;
	}
	return false;
}

void GameLogic::MakeMove(int tableOrigin, int xOrigin, int yOrigin, int tableTarget, int xTarget, int yTarget)
{
	Piece* movingPiece = GetPiece(tableOrigin, xOrigin, yOrigin);
	SetPiece(tableTarget, xTarget, yTarget, movingPiece);
	SetPiece(tableOrigin, xOrigin, yOrigin, NULL);

	GameState::ChangePlayerColor();
}

void GameLogic::SetPiece(int table, int x, int y, Piece* piece)
{
	switch (table)
	{
	case 1:
		GameState::airTable[y][x] = piece;
		break;
	case 2:
		GameState::earthTable[y][x] = piece;
		break;
	case 3:
		GameState::undergroundTable[y][x] = piece;
		break;
	default:
		break;
	}
}

bool GameLogic::possibleMove(int table, int y, int x)
{
	if (table <=3 && table >0 && y>=0 && y<=7 && x >= 0 && x <= 11)
		return true;
	return false;
}
