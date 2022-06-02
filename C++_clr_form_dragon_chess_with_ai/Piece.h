#pragma once
#include "color.h"
#include <list>
#include "Move.h"

using namespace std;
class Piece
{
public:
	Piece(color pieceColor);
	color getColor();
	virtual Piece* copy() = 0;
	virtual list<tableRelated::Move>* getPossibleMoves(int table, int x, int y, Piece* (&airTable)[8][12], Piece* (&earthTable)[8][12], Piece* (&undergroundTable)[8][12]) = 0;
	virtual int getPrice() = 0;
	virtual char getLetter() = 0;

protected:
	color pieceColor;
};

