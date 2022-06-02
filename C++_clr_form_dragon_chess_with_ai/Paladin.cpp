#include "pch.h"
#include "Paladin.h"
#include "GameLogic.h"
#include "GameState.h"

Paladin::Paladin(color pieceColor) : Piece(pieceColor)
{
}

list<tableRelated::Move>* Paladin::getPossibleMoves(int table, int x, int y, Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12])
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
			if (airTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::move));
			}
			else if (airTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 1, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//x+1,y-1
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
		//x,y-1
		currentMove->x = x;
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
		//x-1,y-1
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
		//x-1,y
		currentMove->x = x - 1;
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
		//x-1,y+1
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
		//x,y+1
		currentMove->x = x;
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
		//x+1,y+1
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
		//2:x+2,y
		currentMove->x = x + 2;
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
		//2:x,y-2
		currentMove->x = x;
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
		//2:x-2,y
		currentMove->x = x - 2;
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
		//2:x,y+2
		currentMove->x = x;
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
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
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
		//1:x+2,y
		currentMove->x = x + 2;
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
		//1:x,y-2
		currentMove->x = x;
		currentMove->y = y - 2;
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
		//1:x-2,y
		currentMove->x = x - 2;
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
		//1:x,y+2
		currentMove->x = x;
		currentMove->y = y + 2;
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
		//3:x+2,y
		currentMove->x = x + 2;
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
		//3:x,y-2
		currentMove->x = x;
		currentMove->y = y - 2;
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
		//3:x-2,y
		currentMove->x = x - 2;
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
		//3:x,y+2
		currentMove->x = x;
		currentMove->y = y + 2;
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
		//x+1,y
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
		//x+1,y-1
		currentMove->x = x + 1;
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
		//x,y-1
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
		//x-1,y-1
		currentMove->x = x - 1;
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
		//x-1,y
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
		//x-1,y+1
		currentMove->x = x - 1;
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
		//x,y+1
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
		//x+1,y+1
		currentMove->x = x + 1;
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
		//2:x+2,y
		currentMove->x = x + 2;
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
		//2:x,y-2
		currentMove->x = x;
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
		//2:x-2,y
		currentMove->x = x - 2;
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
		//2:x,y+2
		currentMove->x = x;
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
		//1:x+1,y
		currentMove->x = x + 1;
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
		//1:x,y-1
		currentMove->x = x;
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
		//1:x-1,y
		currentMove->x = x - 1;
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
		//1:x,y+1
		currentMove->x = x;
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
		break;
	default:
		break;
	}
	delete currentMove;
	return possibleMoves;
}

int Paladin::getPrice()
{
	return 20;
}

char Paladin::getLetter()
{
	return 'P';
}

Piece* Paladin::copy()
{
	return new Paladin(this->pieceColor);
}
