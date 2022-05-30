#include "pch.h"
#include "Cell.h"
#include "Piece.h"
#include "Slyph.h"
#include "Form1.h"

Cell::Cell(int y, int x, int tableNumber, char value)
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

void Cell::PaintCell()
{
    throw gcnew System::NotImplementedException();
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
    GameLogic * gameLogic = new GameLogic(); 
    list<tableRelated::Move>* possibleMoves = gameLogic->GetMoves(this->tableNumber, this->y, this->x);
    if (possibleMoves != NULL) 
    {
        CppCLRWinFormsProject::Form1::DisplayPossibleMoves(possibleMoves);
    }
}