#pragma once

#include <list>
#include "Move.h"
#include "Piece.h"
#include "GameState.h"

class GameLogic
{
public:
	GameLogic();
	std::list<tableRelated::Move>* GetMoves(int table, int x, int y);
	Piece* GetPiece(int table, int x, int y, Piece* airTable[8][12] = GameState::airTable, Piece* earthTable[8][12] = GameState::earthTable, Piece* undergroundTable[8][12] = GameState::undergroundTable);
	bool isMoveValid(int table, int x, int y, list<tableRelated::Move>* possibleMoves);
	void MakeMove(int tableOrigin, int xOrigin, int yOrigin, int tableTarget, int xTarget, int yTarget, bool isNextTurn = true, Piece* (&airTable)[8][12] = GameState::airTable, Piece* (&earthTable)[8][12] = GameState::earthTable, Piece* (&undergroundTable)[8][12] = GameState::undergroundTable);
	void SetPiece(int table, int x, int y, Piece* piece, Piece* (&airTable)[8][12] = GameState::airTable, Piece* (&earthTable)[8][12] = GameState::earthTable, Piece* (&undergroundTable)[8][12] = GameState::undergroundTable);
	static bool possibleMove(int table, int y, int x);
private:
	void EndTurn();
};

