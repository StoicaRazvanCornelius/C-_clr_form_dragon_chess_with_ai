#pragma once
#include "pch.h"
#include "Slyph.h"
#include "GameLogic.h"

Slyph::Slyph(color pieceColor) : Piece(pieceColor)
{
}

list<tableRelated::Move>* Slyph::getPossibleMoves(int table, int x, int y)
{
	list<tableRelated::Move>* possibleMoves = new list<tableRelated::Move>();
	tableRelated::Move* currentMove = new tableRelated::Move();

	switch (table)
	{
	case 1:
		switch (this->getColor())
		{
		case white:
			//2:x,y
			currentMove->y = y;
			currentMove->x = x;
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && GameState::earthTable[currentMove->y][currentMove->x] != NULL && GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(2, currentMove->x, currentMove->y, moveType::capture));
			}
			//x,y-1
			currentMove->y = y - 1;
			currentMove->x = x;
			if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && GameState::airTable[currentMove->y][currentMove->x] != NULL && GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(1, currentMove->x, currentMove->y, currentMove->type));
			}
			//x-1,y-1
			currentMove->y = y - 1;
			currentMove->x = x - 1;
			if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && GameState::airTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(1, currentMove->x, currentMove->y, moveType::move));
			}
			//x+1,y-1
			currentMove->y = y - 1;
			currentMove->x = x + 1;
			if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && GameState::airTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(1, currentMove->x, currentMove->y, moveType::move));
			}
			break;
		case black:
			//2:x,y
			currentMove->y = y;
			currentMove->x = x;
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && GameState::earthTable[currentMove->y][currentMove->x] != NULL && GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(2, currentMove->x, currentMove->y, moveType::capture));
			}
			//x,y+1
			currentMove->y = y + 1;
			currentMove->x = x;
			if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && GameState::airTable[currentMove->y][currentMove->x] != NULL && GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(1, currentMove->x, currentMove->y, moveType::capture));
			}
			//x-1,y+1
			currentMove->y = y + 1;
			currentMove->x = x - 1;
			if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && GameState::airTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(1, currentMove->x, currentMove->y, moveType::move));
			}
			//x+1,y+1
			currentMove->y = y + 1;
			currentMove->x = x + 1;
			if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && GameState::airTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(1, currentMove->x, currentMove->y, moveType::move));
			}
			break;
		default:
			break;
		}
		break;
	case 2:
		//1:x,y
		currentMove->y = y;
		currentMove->x = x;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && GameState::airTable[currentMove->y][currentMove->x] == NULL)
		{
			possibleMoves->push_back(tableRelated::Move(1, currentMove->x, currentMove->y, moveType::move));
		}
		switch (this->getColor())
		{
		case white:
			//1:x+2,y=6
			currentMove->y = 6;
			currentMove->x = 0;
			while (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
			{
				if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && GameState::airTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(1, currentMove->x, currentMove->y, moveType::move));
				}
				currentMove->x = currentMove->x + 2;
			}
			break;
		case black:
			//1:x+2,y=1
			currentMove->y = 1;
			currentMove->x = 0;
			while (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
			{
				if (GameLogic::possibleMove(currentMove->table, currentMove->y, currentMove->x) && GameState::airTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(1, currentMove->x, currentMove->y, moveType::move));
				}
				currentMove->x = currentMove->x + 2;
			}
			break;

		default:
			break;
		}
	default:
		break;
	}
	delete currentMove;
	return possibleMoves;
}

int Slyph::getPrice()
{
	return 2;
}

char Slyph::getLetter()
{
	return 'S';
}
