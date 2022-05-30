#pragma once
#include "pch.h"
#include "Griffin.h"
#include "GameState.h"

Griffin::Griffin(color pieceColor) : Piece(pieceColor)
{
}


list<tableRelated::Move>* Griffin::getPossibleMoves(int table, int y, int x)
{
	list<tableRelated::Move>* possibleMoves = new list<tableRelated::Move>();
	tableRelated::Move* currentMove = new tableRelated::Move();
	switch (table)
	{
	case 1:
		//x+3,y-2
		currentMove->x = x + 3;
		currentMove->y = y - 2 ;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && (GameState::airTable[currentMove->y][currentMove->x] == NULL ||  GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor))
			possibleMoves->push_back(tableRelated::Move(1, currentMove->y, currentMove->x));
		//x+2,y-3
		currentMove->x = x + 2;
		currentMove->y = y - 3;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && (GameState::airTable[currentMove->y][currentMove->x] == NULL || GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor))
			possibleMoves->push_back(tableRelated::Move(1, currentMove->y, currentMove->x));
		//x-2,y-3
		currentMove->x = x - 2;
		currentMove->y = y - 3;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && (GameState::airTable[currentMove->y][currentMove->x] == NULL || GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor))
			possibleMoves->push_back(tableRelated::Move(1, currentMove->y, currentMove->x));
		//x-3,y-2
		currentMove->x = x - 3;
		currentMove->y = y - 2;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && (GameState::airTable[currentMove->y][currentMove->x] == NULL || GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor))
			possibleMoves->push_back(tableRelated::Move(1, currentMove->y, currentMove->x));
		//x-3,y+2
		currentMove->x = x - 3;
		currentMove->y = y + 2;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && (GameState::airTable[currentMove->y][currentMove->x] == NULL || GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor))
			possibleMoves->push_back(tableRelated::Move(1, currentMove->y, currentMove->x));
		//x-2,y+3
		currentMove->x = x - 2;
		currentMove->y = y + 3;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && (GameState::airTable[currentMove->y][currentMove->x] == NULL || GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor))
			possibleMoves->push_back(tableRelated::Move(1, currentMove->y, currentMove->x));
		//x+3,y+2
		currentMove->x = x + 3;
		currentMove->y = y + 2;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && (GameState::airTable[currentMove->y][currentMove->x] == NULL || GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor))
			possibleMoves->push_back(tableRelated::Move(1, currentMove->y, currentMove->x));
		//x+2,y+3
		currentMove->x = x + 2;
		currentMove->y = y + 3;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && (GameState::airTable[currentMove->y][currentMove->x] == NULL || GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor))
			possibleMoves->push_back(tableRelated::Move(1, currentMove->y, currentMove->x));
		//2:x+1,y-1
		currentMove->x = x + 1;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && (GameState::earthTable[currentMove->y][currentMove->x] == NULL || GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor))
			possibleMoves->push_back(tableRelated::Move(2, currentMove->y, currentMove->x));
		//2:x-1,y-1
		currentMove->x = x - 1;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && (GameState::earthTable[currentMove->y][currentMove->x] == NULL || GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor))
			possibleMoves->push_back(tableRelated::Move(2, currentMove->y, currentMove->x));
		//2:x-1,y+1
		currentMove->x = x - 1;
		currentMove->y = y + 1;
		if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && (GameState::earthTable[currentMove->y][currentMove->x] == NULL || GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor))
			possibleMoves->push_back(tableRelated::Move(2, currentMove->y, currentMove->x));
		//2:x+1,y+1
		currentMove->x = x + 1;
		currentMove->y = y + 1;
		if (GameLogic::possibleMove(2, currentMove->y, currentMove->x) && (GameState::earthTable[currentMove->y][currentMove->x] == NULL || GameState::earthTable[currentMove->y][currentMove->x]->getColor() != pieceColor))
			possibleMoves->push_back(tableRelated::Move(2, currentMove->y, currentMove->x));
		break;
	case 2:
		//1:x+1,y-1
		currentMove->x = x + 1;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && (GameState::airTable[currentMove->y][currentMove->x] == NULL || GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor))
			possibleMoves->push_back(tableRelated::Move(1, currentMove->y, currentMove->x));
		//1:x-1,y-1
		currentMove->x = x - 1;
		currentMove->y = y - 1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && (GameState::airTable[currentMove->y][currentMove->x] == NULL || GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor))
			possibleMoves->push_back(tableRelated::Move(1, currentMove->y, currentMove->x));
		//1:x-1,y+1
		currentMove->x = x - 1;
		currentMove->y = y + 1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && (GameState::airTable[currentMove->y][currentMove->x] == NULL || GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor))
			possibleMoves->push_back(tableRelated::Move(1, currentMove->y, currentMove->x));
		//1:x+1,y+1
		currentMove->x = x + 1;
		currentMove->y = y + 1;
		if (GameLogic::possibleMove(1, currentMove->y, currentMove->x) && (GameState::airTable[currentMove->y][currentMove->x] == NULL || GameState::airTable[currentMove->y][currentMove->x]->getColor() != pieceColor))
			possibleMoves->push_back(tableRelated::Move(1, currentMove->y, currentMove->x));
		break;
	default:
			break;
	}
	
	delete currentMove;
	return possibleMoves;
}

color Griffin::getColor()
{
	return this->pieceColor;
}

int Griffin::getPrice()
{
	return 10;
}
