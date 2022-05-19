using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

#include "Cell.h"

#pragma once
ref class GameTableView : public TableLayoutPanel
{
public:
	GameTableView(Color white, Color black, char initPosition[8][12]);

private:
	void DisplayCells(Color white, Color black, char initPosition[8][12]);
};

