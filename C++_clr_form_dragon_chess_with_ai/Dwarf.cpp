#include "pch.h"
#include "Dwarf.h"
#include "GameState.h"
#include "GameLogic.h"

Dwarf::Dwarf(color pieceColor) : Piece(pieceColor)
{
}

list<tableRelated::Move>* Dwarf::getPossibleMoves(int table, int x, int y, Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12])
{
	list<tableRelated::Move>* possibleMoves = new list<tableRelated::Move>();
	tableRelated::Move* currentMove = new tableRelated::Move();

	switch (table)
	{
	case 2:
		switch (this->getColor())
		{
		case white:
			//x+1,y
			currentMove->y = y;
			currentMove->x = x + 1;
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
			}
			// x, y - 1
			currentMove->y = y - 1;
			currentMove->x = x;
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
			}
			// x-1, y
			currentMove->y = y;
			currentMove->x = x - 1;
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
			}
			// x+1, y-1
			currentMove->y = y - 1;
			currentMove->x = x + 1;
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && earthTable[currentMove->y][currentMove->x] != NULL && earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
			}
			// x-1, y-1
			currentMove->y = y - 1;
			currentMove->x = x - 1;
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && earthTable[currentMove->y][currentMove->x] != NULL && earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
			}
			//3: x, y
			currentMove->y = y;
			currentMove->x = x;
			if (GameLogic::possibleMove(3, currentMove->y, currentMove->x) && undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
			break;
		case black:
			//x+1,y
			currentMove->y = y;
			currentMove->x = x + 1;
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
			}
			// x, y + 1
			currentMove->y = y + 1;
			currentMove->x = x;
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
			}
			// x-1, y
			currentMove->y = y;
			currentMove->x = x - 1;
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
			}
			// x+1, y+1
			currentMove->y = y + 1;
			currentMove->x = x + 1;
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && earthTable[currentMove->y][currentMove->x] != NULL && earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
			}
			// x-1, y+1
			currentMove->y = y + 1;
			currentMove->x = x - 1;
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && earthTable[currentMove->y][currentMove->x] != NULL && earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
			}
			//3: x, y
			currentMove->y = y;
			currentMove->x = x;
			if (GameLogic::possibleMove(3, currentMove->y, currentMove->x) && undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
			break;
		default:
			break;
		}
		break;
	case 3:
		switch (this->getColor())
		{
		case white:
			//x+1,y
			currentMove->y = y;
			currentMove->x = x + 1;
			if (GameLogic::possibleMove(3, currentMove->y, currentMove->x) && undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
			// x, y - 1
			currentMove->y = y - 1;
			currentMove->x = x;
			if (GameLogic::possibleMove(3, currentMove->y, currentMove->x) && undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
			// x-1, y
			currentMove->y = y;
			currentMove->x = x - 1;
			if (GameLogic::possibleMove(3, currentMove->y, currentMove->x) && undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
			// x+1, y-1
			currentMove->y = y - 1;
			currentMove->x = x + 1;
			if (GameLogic::possibleMove(3, currentMove->y, currentMove->x) && undergroundTable[currentMove->y][currentMove->x] != NULL && undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
			}
			// x-1, y-1
			currentMove->y = y - 1;
			currentMove->x = x - 1;
			if (GameLogic::possibleMove(3, currentMove->y, currentMove->x) && undergroundTable[currentMove->y][currentMove->x] != NULL && undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
			}
			//2: x, y
			currentMove->y = y;
			currentMove->x = x;
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && earthTable[currentMove->y][currentMove->x] != NULL && earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
			}
			break;
		case black:
			//x+1,y
			currentMove->y = y;
			currentMove->x = x + 1;
			if (GameLogic::possibleMove(3, currentMove->y, currentMove->x) && undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
			// x, y + 1
			currentMove->y = y + 1;
			currentMove->x = x;
			if (GameLogic::possibleMove(3, currentMove->y, currentMove->x) && undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
			// x-1, y
			currentMove->y = y;
			currentMove->x = x - 1;
			if (GameLogic::possibleMove(3, currentMove->y, currentMove->x) && undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
			// x+1, y+1
			currentMove->y = y + 1;
			currentMove->x = x + 1;
			if (GameLogic::possibleMove(3, currentMove->y, currentMove->x) && undergroundTable[currentMove->y][currentMove->x] != NULL && undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
			}
			// x-1, y+1
			currentMove->y = y + 1;
			currentMove->x = x - 1;
			if (GameLogic::possibleMove(3, currentMove->y, currentMove->x) && undergroundTable[currentMove->y][currentMove->x] != NULL && undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
			}
			//2: x, y
			currentMove->y = y;
			currentMove->x = x;
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && earthTable[currentMove->y][currentMove->x] != NULL && earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
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

int Dwarf::getPrice()
{
	return 4;
}

char Dwarf::getLetter()
{
	return 'D';
}

Piece* Dwarf::copy()
{
	return new Dwarf(this->pieceColor);
}
