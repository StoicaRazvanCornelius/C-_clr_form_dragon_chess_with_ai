#pragma once
#include "pch.h"
#include "Oliphant.h"
#include "GameState.h"

Oliphant::Oliphant(color pieceColor) :Piece(pieceColor)
{
}

list<tableRelated::Move>* Oliphant::getPossibleMoves(int table, int x, int y, Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12])
{
	list<tableRelated::Move>* possibleMoves = new list<tableRelated::Move>();
	tableRelated::Move* currentMove = new tableRelated::Move();
	//x++,y
	currentMove->x = x+1;
	currentMove->y = y;
	currentMove->table = 2;

	while (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
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
				break;

			}
			else
			{
				break;
			}
		}
		currentMove->x++;
	}
	//x,y--
	currentMove->x = x;
	currentMove->y = y-1;
	currentMove->table = 2;

	while (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
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
				break;
			}
			else
			{
				break;
			}
		}
		currentMove->y--;
	}
	//x--,y
	currentMove->x = x-1;
	currentMove->y = y;
	currentMove->table = 2;

	while (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
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
				break;
			}
			else
			{
				break;
			}
		}
		currentMove->x--;
	}
	//x,y++
	currentMove->x = x;
	currentMove->y = y+1;
	currentMove->table = 2;

	while (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
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
				break;
			}
			else
			{
				break;
			}
		}
		currentMove->y++;
	}

	delete currentMove;
	return possibleMoves;
}

int Oliphant::getPrice()
{
	return 10;
}

char Oliphant::getLetter()
{
	return 'O';
}

Piece* Oliphant::copy()
{
	return new Oliphant(this->pieceColor);
}
