#include "pch.h"
#include "AI.h"
#include "GameState.h"
#include "GameLogic.h"
#include "GameSetup.h"

void DeleteTableCopy(Piece* (&table)[8][12])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			delete table[i][j];
		}
	}
}

BoardStateTree AI::BuildTree(Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12], Move move, int depth)
{
	BoardStateTree node;
	node.move = move;
	if (depth <= 0)
	{
		node.price = GetStatePrice(airTable, earthTable, undergroundTable);
		return node;
	}
	else
	{
		color currentColor = GameState::currentColor;
		if (GameSetup::depth % 2 != depth % 2)
		{
			currentColor = (color)(1 - currentColor);
		}
		list<Move> possibleMoves = GetMoves(airTable, earthTable, undergroundTable, currentColor);
		GameLogic gameLogic;
		for (auto it = possibleMoves.begin(); it != possibleMoves.end(); it++)
		{
			Piece* airTable_copy[8][12];
			Piece* earthTable_copy[8][12];
			Piece* undergroundTable_copy[8][12];

			CreateTablesCopy(airTable, earthTable, undergroundTable, airTable_copy, earthTable_copy, undergroundTable_copy);
			gameLogic.MakeMove(it->tableOrigin, it->xOrigin, it->yOrigin, it->table, it->x, it->y, it->type, false, airTable_copy, earthTable_copy, undergroundTable_copy);

			node.children.push_back(BuildTree(airTable_copy, earthTable_copy, undergroundTable_copy, *it, depth - 1));

			DeleteTableCopy(airTable_copy);
			DeleteTableCopy(earthTable_copy);
			DeleteTableCopy(undergroundTable_copy);
		}
	}

	return node;
}

int AI::minmax(BoardStateTree &tree, bool isMaximizing)
{
	if (tree.children.empty())
	{
		return tree.price;
	}
	int minMaxPrice = INT_MAX;
	if (isMaximizing) minMaxPrice = INT_MIN;
	for (auto it = tree.children.begin(); it != tree.children.end(); it++)
	{
		if (isMaximizing)
			minMaxPrice = max(minmax(*it, !isMaximizing), minMaxPrice);
		else 
			minMaxPrice = min(minmax(*it, !isMaximizing), minMaxPrice);
	}
	tree.price = minMaxPrice;
	return minMaxPrice;
}

void AI::CreateTablesCopy(Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12], Piece* (&airTable_copy)[8][12], Piece* (&earthTable_copy)[8][12], Piece* (&undergroundTable_copy)[8][12])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			Piece* piece = airTable[i][j];
			if (piece == NULL) airTable_copy[i][j] = NULL;
			else airTable_copy[i][j] = piece->copy();
		}
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			Piece* piece = earthTable[i][j];
			if (piece == NULL) earthTable_copy[i][j] = NULL;
			else earthTable_copy[i][j] = earthTable[i][j]->copy();
		}
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			Piece* piece = undergroundTable[i][j];
			if (piece == NULL) undergroundTable_copy[i][j] = NULL;
			else undergroundTable_copy[i][j] = airTable[i][j]->copy();
		}
	}
}

int AI::GetStatePrice(Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12])
{
	int price = 0;
	GameLogic gameLogic;

	for (int table = 1; table <= 3; table++)
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 12; j++)
			{
				Piece* tmp = gameLogic.GetPiece(table, j, i, airTable, earthTable, undergroundTable);

				if (tmp != NULL)
				{
					price += tmp->getColor() == GameState::currentColor ? tmp->getPrice() : -tmp->getPrice();
				}
			}
		}
	}
	return price;
}

// creates list of all possible moves of all pieces
list<Move> AI::GetMoves(Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12], color currentColor)
{
	GameLogic gameLogic;
	list<Move> possibleMoves;
	for (int table = 1; table <= 3; table++)
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 12; j++)
			{
				Piece* piece = gameLogic.GetPiece(table, j, i, airTable, earthTable, undergroundTable);
				if (piece != NULL && piece->getColor() == currentColor)
				{
					list<Move>* tmp = piece->getPossibleMoves(table, j, i);
					possibleMoves.insert(possibleMoves.end(), tmp->begin(), tmp->end());
					delete tmp;
				}
			}
		}
	}
	return possibleMoves;
}
