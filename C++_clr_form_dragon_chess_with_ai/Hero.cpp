#pragma once
#include "pch.h"
#include "Hero.h"
#include "GameLogic.h"
#include "GameState.h"

Hero::Hero(color pieceColor) : Piece(pieceColor)
{
}

list<tableRelated::Move>* Hero::getPossibleMoves(int table, int x, int y, Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12])
{
	list<tableRelated::Move>* possibleMoves = new list<tableRelated::Move>();
	tableRelated::Move* currentMove = new tableRelated::Move();
	switch (table)
	{
	case 1:
		//2:x+1,y-1
		currentMove->x = x + 1;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
			}
			else if (earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//2:x-1,y-1
		currentMove->x = x - 1;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
			}
			else if (earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//2:x-1,y+1
		currentMove->x = x - 1;
		currentMove->y = y + 1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
			}
			else if (earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//2:x+1,y+1
		currentMove->x = x + 1;
		currentMove->y = y + 1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
			}
			else if (earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		break;
	case 2:
		//x++,y--
		currentMove->x = x + 1;
		currentMove->y = y - 1;
		for (int i = 0; i < 2; i++)
		{
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
			{
				if (earthTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
				}
				else if (earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
				}
			}
			currentMove->x++;
			currentMove->y--;

		}
		//x--,y--
		currentMove->x = x - 1;
		currentMove->y = y - 1;

		for (int i = 0; i < 2; i++)
		{
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
			{
				if (earthTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
				}
				else if (earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
				}
			}
			currentMove->x--;
			currentMove->y--;

		}
		//x--,y++
		currentMove->x = x - 1;
		currentMove->y = y + 1;

		for (int i = 0; i < 2; i++)
		{
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
			{
				if (earthTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
				}
				else if (earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
				}
			}
			currentMove->x--;
			currentMove->y++;

		}
		//x++,y++
		currentMove->x = x + 1;
		currentMove->y = y + 1;

		for (int i = 0; i < 2; i++)
		{
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
			{
				if (earthTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
				}
				else if (earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));

				}
			}
			currentMove->x++;
			currentMove->y++;

		}
		//1,3:x+1,y-1
		currentMove->x = x + 1;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (airTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::move));
			}
			else if (airTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
			else if (undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//1,3:x-1,y-1
		currentMove->x = x - 1;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (airTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::move));
			}
			else if (airTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
			else if (undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//1,3:x-1,y+1
		currentMove->x = x - 1;
		currentMove->y = y + 1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (airTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::move));
			}
			else if (airTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
			else if (undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//1,3:x+1,y+1
		currentMove->x = x + 1;
		currentMove->y = y + 1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (airTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::move));
			}
			else if (airTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
			else if (undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		break;
	case 3:
		//2:x+1,y-1
		currentMove->x = x + 1;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
			}
			else if (earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//2:x-1,y-1
		currentMove->x = x - 1;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
			}
			else if (earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//2:x-1,y+1
		currentMove->x = x - 1;
		currentMove->y = y + 1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
			}
			else if (earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//2:x+1,y+1
		currentMove->x = x + 1;
		currentMove->y = y + 1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
			}
			else if (earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		break;
	default:
		break;
	}

	delete currentMove;
	return possibleMoves;
}

int Hero::getPrice()
{
	return 9;
}

char Hero::getLetter()
{
	return 'H';
}
Piece* Hero::copy()
{
	return new Hero(this->pieceColor);
}
