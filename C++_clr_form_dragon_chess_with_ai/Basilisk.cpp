#include "pch.h"
#include "Basilisk.h"
#include "GameLogic.h"
#include "GameState.h"

Basilisk::Basilisk(color pieceColor) : Piece(pieceColor)
{
}

list<tableRelated::Move>* Basilisk::getPossibleMoves(int table, int x, int y)
{
	list<tableRelated::Move>* possibleMoves = new list<tableRelated::Move>();
	tableRelated::Move* currentMove = new tableRelated::Move();
	switch (this->getColor())
	{
	case white:
		//x+1,y-1
		currentMove->x = x + 1;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (GameState::undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(3, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(3, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//x,y-1
		currentMove->x = x;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (GameState::undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(3, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(3, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//x-1,y-1
		currentMove->x = x - 1;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (GameState::undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(3, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(3, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//x,y+1
		currentMove->x = x;
		currentMove->y = y + 1;
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (GameState::undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(3, currentMove->x, currentMove->y, moveType::move));
			}
		}
		//2:x,y+1
		currentMove->x = x;
		currentMove->y = y;
		if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
		{
			if (GameState::earthTable[currentMove->y][currentMove->x] != NULL && GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(2, currentMove->x, currentMove->y, moveType::freezing));
			}
		}
		break;
	case black:
		//x+1,y+1
		currentMove->x = x + 1;
		currentMove->y = y + 1;
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (GameState::undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(3, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(3, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//x,y+1
		currentMove->x = x;
		currentMove->y = y + 1;
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (GameState::undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(3, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(3, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//x-1,y+1
		currentMove->x = x - 1;
		currentMove->y = y + 1;
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (GameState::undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(3, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(3, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//x,y-1
		currentMove->x = x;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (GameState::undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(3, currentMove->x, currentMove->y, moveType::move));
			}
		}
		//2:x,y
		currentMove->x = x;
		currentMove->y = y;
		if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
		{
			if (GameState::earthTable[currentMove->y][currentMove->x] != NULL && GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(2, currentMove->x, currentMove->y, moveType::freezing));
			}
		}
		break;
	default:
		break;
	}
	delete currentMove;
	return possibleMoves;
}

int Basilisk::getPrice()
{
	return 6;
}

char Basilisk::getLetter()
{
	return 'B';
}
