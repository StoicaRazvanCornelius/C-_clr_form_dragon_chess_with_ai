#pragma once
#include "Piece.h"
#include "GameModel.h"

using namespace std;
class Slyph :
	public Piece
{
	color myColor;
public:

	list<tableRelated::Move>* getPossibleMoves(int table, int x, int y)
	{
		list<tableRelated::Move>* possibleMoves = new list<tableRelated::Move>();

		switch (table)
		{
		case 1:

			if (GameModel::earthTable[x][y] != NULL && GameModel::earthTable[x][y]->getColor() != myColor)
			{
				possibleMoves->push_back(tableRelated::Move(1, x, y));
			}
			if (GameModel::airTable[x + 1][y + 1] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(1, x + 1, y));
			}
			if (GameModel::airTable[x - 1][y + 1] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(1, x - 1, y + 1));
			}
		case 2:
			if (GameModel::earthTable[x][y] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(2, x, y));
			}
			for (int i = 0; i < 12; i + 2)
			{
				if (GameModel::earthTable[2][i] == NULL)
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
	color getColor();
	int getPrice();
};

