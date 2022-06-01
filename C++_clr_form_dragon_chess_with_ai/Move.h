#pragma once
#include "moveType.h"
namespace tableRelated {
class Move
{

public:
	Move();
	Move(int table, int x, int y,moveType type_of_move);
	Move(int tableOrigin, int xOrigin, int yOrigin, int table, int x, int y, moveType type);
	int table;
	int x;
	int y;
	int tableOrigin;
	int xOrigin;
	int yOrigin;
	moveType type;
};
}