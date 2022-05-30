#pragma once
namespace tableRelated {
class Move
{

public:
	Move();
	Move(int table, int y, int x);
	int table;
	int x;
	int y;
};
}