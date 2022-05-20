#pragma once
#include "Piece.h"
#include "GameModel.h"

using namespace std;
class Slyph :
    public Piece
{
	color myColor;
public:

	list<Move> getPossibleMoves(int table, int x, int y)
	{
		list<Move> possibleMoves = list<Move>();
		
		switch (table)
		{
		case 1:
			
			if (GameModel::earthTable[x][y]!= NULL && GameModel::earthTable[x][y]->getColor() != myColor)
			{
				possibleMoves.push_back(Move(1, x, y));
			}
			if (GameModel::airTable[x+1][y+1] == NULL)
			{
				possibleMoves.push_back(Move(1, x+1, y));
			}
			if (GameModel::airTable[x - 1][y + 1] == NULL)
			{
				possibleMoves.push_back(Move(1, x-1, y+1));
			}
		case 2:
			if (GameModel::earthTable[x][y] == NULL)
			{
				possibleMoves.push_back(Move(2, x, y));
			}
		default:
			break;
		}
		return possibleMoves;
	}
	color getColor();
	int getPrice();
};

