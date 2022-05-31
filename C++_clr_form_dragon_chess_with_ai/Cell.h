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
	void SelectCell(Cell^ selectedCell);
	void UnselectCell();

	static int currentTable = -1;
	static int currentX = -1;
	static int currentY = -1;
public:
	Cell(int x, int y, int tableNumber, char value);
	
	void SetBackgroundColor(Color color);
	void SetForegroundColor(Color color);
	int GetX();
	int GetY();
	int GetTableNumber();
};

