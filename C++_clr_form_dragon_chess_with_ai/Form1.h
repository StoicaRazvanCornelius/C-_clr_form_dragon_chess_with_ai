#pragma once
#include <iostream>
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
    private: 

    private: System::Windows::Forms::TableLayoutPanel^ l2;
    private: System::Windows::Forms::TableLayoutPanel^ l3;
    private: System::Windows::Forms::TableLayoutPanel^ l1;





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
            this->l1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->l2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->l3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->SuspendLayout();
            // 
            // l1
            // 
            this->l1->AutoSize = true;
            this->l1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->l1->BackColor = System::Drawing::Color::Crimson;
            this->l1->ColumnCount = 12;
            this->l1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l1->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
            this->l1->Location = System::Drawing::Point(12, 12);
            this->l1->MaximumSize = System::Drawing::Size(1680, 1120);
            this->l1->MinimumSize = System::Drawing::Size(600, 400);
            this->l1->Name = L"l1";
            this->l1->RowCount = 8;
            this->l1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l1->Size = System::Drawing::Size(600, 400);
            this->l1->TabIndex = 0;
            this->l1->Visible = false;
            // 
            // l2
            // 
            this->l2->AutoSize = true;
            this->l2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->l2->BackColor = System::Drawing::Color::Crimson;
            this->l2->ColumnCount = 12;
            this->l2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l2->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
            this->l2->Location = System::Drawing::Point(12, 12);
            this->l2->MaximumSize = System::Drawing::Size(1680, 1120);
            this->l2->MinimumSize = System::Drawing::Size(600, 400);
            this->l2->Name = L"l2";
            this->l2->RowCount = 8;
            this->l2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l2->Size = System::Drawing::Size(600, 400);
            this->l2->TabIndex = 0;
            this->l2->Visible = false;
            // 
            // l3
            // 
            this->l3->AutoSize = true;
            this->l3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->l3->BackColor = System::Drawing::Color::Aquamarine;
            this->l3->ColumnCount = 12;
            this->l3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 8.333335F)));
            this->l3->ForeColor = System::Drawing::Color::Linen;
            this->l3->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
            this->l3->Location = System::Drawing::Point(12, 12);
            this->l3->MaximumSize = System::Drawing::Size(1680, 1120);
            this->l3->MinimumSize = System::Drawing::Size(600, 400);
            this->l3->Name = L"l3";
            this->l3->RowCount = 8;
            this->l3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->l3->Size = System::Drawing::Size(600, 400);
            this->l3->TabIndex = 0;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
            this->ClientSize = System::Drawing::Size(734, 562);
            this->Controls->Add(this->l1);
            this->ForeColor = System::Drawing::Color::Transparent;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
            this->Margin = System::Windows::Forms::Padding(4);
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
                    if ((i + j) % 2 == 0) tmp->BackColor = white;
                    else tmp->BackColor = black;
                    tmp->ForeColor = System::Drawing::Color::White;
                    table->Controls->Add(tmp);
                }
            }
        }
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
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
};
}
