using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

#pragma once
ref class Cell : public Label
{
private:
	int x;
	int y;
	int tableNumber;
	void GeneralBlockClickFunction(System::Object^ sender, System::EventArgs^ e);

public:
	Cell(int x, int y, int tableNumber, char value);
	void PaintCell();
	
	void SetBackgroundColor(Color color);
	void SetForegroundColor(Color color);
	int GetX();
	int GetY();
	int GetTableNumber();
};

