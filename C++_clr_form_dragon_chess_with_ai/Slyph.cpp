#include "pch.h"
#include "Slyph.h"

Slyph::Slyph(color pieceColor) : Piece(pieceColor)
{
}

list<tableRelated::Move>* Slyph::getPossibleMoves(int table, int x, int y)
{
	list<tableRelated::Move>* possibleMoves = new list<tableRelated::Move>();

	switch (table)
	{
	case 1:

		if (GameState::earthTable[x][y] != NULL && GameState::earthTable[x][y]->getColor() != pieceColor)
		{
			possibleMoves->push_back(tableRelated::Move(1, x, y));
		}
		if (GameState::airTable[x + 1][y + 1] == NULL)
		{
			possibleMoves->push_back(tableRelated::Move(1, x + 1, y));
		}
		if (GameState::airTable[x - 1][y + 1] == NULL)
		{
			possibleMoves->push_back(tableRelated::Move(1, x - 1, y + 1));
		}
	case 2:
		if (GameState::earthTable[x][y] == NULL)
		{
			possibleMoves->push_back(tableRelated::Move(2, x, y));
		}
		for (int i = 0; i < 12; i += 2)
		{
			if (GameState::earthTable[2][i] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(1, x, y));
			}
		}
	case 3:
		possibleMoves->push_back(tableRelated::Move(3, 3, 6));
		possibleMoves->push_back(tableRelated::Move(3, 3, 6));
		possibleMoves->push_back(tableRelated::Move(3, 4, 5));
		possibleMoves->push_back(tableRelated::Move(3, 4, 5));
	default:
		break;
	}
	return possibleMoves;
}

int Slyph::getPrice()
{
	return 1;
}
