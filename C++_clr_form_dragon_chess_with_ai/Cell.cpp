#include "pch.h"
#include "Cell.h"
#include "Piece.h"
#include "Slyph.h"
#include "Form1.h"

Cell::Cell(int x, int y, int tableNumber, char value)
{
    this->x = x;
    this->y = y;
    this->tableNumber = tableNumber;
    this->Click += gcnew System::EventHandler(this, &Cell::GeneralBlockClickFunction);
    this->Text = gcnew String(&value);
    this->AutoSize = true;
    this->Anchor = static_cast<AnchorStyles>((((AnchorStyles::Top | AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | AnchorStyles::Right));
    this->Margin = System::Windows::Forms::Padding(0);
    this->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
}

void Cell::SetBackgroundColor(Color color)
{
    this->BackColor = color;
}

void Cell::SetForegroundColor(Color color)
{
    this->ForeColor = color;
}

int Cell::GetX()
{
    return this->x;
}

int Cell::GetY()
{
    return this->y;
}

int Cell::GetTableNumber()
{
    return this->tableNumber;
}

void Cell::GeneralBlockClickFunction(System::Object^ sender, System::EventArgs^ e)
{
    Cell^ selectedCell = (Cell^)sender;
    Piece* slyph = new Slyph();
    list<tableRelated::Move>* possbileMoves = slyph->getPossibleMoves(3, 0, 0);
    for (auto it = possbileMoves->begin(); it != possbileMoves->end(); ++it) {
        //CppCLRWinFormsProject::Form1::tables[it->table]->
        selectedCell->Text += "\n" + it->table + " " + it->x + " " + it->y;
    }
}