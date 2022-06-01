#pragma once
#include "pch.h"
#include "GameLogic.h"
#include "GameState.h"
#include "Thief.h"

Thief::Thief(color pieceColor) : Piece(pieceColor)
{
}

list<tableRelated::Move>* Thief::getPossibleMoves(int table, int x, int y)
{
	list<tableRelated::Move>* possibleMoves = new list<tableRelated::Move>();
	tableRelated::Move* currentMove = new tableRelated::Move();

	//x++,y--
	currentMove->x = x + 1;
	currentMove->y = y - 1;
	while (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
	{
		if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
		{
			if (GameState::earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(2, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(2, currentMove->x, currentMove->y, moveType::capture));
				break;
			}
			else
			{
				break;
			}
		}
		currentMove->x++;
		currentMove->y--;
	}
	//x--,y--
	currentMove->x = x - 1;
	currentMove->y = y - 1;
	while (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
	{
		if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
		{
			if (GameState::earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(2, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(2, currentMove->x, currentMove->y, moveType::capture));
				break;
			}
			else
			{
				break;
			}
		}
		currentMove->x--;
		currentMove->y--;
	}
	//x--,y++
	currentMove->x = x - 1;
	currentMove->y = y + 1;
	while (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
	{
		if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
		{
			if (GameState::earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(2, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(2, currentMove->x, currentMove->y, moveType::capture));
				break;
			}
			else
			{
				break;
			}
		}
		currentMove->x--;
		currentMove->y++;
	}
	//x++,y++
	currentMove->x = x + 1;
	currentMove->y = y + 1;
	while (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
	{
		if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
		{
			if (GameState::earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(2, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(2, currentMove->x, currentMove->y, moveType::capture));
				break;
			}
			else
			{
				break;
			}
		}
		currentMove->x++;
		currentMove->y++;
	}

	delete currentMove;
    return possibleMoves;
}

int Thief::getPrice()
{
    return 8;
}
