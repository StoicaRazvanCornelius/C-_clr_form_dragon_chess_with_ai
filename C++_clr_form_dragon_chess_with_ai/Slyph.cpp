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
		currentMove->y = y;
		currentMove->x = x;
		currentMove->table = 2;
		currentMove->type = moveType::capture;
		if (GameLogic::possibleMove(currentMove->table, currentMove->y, currentMove->x) && GameState::earthTable[currentMove->y][currentMove->x] == NULL)
		{
			possibleMoves->push_back(tableRelated::Move(currentMove->table, currentMove->x, currentMove->y, currentMove->type));
		}
		currentMove->y = y - 1;
		currentMove->x = x;
		currentMove->table = 1;
		currentMove->type = moveType::capture;
		if (GameLogic::possibleMove(currentMove->table, currentMove->y, currentMove->x) && GameState::airTable[currentMove->y][currentMove->x] != NULL && GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor)
		{
			possibleMoves->push_back(tableRelated::Move(currentMove->table, currentMove->x, currentMove->y, currentMove->type));
		}
		currentMove->y = y - 1;
		currentMove->x = x-1;
		currentMove->table = 1;
		currentMove->type = moveType::move;
		if (GameLogic::possibleMove(currentMove->table, currentMove->y, currentMove->x) && GameState::airTable[currentMove->y][currentMove->x] == NULL)
		{
			possibleMoves->push_back(tableRelated::Move(currentMove->table, currentMove->x, currentMove->y, currentMove->type));
		}
		currentMove->y = y - 1;
		currentMove->x = x + 1;
		currentMove->table = 1;
		currentMove->type = moveType::move;
		if (GameLogic::possibleMove(currentMove->table, currentMove->y, currentMove->x) && GameState::airTable[currentMove->y][currentMove->x] == NULL)
		{
			possibleMoves->push_back(tableRelated::Move(currentMove->table, currentMove->x, currentMove->y, currentMove->type));
		}
		break;
 	 case 2:
		 currentMove->y = y;
		 currentMove->x = x;
		 currentMove->table = 1;
		 currentMove->type = moveType::move;
		 if (GameLogic::possibleMove(currentMove->table, currentMove->y, currentMove->x) && GameState::airTable[currentMove->y][currentMove->x] == NULL)
		 {
			 possibleMoves->push_back(tableRelated::Move(currentMove->table, currentMove->x, currentMove->y, currentMove->type));
		 }
		 switch (this->getColor())
		 {
		 case white :
				 currentMove->table = 1;
				 currentMove->y = 6;
				 currentMove->x = 0;
				 currentMove->type = moveType::move;
				 if (GameState::airTable[currentMove->y][currentMove->x] == NULL)
				 {
					 possibleMoves->push_back(tableRelated::Move(currentMove->table, currentMove->x, currentMove->y, currentMove->type));

				 }

			 while (GameLogic::possibleMove(currentMove->table, currentMove->y, currentMove->x))
			 {
				 if (GameLogic::possibleMove(currentMove->table, currentMove->y, currentMove->x) && GameState::airTable[currentMove->y][currentMove->y] == NULL)
				 {
					 possibleMoves->push_back(tableRelated::Move(currentMove->table, currentMove->x, currentMove->y, currentMove->type));
				 }
				 currentMove->x = currentMove->x + 2;
			 }
			break;
		 case black:
			 currentMove->table = 1;
			 currentMove->y = 1;
			 currentMove->x = 0;
			 currentMove->type = moveType::move;
			 while (GameLogic::possibleMove(currentMove->table, currentMove->y, currentMove->x))
			 {
				 if (GameLogic::possibleMove(currentMove->table, currentMove->y, currentMove->x) && GameState::airTable[currentMove->y][currentMove->x] == NULL)
				 {
					 possibleMoves->push_back(tableRelated::Move(currentMove->table, currentMove->x, currentMove->y, currentMove->type));
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
	return possibleMoves;
}

int Slyph::getPrice()
{
	return 2;
}
