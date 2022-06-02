#pragma once
#include "pch.h"
#include "Unicorn.h"
#include "GameLogic.h"


Unicorn::Unicorn(color pieceColor) : Piece(pieceColor)
{
}

list<tableRelated::Move>* Unicorn::getPossibleMoves(int table, int x, int y, Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12])
{
	list<tableRelated::Move>* possibleMoves = new list<tableRelated::Move>();
	tableRelated::Move* currentMove = new tableRelated::Move();
	//x+2,y-1
	currentMove->x = x + 2;
	currentMove->y = y - 1;
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
	//x+1,y-2
	currentMove->x = x + 1;
	currentMove->y = y - 2;
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
	//x-1,y-2
	currentMove->x = x - 1;
	currentMove->y = y - 2;
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
	//x-2,y-1
	currentMove->x = x - 2;
	currentMove->y = y - 1;
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
	//x-2,y+1
	currentMove->x = x - 2;
	currentMove->y = y + 1;
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
	//x-1,y+2
	currentMove->x = x - 1;
	currentMove->y = y + 2;
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
	//x+1,y+2
	currentMove->x = x + 1;
	currentMove->y = y + 2;
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
	//x+2,y+1
	currentMove->x = x + 2;
	currentMove->y = y + 1;
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

	delete currentMove;
	return possibleMoves;
}

int Unicorn::getPrice()
{
	return 16;
}

char Unicorn::getLetter()
{
	return 'U';
}

Piece* Unicorn::copy()
{
	return new Unicorn(this->pieceColor);
}
