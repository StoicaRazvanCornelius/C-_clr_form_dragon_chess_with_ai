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
    Piece* currentClickedPiece = gameLogic->GetPiece(this->GetTableNumber(), this->GetX(), this->GetY());
    
    if (currentTable == selectedCell->GetTableNumber() && currentX == selectedCell->GetX() && currentY == selectedCell->GetY())
    {
        MessageBox::Show("click 1");
        CppCLRWinFormsProject::Form1::ClearDisplayedMoves();
        currentTable = -1;
        currentX = -1;
        currentY = -1;
    }
    else if (currentTable == -1 && currentX == -1 && currentY == -1 && currentClickedPiece != NULL && currentClickedPiece->getColor() == GameState::currentColor)
    {
        MessageBox::Show("click 2");
        currentTable = selectedCell->GetTableNumber();
        currentX = selectedCell->GetX();
        currentY = selectedCell->GetY();

        list<tableRelated::Move>* possibleMoves = gameLogic->GetMoves(this->tableNumber, this->x, this->y);
        if (possibleMoves != NULL)
        {
            CppCLRWinFormsProject::Form1::DisplayPossibleMoves(possibleMoves);
        }
        delete possibleMoves;
    }
    else if (currentClickedPiece != NULL)
    {
        MessageBox::Show("click 3");
        Piece* currentSelectedPiece = gameLogic->GetPiece(currentTable, currentX, currentY);
        if (currentSelectedPiece->getColor() == currentClickedPiece->getColor())
        {
            MessageBox::Show("click 4");
            CppCLRWinFormsProject::Form1::ClearDisplayedMoves();
            currentTable = selectedCell->GetTableNumber();
            currentX = selectedCell->GetX();
            currentY = selectedCell->GetY();

            list<tableRelated::Move>* possibleMoves = gameLogic->GetMoves(this->tableNumber, this->x, this->y);
            if (possibleMoves != NULL)
            {
                CppCLRWinFormsProject::Form1::DisplayPossibleMoves(possibleMoves);
            }
            delete possibleMoves;
        }
        else
        {
            MessageBox::Show("click 5");
            // validate move
            // eat it
        }
    }
    else
    {
        MessageBox::Show("click 6");
        // validate move
        // move piece
    }
}