using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

#pragma once
ref class Cell : public Label
{
public:
	Cell(char value);
	
	void SetBackgroundColor(Color color);
	void SetForegroundColor(Color color);
};

