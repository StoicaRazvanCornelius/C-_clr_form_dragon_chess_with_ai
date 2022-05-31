#pragma once
#include "moveType.h"
namespace tableRelated {
class Move
{

public:
	Move();
	Move(int table, int x, int y,moveType type_of_move);
	int table;
	int x;
	int y;
	moveType type;
};
}