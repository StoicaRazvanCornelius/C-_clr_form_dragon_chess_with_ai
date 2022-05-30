#pragma once
#include "pch.h"
#include "Slyph.h"

Slyph::Slyph(color pieceColor) : Piece(pieceColor)
{
}

list<tableRelated::Move>* Slyph::getPossibleMoves(int table, int y, int x)
{
	
	list<tableRelated::Move>* possibleMoves = new list<tableRelated::Move>();
	switch (this->pieceColor)
	{
	case white:
		switch (table)
		{
		case 1:

			possibleMoves->push_back(tableRelated::Move(2, y, x));
			possibleMoves->push_back(tableRelated::Move(1, y - 1, x));
			possibleMoves->push_back(tableRelated::Move(1, y - 1, x + 1));
			possibleMoves->push_back(tableRelated::Move(1, y - 1, x - 1));

			/*
				if (GameState::earthTable[y][x] != NULL && GameState::earthTable[y][x]->getColor() == pieceColor)
				{
					possibleMoves->push_back(tableRelated::Move(1, y, x));
				}

				if (GameState::airTable[x + 1][y + 1] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(1, x + 1, y));
				}
				if (GameState::airTable[x - 1][y + 1] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(1, x - 1, y + 1));
				}
				if (GameState::earthTable[x][y] != NULL && GameState::earthTable[x][y]->getColor() != pieceColor)
				{
					possibleMoves->push_back(tableRelated::Move(1, x - 1, y + 1));
				}
				break;



			case 2:
				if (GameState::earthTable[x][y] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(1, x, y));
				}
				for (int i = 0; i < 12; i += 2)
				{
					if (GameState::earthTable[2][i] == NULL)
					{
						possibleMoves->push_back(tableRelated::Move(1, x, y));
					}
				}
			*/
		default:
			break;
		}
		break;
	case black:
		switch (table)
		{

		case 1:

			possibleMoves->push_back(tableRelated::Move(2, y, x));
			possibleMoves->push_back(tableRelated::Move(1, y + 1, x));
			possibleMoves->push_back(tableRelated::Move(1, y + 1, x + 1));
			possibleMoves->push_back(tableRelated::Move(1, y + 1, x - 1));
		default:
			break;

			break;
		}
		break;
	default:
		break;
	}
	return possibleMoves;
}

int Slyph::getPrice()
{
	return 2;
}
