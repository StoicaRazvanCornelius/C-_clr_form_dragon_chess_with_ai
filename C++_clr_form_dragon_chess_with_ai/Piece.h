#pragma once
#include "color.h"
#include <list>
#include "Move.h"

using namespace std;
class Piece
{
public:
	virtual list<Move> getPossibleMoves(int table, int x, int y) = 0;
	virtual color getColor() = 0;
	virtual int getPrice() = 0;
};

