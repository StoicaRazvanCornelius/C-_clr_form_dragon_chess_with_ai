#include "pch.h"
#include "Move.h"

tableRelated::Move::Move()
{
	this->table = -1;
	this->x = -1;
	this->y = -1;
}

tableRelated::Move::Move(int table, int x, int y)
{
	this->table = table;
	this->x = x;
	this->y = y;
}
