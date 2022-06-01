#include "pch.h"
#include "GameLogic.h"
#include "GameState.h"
#include "GameSetup.h"
#include "AI.h"
#include "Form1.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

GameLogic::GameLogic()
{
}

list<tableRelated::Move>* GameLogic::GetMoves(int table, int x, int y)
{
	Piece* currentPiece = GetPiece(table, x, y);
	if (currentPiece != NULL) 
	{
		return currentPiece->getPossibleMoves(table, x, y);
	}
	return NULL;
}

Piece* GameLogic::GetPiece(int table, int x, int y, Piece* airTable[8][12], Piece* earthTable[8][12], Piece* undergroundTable[8][12])
{
	switch (table)
	{
	case 1:
		return airTable[y][x];
	case 2:
		return earthTable[y][x];
	case 3:
		return undergroundTable[y][x];
	default:
		return NULL;
	}
}

bool GameLogic::isMoveValid(int table, int x, int y, list<tableRelated::Move>* possibleMoves)
{
	for (auto it = possibleMoves->begin(); it != possibleMoves->end(); it++) 
	{
		if (it->x == x && it->y == y && it->table == table) return true;
	}
	return false;
}

void GameLogic::EndTurn()
{
	GameState::ChangePlayerColor();
	GameState::isAITurn = !GameState::isAITurn;
	if (GameState::isAITurn)
	{
		BoardStateTree moves = AI::BuildTree(GameState::airTable, GameState::earthTable, GameState::undergroundTable, Move(), GameSetup::depth);
		int minMaxPrice = AI::minmax(moves);
		for (auto it = moves.children.begin(); it != moves.children.end(); it++)
		{
			if (it->price == minMaxPrice)
			{
				Move move = it->move;
				CppCLRWinFormsProject::Form1::MakeMove(move.tableOrigin, move.xOrigin, move.yOrigin, move.table, move.x, move.y, true);
				break;
			}
		}
	}
}

void GameLogic::MakeMove(int tableOrigin, int xOrigin, int yOrigin, int tableTarget, int xTarget, int yTarget, bool isNextTurn, Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12])
{
	Piece* movingPiece = GetPiece(tableOrigin, xOrigin, yOrigin, airTable, earthTable, undergroundTable);
	SetPiece(tableTarget, xTarget, yTarget, movingPiece, airTable, earthTable, undergroundTable);
	SetPiece(tableOrigin, xOrigin, yOrigin, NULL, airTable, earthTable, undergroundTable);

	if (isNextTurn) EndTurn();
}

void GameLogic::SetPiece(int table, int x, int y, Piece* piece, Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12])
{
	switch (table)
	{
	case 1:
		airTable[y][x] = piece;
		break;
	case 2:
		earthTable[y][x] = piece;
		break;
	case 3:
		undergroundTable[y][x] = piece;
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
