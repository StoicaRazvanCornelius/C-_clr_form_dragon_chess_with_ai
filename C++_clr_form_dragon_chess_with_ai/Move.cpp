#include "pch.h"
#include "Move.h"

tableRelated::Move::Move()
{
	this->table = -1;
	this->x = -1;
	this->y = -1;
}

tableRelated::Move::Move(int table, int x, int y,moveType type_of_move = moveType::move)
{
	this->table = table;
	this->x = x;
	this->y = y;
	this->my_move_type = type_of_move;
}
