#include "pch.h"
#include "Paladin.h"

Paladin::Paladin(color pieceColor) : Piece(pieceColor)
{
}

list<tableRelated::Move>* Paladin::getPossibleMoves(int table, int x, int y)
{
	return nullptr;
}

int Paladin::getPrice()
{
	return 20;
}
