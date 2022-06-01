#pragma once
#include "pch.h"
#include "Dragon.h"
#include "GameState.h"
#include "GameLogic.h"

Dragon::Dragon(color pieceColor) : Piece(pieceColor)
{
}


list<tableRelated::Move>* Dragon::getPossibleMoves(int table, int x, int y)
{
	list<tableRelated::Move>* possibleMoves = new list<tableRelated::Move>();
	tableRelated::Move* currentMove = new tableRelated::Move();
	switch (table)
	{
	case 1:
		//x+1,y
		currentMove->x = x + 1;
		currentMove->y = y;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (GameState::airTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//x++,y--
		currentMove->x = x+1;
		currentMove->y = y-1;
		while (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
			{
				if (GameState::airTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::move));
				}
				else if (GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::capture));
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
		//x,y-1
		currentMove->x = x;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (GameState::airTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//x--,y--
		currentMove->x = x - 1;
		currentMove->y = y - 1;
		while (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
			{
				if (GameState::airTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::move));
				}
				else if (GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::capture));
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
		//x-1,y
		currentMove->x = x - 1;
		currentMove->y = y;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (GameState::airTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//x--,y++
		currentMove->x = x - 1;
		currentMove->y = y + 1;
		while (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
			{
				if (GameState::airTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::move));
				}
				else if (GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::capture));
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
		//x,y+1
		currentMove->x = x;
		currentMove->y = y+1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (GameState::airTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//x++,y++
		currentMove->x = x + 1;
		currentMove->y = y +1;
		while (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
		{
			if (GameLogic::possibleMove(1, currentMove->y, currentMove->x))
			{
				if (GameState::airTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::move));
				}
				else if (GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::capture));
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
		//2:
		currentMove->x = x ;
		currentMove->y = y;
		currentMove->table = 2;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && GameState::earthTable[currentMove->y][currentMove->x] != NULL && GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
		{
			possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture_afar));
		}
		currentMove->x = x + 1;
		currentMove->y = y;
		currentMove->table = 2;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && GameState::earthTable[currentMove->y][currentMove->x] != NULL && GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
		{
			possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture_afar));
		}
		currentMove->x = x;
		currentMove->y = y - 1;
		currentMove->table = 2;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && GameState::earthTable[currentMove->y][currentMove->x] != NULL && GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
		{
			possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture_afar));
		}
		currentMove->x = x - 1;
		currentMove->y = y;
		currentMove->table = 2;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && GameState::earthTable[currentMove->y][currentMove->x] != NULL && GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
		{
			possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture_afar));
		}

		currentMove->x = x;
		currentMove->y = y + 1;
		currentMove->table = 2;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && GameState::earthTable[currentMove->y][currentMove->x] != NULL && GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
		{
			possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture_afar));
		}
		break;
	default:
		break;
	}

	delete currentMove;
	return possibleMoves;
}

int Dragon::getPrice()
{
	return 16;
}

char Dragon::getLetter()
{
	return 'R';
}

Piece* Dragon::copy()
{
	return new Dragon(this->pieceColor);
}
