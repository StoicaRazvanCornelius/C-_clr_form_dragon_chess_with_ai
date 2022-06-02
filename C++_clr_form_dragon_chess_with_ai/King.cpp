#include "pch.h"
#include "King.h"
#include "GameLogic.h"
#include "GameState.h"

King::King(color pieceColor) : Piece(pieceColor)
{
}

list<tableRelated::Move>* King::getPossibleMoves(int table, int x, int y, Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12])
{
	list<tableRelated::Move>* possibleMoves = new list<tableRelated::Move>();
	tableRelated::Move* currentMove = new tableRelated::Move();
	switch (table)
	{
	case 1:
		//2:x,y
		currentMove->x = x;
		currentMove->y = y;
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
		break;
	case 2:
		//x+1,y
		currentMove->x = x + 1;
		currentMove->y = y;
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
		//x+1,y-1
		currentMove->x = x + 1;
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
		//x,y-1
		currentMove->x = x;
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
		//x-1,y-1
		currentMove->x = x - 1;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
		{
			if (earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
			}
			else if (earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(2, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//x-1,y
		currentMove->x = x - 1;
		currentMove->y = y;
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
		//x-1,y+1
		currentMove->x = x - 1;
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
		//x,y+1
		currentMove->x = x;
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
		//x+1,y+1
		currentMove->x = x + 1;
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
		//1:x,y
		currentMove->x = x;
		currentMove->y = y;
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
		//3:x,y
		currentMove->x = x;
		currentMove->y = y;
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
		//2:x,y
		currentMove->x = x;
		currentMove->y = y;
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
		break;
	default:

		break;
	}
	delete currentMove;
	return possibleMoves;
}

int King::getPrice()
{
	return 10000;
}

char King::getLetter()
{
	return 'K';
}

Piece* King::copy()
{
	return new King(this->pieceColor);
}
