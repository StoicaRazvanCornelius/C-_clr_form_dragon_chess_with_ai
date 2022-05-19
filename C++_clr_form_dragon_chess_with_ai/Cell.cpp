#include "pch.h"
#include "Cell.h"

Cell::Cell(char value)
{
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

