#pragma once
#include "Move.h"
#include <list>

using namespace std;
using namespace tableRelated;
class BoardStateTree
{
public:
	Move move;
	int price;
	list<BoardStateTree> children;
};

