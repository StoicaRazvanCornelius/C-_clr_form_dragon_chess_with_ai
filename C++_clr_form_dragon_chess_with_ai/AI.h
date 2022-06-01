#pragma once
#include "Piece.h"
#include "BoardStateTree.h"

class AI
{
public:
	static BoardStateTree BuildTree(Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12], Move move, int depth);
	static int minmax(BoardStateTree &tree, bool isMaximizing = true);
private:
	static void CreateTablesCopy(Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12], Piece* (&airTable_copy)[8][12], Piece* (&earthTable_copy)[8][12], Piece* (&undergroundTable_copy)[8][12]);
	static int GetStatePrice(Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12]);
	static list<Move> GetMoves(Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12], color currentColor);
};

