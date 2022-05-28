#pragma once
#include <iostream>
#include "GameSetup.h"
#include "GameTableView.h"
#include "GameLogic.h"

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
		Form1(void)
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
     
    private: GameTableView^ airTablePanel;
    private: GameTableView^ earthTablePanel;
    private: GameTableView^ undergroundTablePanel;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
	System::ComponentModel::Container^ components;
	public: static cli::array<GameTableView^>^ tables = gcnew cli::array<GameTableView^>(3);
    private: int currentTable = 1;
    private: System::Windows::Forms::Button^ upButton;
    private: System::Windows::Forms::Panel^ controlPanel;
    private: System::Windows::Forms::Button^ downButton;
	private: System::Windows::Forms::TableLayoutPanel^ gameGrid;
	private:
		void InitializeComponent(){
			this->upButton = (gcnew System::Windows::Forms::Button());
			this->controlPanel = (gcnew System::Windows::Forms::Panel());
			this->downButton = (gcnew System::Windows::Forms::Button());
			this->gameGrid = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->controlPanel->SuspendLayout();
			this->gameGrid->SuspendLayout();
			this->SuspendLayout();
			// 
			// upButton
			// 
			this->upButton->BackColor = System::Drawing::SystemColors::Desktop;
			this->upButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->upButton->FlatAppearance->BorderSize = 0;
			this->upButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->upButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->upButton->ForeColor = System::Drawing::Color::White;
			this->upButton->Location = System::Drawing::Point(83, 2);
			this->upButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->upButton->Name = L"upButton";
			this->upButton->Size = System::Drawing::Size(29, 32);
			this->upButton->TabIndex = 1;
			this->upButton->Text = L"/\\";
			this->upButton->UseVisualStyleBackColor = false;
			this->upButton->Click += gcnew System::EventHandler(this, &Form1::upButton_Click);
			// 
			// controlPanel
			// 
			this->controlPanel->Controls->Add(this->downButton);
			this->controlPanel->Controls->Add(this->upButton);
			this->controlPanel->Location = System::Drawing::Point(809, 2);
			this->controlPanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->controlPanel->Name = L"controlPanel";
			this->controlPanel->Size = System::Drawing::Size(115, 37);
			this->controlPanel->TabIndex = 3;
			// 
			// downButton
			// 
			this->downButton->BackColor = System::Drawing::SystemColors::Desktop;
			this->downButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->downButton->FlatAppearance->BorderSize = 0;
			this->downButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->downButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->downButton->ForeColor = System::Drawing::Color::White;
			this->downButton->Location = System::Drawing::Point(48, 2);
			this->downButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->downButton->Name = L"downButton";
			this->downButton->Size = System::Drawing::Size(31, 32);
			this->downButton->TabIndex = 2;
			this->downButton->Text = L"\\/";
			this->downButton->UseVisualStyleBackColor = false;
			this->downButton->Click += gcnew System::EventHandler(this, &Form1::downButton_Click);
			// 
			// gameGrid
			// 
			this->gameGrid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gameGrid->ColumnCount = 2;
			this->gameGrid->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 87.18488F)));
			this->gameGrid->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.81513F)));
			this->gameGrid->Controls->Add(this->controlPanel, 1, 0);
			this->gameGrid->Location = System::Drawing::Point(11, 10);
			this->gameGrid->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gameGrid->Name = L"gameGrid";
			this->gameGrid->RowCount = 1;
			this->gameGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->gameGrid->Size = System::Drawing::Size(926, 543);
			this->gameGrid->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(948, 562);
			this->Controls->Add(this->gameGrid);
			this->ForeColor = System::Drawing::Color::Transparent;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->MinimumSize = System::Drawing::Size(964, 592);
			this->Name = L"Form1";
			this->Text = L"Dragon Chess";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->controlPanel->ResumeLayout(false);
			this->gameGrid->ResumeLayout(false);
			this->ResumeLayout(false);

		}

private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		airTablePanel = gcnew GameTableView(Color::FromArgb(236, 236, 236), Color::FromArgb(98, 178, 255), GameSetup::initAirTableSetup, 0);
		earthTablePanel = gcnew GameTableView(Color::FromArgb(205, 163, 91), Color::FromArgb(0, 143, 0), GameSetup::initEarthTableSetup, 1);
		undergroundTablePanel = gcnew GameTableView(Color::FromArgb(220, 28, 11), Color::FromArgb(129, 62, 0), GameSetup::initUndergroundTableSetup, 2);

		gameGrid->Controls->Add(airTablePanel);
		gameGrid->Controls->Add(earthTablePanel);
		gameGrid->Controls->Add(undergroundTablePanel);
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

	public: static Void DisplayPossibleMoves(std::list<tableRelated::Move>* possibleMoves)
	{
		for (auto it = possibleMoves->begin(); it != possibleMoves->end(); it++) {
			((Cell^)tables[it->table - 1]->GetControlFromPosition(it->x, it->y))->BackColor = Drawing::Color::Red;
		}
	}
	public: static Void ClearDisplayedMoves()
	{

	}
};
}
