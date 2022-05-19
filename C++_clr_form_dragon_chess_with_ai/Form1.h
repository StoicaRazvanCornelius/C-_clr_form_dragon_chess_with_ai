#pragma once
#include <iostream>
#include "GameSetup.h";
#include "GameTableView.h";
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
     
	//private:Controller^ myController;
    private: GameTableView^ airTablePanel;
    private: GameTableView^ earthTablePanel;
    private: GameTableView^ undergroundTablePanel;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
	System::ComponentModel::Container^ components;
    private: array<TableLayoutPanel^>^ tables = gcnew array<TableLayoutPanel^>(3);
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
			this->upButton->Location = System::Drawing::Point(111, 3);
			this->upButton->Name = L"upButton";
			this->upButton->Size = System::Drawing::Size(39, 39);
			this->upButton->TabIndex = 1;
			this->upButton->Text = L"/\\";
			this->upButton->UseVisualStyleBackColor = false;
			this->upButton->Click += gcnew System::EventHandler(this, &Form1::upButton_Click);
			// 
			// controlPanel
			// 
			this->controlPanel->Controls->Add(this->downButton);
			this->controlPanel->Controls->Add(this->upButton);
			this->controlPanel->Location = System::Drawing::Point(1079, 3);
			this->controlPanel->Name = L"controlPanel";
			this->controlPanel->Size = System::Drawing::Size(153, 45);
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
			this->downButton->Location = System::Drawing::Point(64, 3);
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
			this->gameGrid->Name = L"gameGrid";
			this->gameGrid->RowCount = 1;
			this->gameGrid->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->gameGrid->Size = System::Drawing::Size(1235, 668);
			this->gameGrid->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1262, 692);
			this->Controls->Add(this->gameGrid);
			this->ForeColor = System::Drawing::Color::Transparent;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"Form1";
			this->Text = L"Dragon Chess";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->controlPanel->ResumeLayout(false);
			this->gameGrid->ResumeLayout(false);
			this->ResumeLayout(false);

		}

private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		//this->myController = (gcnew Controller());
		airTablePanel = gcnew GameTableView(Color::FromArgb(236, 236, 236), Color::FromArgb(98, 178, 255), GameSetup::initAirTableSetup);
        earthTablePanel = gcnew GameTableView(Color::FromArgb(205, 163, 91), Color::FromArgb(0, 143, 0), GameSetup::initEarthTableSetup);
        undergroundTablePanel = gcnew GameTableView(Color::FromArgb(220, 28, 11), Color::FromArgb(129, 62, 0), GameSetup::initUndergroundTableSetup);
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
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {	}
	private: System::Void tableLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
    private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
};
}
