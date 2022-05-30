#include "pch.h"
#include "GameTableView.h"
#include "Form1.h"

GameTableView::GameTableView(Color white, Color black, char initPosition[8][12], int tableNumber)
{
    this->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->AutoSize = true;
    this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->BackColor = System::Drawing::SystemColors::ActiveCaption;
    this->ColumnCount = 12;
    this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        8.333335F)));
    this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        8.333335F)));
    this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        8.333335F)));
    this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        8.333335F)));
    this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        8.333335F)));
    this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        8.333335F)));
    this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        8.333335F)));
    this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        8.333335F)));
    this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        8.333335F)));
    this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        8.333335F)));
    this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        8.333335F)));
    this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        8.333335F)));
    this->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
    this->Location = System::Drawing::Point(12, 12);
    this->Margin = System::Windows::Forms::Padding(0);
    this->MaximumSize = System::Drawing::Size(2240, 1378);
    this->MinimumSize = System::Drawing::Size(800, 492);
    this->RowCount = 8;
    this->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
    this->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
    this->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
    this->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
    this->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
    this->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
    this->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
    this->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
    this->Size = System::Drawing::Size(800, 492);
    this->TabIndex = 0;
    this->Visible = false;

    DisplayCells(white, black, initPosition, tableNumber);
}

void GameTableView::ClearCells(Color white, Color black)
{
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 12; j++) {
            Cell ^ tmp = ((Cell^)this->GetControlFromPosition(j, i));
            if ((i + j) % 2 == 0) tmp->SetBackgroundColor(white);
            else tmp->SetBackgroundColor(black);
        }
    }
}

void GameTableView::DisplayCells(Color white, Color black, char initPosition[8][12], int tableNumber)
{
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 12; j++) {
            Cell^ tmp = gcnew Cell(j, i, tableNumber, initPosition[i][j]);
            if ((i + j) % 2 == 0) tmp->SetBackgroundColor(white);
            else tmp->SetBackgroundColor(black);
            tmp->SetForegroundColor(Color::White);
            this->Controls->Add(tmp);
        }
    }
}
