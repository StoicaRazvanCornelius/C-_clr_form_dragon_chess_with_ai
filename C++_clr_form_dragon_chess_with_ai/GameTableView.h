using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

#include "Cell.h"
#include "Piece.h"

#pragma once
ref class GameTableView : public TableLayoutPanel
{
public:
	GameTableView(Color white, Color black, Piece* initPosition[8][12], int tableNumber);
	void ClearCells(Color white, Color black);

private:
	void DisplayCells(Color white, Color black, Piece* initPosition[8][12], int tableNumber);
};

