#pragma once
#include <iostream>
#include "Controller.h"
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
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    protected:
    private:

    Controller^ myController;
    private: System::Windows::Forms::TableLayoutPanel^ l2;
    private: System::Windows::Forms::TableLayoutPanel^ l3;
    private: System::Windows::Forms::TableLayoutPanel^ l1;

           /*
    private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label78;
    private: System::Windows::Forms::Label^ label77;
    private: System::Windows::Forms::Label^ label76;
    private: System::Windows::Forms::Label^ label75;
    private: System::Windows::Forms::Label^ label74;
    private: System::Windows::Forms::Label^ label73;
    private: System::Windows::Forms::Label^ label72;
    private: System::Windows::Forms::Label^ label71;
    private: System::Windows::Forms::Label^ label70;
    private: System::Windows::Forms::Label^ label69;
    private: System::Windows::Forms::Label^ label68;
    private: System::Windows::Forms::Label^ label67;
    private: System::Windows::Forms::Label^ label66;
    private: System::Windows::Forms::Label^ label65;
    private: System::Windows::Forms::Label^ label64;
    private: System::Windows::Forms::Label^ label63;
    private: System::Windows::Forms::Label^ label62;
    private: System::Windows::Forms::Label^ label60;
    private: System::Windows::Forms::Label^ label59;
    private: System::Windows::Forms::Label^ label58;
    private: System::Windows::Forms::Label^ label57;
    private: System::Windows::Forms::Label^ label56;
    private: System::Windows::Forms::Label^ label55;
    private: System::Windows::Forms::Label^ label54;
    private: System::Windows::Forms::Label^ label53;
    private: System::Windows::Forms::Label^ label52;
    private: System::Windows::Forms::Label^ label51;
    private: System::Windows::Forms::Label^ label50;
    private: System::Windows::Forms::Label^ label49;
    private: System::Windows::Forms::Label^ label48;
    private: System::Windows::Forms::Label^ label47;
    private: System::Windows::Forms::Label^ label46;
    private: System::Windows::Forms::Label^ label45;
    private: System::Windows::Forms::Label^ label44;
    private: System::Windows::Forms::Label^ label43;
    private: System::Windows::Forms::Label^ label42;
    private: System::Windows::Forms::Label^ label41;
    private: System::Windows::Forms::Label^ label40;
    private: System::Windows::Forms::Label^ label39;
    private: System::Windows::Forms::Label^ label38;
    private: System::Windows::Forms::Label^ label37;
    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label96;
    private: System::Windows::Forms::Label^ label95;
    private: System::Windows::Forms::Label^ label94;
    private: System::Windows::Forms::Label^ label93;
    private: System::Windows::Forms::Label^ label92;
    private: System::Windows::Forms::Label^ label91;
    private: System::Windows::Forms::Label^ label90;
    private: System::Windows::Forms::Label^ label89;
    private: System::Windows::Forms::Label^ label88;
    private: System::Windows::Forms::Label^ label87;
    private: System::Windows::Forms::Label^ label86;
    private: System::Windows::Forms::Label^ label85;
    private: System::Windows::Forms::Label^ label84;
    private: System::Windows::Forms::Label^ label83;
    private: System::Windows::Forms::Label^ label82;
    private: System::Windows::Forms::Label^ label81;
    private: System::Windows::Forms::Label^ label80;
    private: System::Windows::Forms::Label^ label79;
    private: System::Windows::Forms::Label^ label61;
*/
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
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::ScrollBar;
            this->tableLayoutPanel1->ColumnCount = 12;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333332F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333332F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333332F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333332F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333332F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333332F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333332F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333332F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333332F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333332F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333332F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8.333332F)));
            this->tableLayoutPanel1->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
            this->tableLayoutPanel1->Location = System::Drawing::Point(86, 83);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 8;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(554, 324);
            this->tableLayoutPanel1->TabIndex = 0;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
            this->ClientSize = System::Drawing::Size(734, 562);
            this->Controls->Add(this->tableLayoutPanel1);
            this->ForeColor = System::Drawing::Color::Transparent;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
            this->Name = L"Form1";
            this->Text = L"Dragon Chess";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
        this->SuspendLayout();
        this->myController = (gcnew Controller());
        this->ResumeLayout();

	}
	private: System::Void tableLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
    private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
};
}
