#include "pch.h"
#include "Move.h"

tableRelated::Move::Move()
{
	this->table = -1;
	this->x = -1;
	this->y = -1;
}

tableRelated::Move::Move(int table, int x, int y,moveType type = moveType::move)
{
	this->table = table;
	this->x = x;
	this->y = y;
	this->type = type;
}

tableRelated::Move::Move(int tableOrigin, int xOrigin, int yOrigin, int table, int x, int y, moveType type) : Move(table, x, y, type)
{
	this->tableOrigin = tableOrigin;
	this->xOrigin = xOrigin;
	this->yOrigin = yOrigin;
}
