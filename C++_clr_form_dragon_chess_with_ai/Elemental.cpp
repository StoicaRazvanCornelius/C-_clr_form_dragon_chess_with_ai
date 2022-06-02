#include "pch.h"
#include "Elemental.h"
#include "GameState.h"
#include "GameLogic.h"

Elemental::Elemental(color pieceColor) : Piece(pieceColor)
{
}

list<tableRelated::Move>* Elemental::getPossibleMoves(int table, int x, int y, Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12])
{
	list<tableRelated::Move>* possibleMoves = new list<tableRelated::Move>();
	tableRelated::Move* currentMove = new tableRelated::Move();
	switch (table)
	{
	case 2:
		//3:x+1,y
		currentMove->x = x + 1;
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
		//3:x,y-1
		currentMove->x = x;
		currentMove->y = y - 1;
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
		//3:x-1,y
		currentMove->x = x - 1;
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
		//3:x,y+1
		currentMove->x = x;
		currentMove->y = y + 1;
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
		//x++,y
		currentMove->x = x + 1;
		currentMove->y = y;
		for (int i = 0; i < 2; i++)
		{
			if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
			{
				if (undergroundTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
				}
				else if (undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
					break;
				}
				else {
					break;
				}
			}
			currentMove->x++;
		}
		//x,y--
		currentMove->x = x;
		currentMove->y = y - 1;
		for (int i = 0; i < 2; i++)
		{
			if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
			{
				if (undergroundTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
				}
				else if (undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
					break;
				}
				else {
					break;
				}
			}
			currentMove->y--;
		}
		//x--,y
		currentMove->x = x - 1;
		currentMove->y = y;
		for (int i = 0; i < 2; i++)
		{
			if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
			{
				if (undergroundTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
				}
				else if (undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
					break;
				}
				else {
					break;
				}
			}
			currentMove->x--;
		}
		//x,y++
		currentMove->x = x;
		currentMove->y = y + 1;
		for (int i = 0; i < 2; i++)
		{
			if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
			{
				if (undergroundTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
				}
				else if (undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
					break;
				}
				else {
					break;
				}
			}
			currentMove->y++;
		}
		//x+1,y-1
		currentMove->x = x + 1;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
		}
		//x-1,y-1
		currentMove->x = x - 1;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
		}
		//x-1,y+1
		currentMove->x = x - 1;
		currentMove->y = y + 1;
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
		}
		//x+1,y+1
		currentMove->x = x + 1;
		currentMove->y = y + 1;
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
		}
		//2:x+1,y
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
		//2:x,y-1
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
		//2:x-1,y
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
		//2:x,y+1
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
		break;
	default:
		break;
	}

	delete currentMove;
	return possibleMoves;

}

int Elemental::getPrice()
{
	return 8;
}

char Elemental::getLetter()
{
	return 'E';
}
Piece* Elemental::copy()
{
	return new Elemental(this->pieceColor);
}
