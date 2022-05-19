#pragma once
#include <iostream>
#include "Controller.h"
#include "GameSetup.h";

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form 
	{
	public:
		Form1()
		{
            InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

    protected:
    private:

    Controller^ myController;
    private: System::Windows::Forms::TableLayoutPanel^ airTablePanel;
    private: System::Windows::Forms::TableLayoutPanel^ earthTablePanel;
    private: System::Windows::Forms::TableLayoutPanel^ undergroundTablePanel;
    private: array<TableLayoutPanel^>^ tables = gcnew array<TableLayoutPanel^>(3);
    private: int currentTable = 1;
    private: System::Windows::Forms::Button^ upButton;
    private: System::Windows::Forms::Panel^ controlPanel;
    private: System::Windows::Forms::Button^ downButton;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->airTablePanel = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->earthTablePanel = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->undergroundTablePanel = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->upButton = (gcnew System::Windows::Forms::Button());
            this->controlPanel = (gcnew System::Windows::Forms::Panel());
            this->downButton = (gcnew System::Windows::Forms::Button());
            this->controlPanel->SuspendLayout();
            this->SuspendLayout();
            // 
            // airTablePanel
            // 
            this->airTablePanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->airTablePanel->AutoSize = true;
            this->airTablePanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->airTablePanel->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->airTablePanel->ColumnCount = 12;
            this->airTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->airTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->airTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->airTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->airTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->airTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->airTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->airTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->airTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->airTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->airTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->airTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->airTablePanel->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
            this->airTablePanel->Location = System::Drawing::Point(9, 10);
            this->airTablePanel->Margin = System::Windows::Forms::Padding(0);
            this->airTablePanel->MaximumSize = System::Drawing::Size(1680, 1120);
            this->airTablePanel->MinimumSize = System::Drawing::Size(600, 400);
            this->airTablePanel->Name = L"airTablePanel";
            this->airTablePanel->RowCount = 8;
            this->airTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->airTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->airTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->airTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->airTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->airTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->airTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->airTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->airTablePanel->Size = System::Drawing::Size(600, 400);
            this->airTablePanel->TabIndex = 0;
            this->airTablePanel->Visible = false;
            this->airTablePanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::airTablePanel_Paint);
            // 
            // earthTablePanel
            // 
            this->earthTablePanel->AutoSize = true;
            this->earthTablePanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->earthTablePanel->ColumnCount = 12;
            this->earthTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->earthTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->earthTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->earthTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->earthTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->earthTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->earthTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->earthTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->earthTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->earthTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->earthTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->earthTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->earthTablePanel->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
            this->earthTablePanel->Location = System::Drawing::Point(9, 10);
            this->earthTablePanel->Margin = System::Windows::Forms::Padding(2);
            this->earthTablePanel->MaximumSize = System::Drawing::Size(1260, 910);
            this->earthTablePanel->MinimumSize = System::Drawing::Size(450, 325);
            this->earthTablePanel->Name = L"earthTablePanel";
            this->earthTablePanel->RowCount = 8;
            this->earthTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->earthTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->earthTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->earthTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->earthTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->earthTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->earthTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->earthTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->earthTablePanel->Size = System::Drawing::Size(450, 325);
            this->earthTablePanel->TabIndex = 0;
            // 
            // undergroundTablePanel
            // 
            this->undergroundTablePanel->AutoSize = true;
            this->undergroundTablePanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->undergroundTablePanel->ColumnCount = 12;
            this->undergroundTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->undergroundTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->undergroundTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->undergroundTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->undergroundTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->undergroundTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->undergroundTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->undergroundTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->undergroundTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->undergroundTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->undergroundTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->undergroundTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333335F)));
            this->undergroundTablePanel->ForeColor = System::Drawing::Color::Linen;
            this->undergroundTablePanel->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
            this->undergroundTablePanel->Location = System::Drawing::Point(9, 10);
            this->undergroundTablePanel->Margin = System::Windows::Forms::Padding(2);
            this->undergroundTablePanel->MaximumSize = System::Drawing::Size(1260, 910);
            this->undergroundTablePanel->MinimumSize = System::Drawing::Size(450, 325);
            this->undergroundTablePanel->Name = L"undergroundTablePanel";
            this->undergroundTablePanel->RowCount = 8;
            this->undergroundTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->undergroundTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->undergroundTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->undergroundTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->undergroundTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->undergroundTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->undergroundTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->undergroundTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->undergroundTablePanel->Size = System::Drawing::Size(450, 325);
            this->undergroundTablePanel->TabIndex = 0;
            this->undergroundTablePanel->Visible = false;
            // 
            // upButton
            // 
            this->upButton->ForeColor = System::Drawing::Color::Black;
            this->upButton->Location = System::Drawing::Point(58, 23);
            this->upButton->Margin = System::Windows::Forms::Padding(2);
            this->upButton->Name = L"upButton";
            this->upButton->Size = System::Drawing::Size(29, 24);
            this->upButton->TabIndex = 1;
            this->upButton->Text = L"/\\";
            this->upButton->UseVisualStyleBackColor = true;
            this->upButton->Click += gcnew System::EventHandler(this, &Form1::upButton_Click);
            // 
            // controlPanel
            // 
            this->controlPanel->Controls->Add(this->downButton);
            this->controlPanel->Controls->Add(this->upButton);
            this->controlPanel->Location = System::Drawing::Point(9, 482);
            this->controlPanel->Margin = System::Windows::Forms::Padding(2);
            this->controlPanel->Name = L"controlPanel";
            this->controlPanel->Size = System::Drawing::Size(89, 71);
            this->controlPanel->TabIndex = 3;
            // 
            // downButton
            // 
            this->downButton->ForeColor = System::Drawing::Color::Black;
            this->downButton->Location = System::Drawing::Point(2, 23);
            this->downButton->Margin = System::Windows::Forms::Padding(2);
            this->downButton->Name = L"downButton";
            this->downButton->Size = System::Drawing::Size(29, 24);
            this->downButton->TabIndex = 2;
            this->downButton->Text = L"\\/";
            this->downButton->UseVisualStyleBackColor = true;
            this->downButton->Click += gcnew System::EventHandler(this, &Form1::downButton_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
            this->ClientSize = System::Drawing::Size(734, 562);
            this->Controls->Add(this->controlPanel);
            this->Controls->Add(this->airTablePanel);
            this->Controls->Add(this->earthTablePanel);
            this->Controls->Add(this->undergroundTablePanel);
            this->ForeColor = System::Drawing::Color::Transparent;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
            this->Name = L"Form1";
            this->Text = L"Dragon Chess";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->controlPanel->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
    private: void DrawCells(TableLayoutPanel^ table, Color white, Color black, char initPosition[8][12])
    {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 12; j++) {
                Label^ tmp = gcnew Label();
                tmp->Text = initPosition[i][j].ToString();
                tmp->AutoSize = true;
                tmp->Anchor = static_cast<AnchorStyles>((((AnchorStyles::Top | AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | AnchorStyles::Right));
                tmp->Margin = System::Windows::Forms::Padding(0);
                tmp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
                tmp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                    static_cast<System::Byte>(0)));
                tmp->Click += gcnew System::EventHandler(this, &Form1::tableBlock_Clicked);
                if ((i + j) % 2 == 0) tmp->BackColor = white;
                else tmp->BackColor = black;
                tmp->ForeColor = System::Drawing::Color::White;
                table->Controls->Add(tmp);
                
            }
        }
    }
#pragma endregion
    private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
        this->myController = (gcnew Controller());
        DrawCells(airTablePanel, Color::FromArgb(236, 236, 236), Color::FromArgb(98, 178, 255), GameSetup::initAirTableSetup);
        DrawCells(earthTablePanel, Color::FromArgb(205, 163, 91), Color::FromArgb(0, 143, 0), GameSetup::initEarthTableSetup);
        DrawCells(undergroundTablePanel, Color::FromArgb(220, 28, 11), Color::FromArgb(129, 62, 0), GameSetup::initUndergroundTableSetup);

        tables[0] = airTablePanel;
        tables[1] = earthTablePanel;
        tables[2] = undergroundTablePanel;

        tables[currentTable]->Visible = true;
    }
    private: System::Void upButton_Click(System::Object^ sender, System::EventArgs^ e) {
        tables[currentTable]->Visible = false;
        currentTable--;
        if (currentTable < 0) currentTable = 2;
        tables[currentTable]->Visible = true;
    }
    private: System::Void downButton_Click(System::Object^ sender, System::EventArgs^ e) {
        tables[currentTable]->Visible = false;
        currentTable = (currentTable + 1) % 3;
        tables[currentTable]->Visible = true;
    }
    private: System::Void tableBlock_Clicked(System::Object^ sender, System::EventArgs^ e) {
        this->BackColor = System::Drawing::Color::Black;
    }
    private: System::Void airTablePanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
};
}
