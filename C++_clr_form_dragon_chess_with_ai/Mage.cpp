#include "pch.h"
#include "Mage.h"
#include "GameLogic.h"
#include "GameState.h"

Mage::Mage(color pieceColor) : Piece(pieceColor)
{
}

list<tableRelated::Move>* Mage::getPossibleMoves(int table, int x, int y)
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
		//x,y+1
		currentMove->x = x;
		currentMove->y = y + 1;
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
		//2,1:x,y
		currentMove->x = x;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
		{
			if (GameState::earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
				if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
				{
					if (GameState::undergroundTable[currentMove->y][currentMove->x] == NULL)
					{
						possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
					}
					else if (GameState::undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
					{
						possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
					}
				}
			}
			else if (GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		break;
	case 2:
		//x++,y--
		currentMove->x = x + 1;
		currentMove->y = y - 1;
		while (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
		{
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
			{
				if (GameState::earthTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
				}
				else if (GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
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
					possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
				}
				else if (GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
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
					possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
				}
				else if (GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
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
					possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
				}
				else if (GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
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
			currentMove->y++;
		}
		//x++,y
		currentMove->x = x + 1;
		currentMove->y = y;
		currentMove->table = 2;

		while (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
		{
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
			{
				if (GameState::earthTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
				}
				else if (GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
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
		currentMove->y = y - 1;
		currentMove->table = 2;

		while (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
		{
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
			{
				if (GameState::earthTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
				}
				else if (GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
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
		currentMove->x = x - 1;
		currentMove->y = y;
		currentMove->table = 2;

		while (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
		{
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
			{
				if (GameState::earthTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
				}
				else if (GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
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
		currentMove->y = y + 1;
		currentMove->table = 2;

		while (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
		{
			if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
			{
				if (GameState::earthTable[currentMove->y][currentMove->x] == NULL)
				{
					possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
				}
				else if (GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
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
		//1:x,y
		currentMove->x = x;
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
		//3:x,y
		currentMove->x = x;
		currentMove->y = y;
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (GameState::undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		break;
	case 3:
		//x+1,y
		currentMove->x = x+1;
		currentMove->y = y;
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (GameState::undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//x,y+1
		currentMove->x = x;
		currentMove->y = y + 1;
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (GameState::undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//x-1,y
		currentMove->x = x-1;
		currentMove->y = y;
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (GameState::undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//x,y-1
		currentMove->x = x;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(3, currentMove->y, currentMove->x))
		{
			if (GameState::undergroundTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::move));
			}
			else if (GameState::undergroundTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 3, currentMove->x, currentMove->y, moveType::capture));
			}
		}
		//2,1:x,y
		currentMove->x = x;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(2, currentMove->y, currentMove->x))
		{
			if (GameState::earthTable[currentMove->y][currentMove->x] == NULL)
			{
				possibleMoves->push_back(tableRelated::Move(table, x, y, 2, currentMove->x, currentMove->y, moveType::move));
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
			}
			else if (GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
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

int Mage::getPrice()
{
	return 22;
}

char Mage::getLetter()
{
	return 'M';
}

Piece* Mage::copy()
{
	return new Mage(this->pieceColor);
}
