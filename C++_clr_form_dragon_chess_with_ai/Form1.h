#pragma once
#include <iostream>
#include "GameState.h"
#include "GameTableView.h"
#include "GameLogic.h"
#include "Constants.h"
#include "GameSetup.h"

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
		static Form1^ form1;
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Form1::form1 = this;
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
	public: static cli::array<GameTableView^>^ tables = gcnew cli::array<GameTableView^>(4);
    private: int currentTable = 2;
    private: System::Windows::Forms::Button^ upButton;
    private: System::Windows::Forms::Panel^ controlPanel;
    private: System::Windows::Forms::Button^ downButton;
	private: System::Windows::Forms::Panel^ AISettings;
	private: System::Windows::Forms::CheckBox^ enableAICheckbox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TrackBar^ AIDifficulty;
	private: System::Windows::Forms::TableLayoutPanel^ gameGrid;
	private:
		void InitializeComponent(){
			this->upButton = (gcnew System::Windows::Forms::Button());
			this->controlPanel = (gcnew System::Windows::Forms::Panel());
			this->AISettings = (gcnew System::Windows::Forms::Panel());
			this->enableAICheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->downButton = (gcnew System::Windows::Forms::Button());
			this->gameGrid = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->AIDifficulty = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->controlPanel->SuspendLayout();
			this->AISettings->SuspendLayout();
			this->gameGrid->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AIDifficulty))->BeginInit();
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
			this->upButton->Location = System::Drawing::Point(111, 2);
			this->upButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->upButton->Name = L"upButton";
			this->upButton->Size = System::Drawing::Size(39, 39);
			this->upButton->TabIndex = 1;
			this->upButton->Text = L"/\\";
			this->upButton->UseVisualStyleBackColor = false;
			this->upButton->Click += gcnew System::EventHandler(this, &Form1::upButton_Click);
			// 
			// controlPanel
			// 
			this->controlPanel->Controls->Add(this->AISettings);
			this->controlPanel->Controls->Add(this->downButton);
			this->controlPanel->Controls->Add(this->upButton);
			this->controlPanel->Location = System::Drawing::Point(1079, 2);
			this->controlPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->controlPanel->Name = L"controlPanel";
			this->controlPanel->Size = System::Drawing::Size(153, 549);
			this->controlPanel->TabIndex = 3;
			// 
			// AISettings
			// 
			this->AISettings->Controls->Add(this->label1);
			this->AISettings->Controls->Add(this->AIDifficulty);
			this->AISettings->Controls->Add(this->enableAICheckbox);
			this->AISettings->Location = System::Drawing::Point(0, 56);
			this->AISettings->Name = L"AISettings";
			this->AISettings->Size = System::Drawing::Size(150, 333);
			this->AISettings->TabIndex = 3;
			// 
			// enableAICheckbox
			// 
			this->enableAICheckbox->AutoSize = true;
			this->enableAICheckbox->Location = System::Drawing::Point(10, 21);
			this->enableAICheckbox->Name = L"enableAICheckbox";
			this->enableAICheckbox->Size = System::Drawing::Size(87, 20);
			this->enableAICheckbox->TabIndex = 0;
			this->enableAICheckbox->Text = L"Enable AI";
			this->enableAICheckbox->UseVisualStyleBackColor = true;
			this->enableAICheckbox->CheckedChanged += gcnew System::EventHandler(this, &Form1::enableAICheckbox_CheckedChanged);
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
			this->downButton->Location = System::Drawing::Point(64, 2);
			this->downButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->downButton->Name = L"downButton";
			this->downButton->Size = System::Drawing::Size(41, 39);
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
			this->gameGrid->Location = System::Drawing::Point(15, 12);
			this->gameGrid->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gameGrid->Name = L"gameGrid";
			this->gameGrid->RowCount = 1;
			this->gameGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->gameGrid->Size = System::Drawing::Size(1235, 668);
			this->gameGrid->TabIndex = 4;
			// 
			// AIDifficulty
			// 
			this->AIDifficulty->LargeChange = 1;
			this->AIDifficulty->Location = System::Drawing::Point(0, 100);
			this->AIDifficulty->Maximum = 4;
			this->AIDifficulty->Minimum = 1;
			this->AIDifficulty->Name = L"AIDifficulty";
			this->AIDifficulty->Size = System::Drawing::Size(147, 56);
			this->AIDifficulty->TabIndex = 1;
			this->AIDifficulty->Value = 2;
			this->AIDifficulty->ValueChanged += gcnew System::EventHandler(this, &Form1::AIDifficulty_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"AI Difficulty";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1264, 692);
			this->Controls->Add(this->gameGrid);
			this->ForeColor = System::Drawing::Color::Transparent;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(1279, 718);
			this->Name = L"Form1";
			this->Text = L"Dragon Chess";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->controlPanel->ResumeLayout(false);
			this->AISettings->ResumeLayout(false);
			this->AISettings->PerformLayout();
			this->gameGrid->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AIDifficulty))->EndInit();
			this->ResumeLayout(false);

		}

private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		airTablePanel = gcnew GameTableView(Constants::airTableWhite, Constants::airTableBlack, GameState::airTable, 1);
		earthTablePanel = gcnew GameTableView(Constants::earthTableWhite, Constants::earthTableBlack, GameState::earthTable, 2);
		undergroundTablePanel = gcnew GameTableView(Constants::undergroundTableWhite, Constants::undergroundTableBlack, GameState::undergroundTable, 3);

		gameGrid->Controls->Add(airTablePanel);
		gameGrid->Controls->Add(earthTablePanel);
		gameGrid->Controls->Add(undergroundTablePanel);
        tables[1] = airTablePanel;
		tables[2] = earthTablePanel;
        tables[3] = undergroundTablePanel;
		tables[currentTable]->Visible = true;
	}

    private: System::Void upButton_Click(System::Object^ sender, System::EventArgs^ e) {
        tables[currentTable]->Visible = false;
        currentTable--;
        if (currentTable < 1) currentTable = 3;
        tables[currentTable]->Visible = true;
    }
	private: System::Void downButton_Click(System::Object^ sender, System::EventArgs^ e) {
		tables[currentTable]->Visible = false;
		currentTable = (currentTable) % 3 + 1;
		tables[currentTable]->Visible = true;
	}

	public: static Void DisplayPossibleMoves(std::list<tableRelated::Move>* possibleMoves)
	{
		// Turquise - move
		// Orange - capture
		// Grey - current
		for (auto it = possibleMoves->begin(); it != possibleMoves->end(); it++) {
			// MessageBox::Show(it->table + " column: " + it->x + " row: " + it->y);
			((Cell^)tables[it->table]->GetControlFromPosition(it->x, it->y))->BackColor = Drawing::Color::Yellow;
		}
	}
	public: static Void ClearDisplayedMoves()
	{
		tables[1]->ClearCells(Constants::airTableWhite, Constants::airTableBlack);
		tables[2]->ClearCells(Constants::earthTableWhite, Constants::earthTableBlack);
		tables[3]->ClearCells(Constants::undergroundTableWhite, Constants::undergroundTableBlack);
	}
	public: static void MakeMove(int tableOrigin, int xOrigin, int yOrigin, int tableTarget, int xTarget, int yTarget, moveType type, bool isNextTurn)
	{
		Cell^ originCell, ^ targetCell;
		switch (type)
		{
		case capture || moveType::move:
			originCell = ((Cell^)tables[tableOrigin]->GetControlFromPosition(xOrigin, yOrigin));
			targetCell = ((Cell^)tables[tableTarget]->GetControlFromPosition(xTarget, yTarget));
			targetCell->Text = originCell->Text;
			targetCell->ForeColor = originCell->ForeColor;
			originCell->Text = "";
			break;
		case capture_afar:
			((Cell^)tables[tableTarget]->GetControlFromPosition(xTarget, yTarget))->Text = "";
			break;
		case freezing:
			((Cell^)tables[tableTarget]->GetControlFromPosition(xTarget, yTarget))->Text = "";
			break;
		default:
			originCell = ((Cell^)tables[tableOrigin]->GetControlFromPosition(xOrigin, yOrigin));
			targetCell = ((Cell^)tables[tableTarget]->GetControlFromPosition(xTarget, yTarget));
			targetCell->Text = originCell->Text;
			targetCell->ForeColor = originCell->ForeColor;
			originCell->Text = "";
			break;
		}
		
		Form1::ClearDisplayedMoves();
		Form1::form1->Refresh();

		GameLogic gameLogic;
		gameLogic.MakeMove(tableOrigin, xOrigin, yOrigin, tableTarget, xTarget, yTarget, type, isNextTurn);
	}
private: System::Void enableAICheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	GameSetup::isAIEnabled = this->enableAICheckbox->Checked;
	GameState::isAITurn = false; // the next move is for AI
}
	   
private: System::Void AIDifficulty_ValueChanged(System::Object^ sender, System::EventArgs^ e) 
{
	GameSetup::depth = this->AIDifficulty->Value;
}
};
}
