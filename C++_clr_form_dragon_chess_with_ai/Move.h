#pragma once
namespace tableRelated {
class Move
{

public:
	Move();
	Move(int table, int x, int y);
	int table;
	int x;
	int y;
};
}