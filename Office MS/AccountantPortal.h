#pragma once
#include "ScheduleForm.h"
namespace OfficeMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for AccountantPortal
	/// </summary>
	public ref class AccountantPortal : public System::Windows::Forms::Form
	{
	public:
		AccountantPortal(void)
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
		~AccountantPortal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;





	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape1;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: System::Windows::Forms::LinkLabel^  linkLabel3;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label12;

	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AccountantPortal::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->rectangleShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(420, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(547, 54);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Office Management System";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(581, 157);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(246, 268);
			this->pictureBox1->TabIndex = 40;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(666, 446);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 31);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Sign Out";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AccountantPortal::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(552, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(304, 30);
			this->label2->TabIndex = 59;
			this->label2->Text = L"Accountant Portal";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(12, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(232, 30);
			this->label4->TabIndex = 61;
			this->label4->Text = L"All Accounts :";
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->NullValue = nullptr;
			dataGridViewCellStyle1->Padding = System::Windows::Forms::Padding(6);
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightGray;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->Padding = System::Windows::Forms::Padding(6);
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::DarkGray;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->Padding = System::Windows::Forms::Padding(6);
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::DarkGray;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->Location = System::Drawing::Point(17, 157);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->Padding = System::Windows::Forms::Padding(6);
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::DarkGray;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->Padding = System::Windows::Forms::Padding(6);
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dataGridView1->RowTemplate->DefaultCellStyle->Padding = System::Windows::Forms::Padding(6);
			this->dataGridView1->RowTemplate->DividerHeight = 2;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(497, 539);
			this->dataGridView1->TabIndex = 62;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AccountantPortal::dataGridView1_CellContentClick);
			// 
			// rectangleShape1
			// 
			this->rectangleShape1->Location = System::Drawing::Point(962, 190);
			this->rectangleShape1->Name = L"rectangleShape1";
			this->rectangleShape1->Size = System::Drawing::Size(377, 372);
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->rectangleShape1});
			this->shapeContainer1->Size = System::Drawing::Size(1356, 735);
			this->shapeContainer1->TabIndex = 63;
			this->shapeContainer1->TabStop = false;
			// 
			// linkLabel3
			// 
			this->linkLabel3->ActiveLinkColor = System::Drawing::Color::DarkRed;
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel3->LinkColor = System::Drawing::Color::Black;
			this->linkLabel3->Location = System::Drawing::Point(957, 150);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(50, 25);
			this->linkLabel3->TabIndex = 64;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"Add";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AccountantPortal::linkLabel3_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->ActiveLinkColor = System::Drawing::Color::DarkRed;
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel2->LinkColor = System::Drawing::Color::Black;
			this->linkLabel2->Location = System::Drawing::Point(1121, 150);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(80, 25);
			this->linkLabel2->TabIndex = 74;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Search";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AccountantPortal::linkLabel2_LinkClicked);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::DarkRed;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(1025, 150);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(81, 25);
			this->linkLabel1->TabIndex = 73;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Update";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AccountantPortal::linkLabel1_LinkClicked);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(1120, 386);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(205, 27);
			this->textBox3->TabIndex = 87;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(1120, 337);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(205, 27);
			this->textBox2->TabIndex = 86;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(1120, 294);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(205, 27);
			this->textBox1->TabIndex = 85;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(1120, 250);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(205, 27);
			this->textBox6->TabIndex = 84;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1238, 520);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 32);
			this->button2->TabIndex = 83;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AccountantPortal::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(974, 384);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(112, 25);
			this->label9->TabIndex = 82;
			this->label9->Text = L"Expenses :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(974, 335);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 25);
			this->label8->TabIndex = 81;
			this->label8->Text = L"Budget :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(974, 250);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 25);
			this->label7->TabIndex = 80;
			this->label7->Text = L"Year :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(974, 294);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 25);
			this->label6->TabIndex = 79;
			this->label6->Text = L"Month :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(974, 204);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(221, 30);
			this->label5->TabIndex = 78;
			this->label5->Text = L"Add Account :";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(1120, 432);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(205, 27);
			this->textBox4->TabIndex = 88;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(1120, 476);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(205, 27);
			this->textBox5->TabIndex = 89;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(974, 430);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 25);
			this->label1->TabIndex = 90;
			this->label1->Text = L"Profit :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(974, 478);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 25);
			this->label10->TabIndex = 91;
			this->label10->Text = L"Loss :";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1238, 653);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 31);
			this->button3->TabIndex = 92;
			this->button3->Text = L"Fetch";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AccountantPortal::button3_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(957, 577);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(314, 25);
			this->label20->TabIndex = 93;
			this->label20->Text = L"Enter Year and Month to Search";
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(1050, 613);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(145, 27);
			this->textBox17->TabIndex = 94;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(957, 611);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(68, 25);
			this->label21->TabIndex = 95;
			this->label21->Text = L"Year :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(957, 653);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(84, 25);
			this->label11->TabIndex = 96;
			this->label11->Text = L"Month :";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(1050, 653);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(145, 27);
			this->textBox7->TabIndex = 97;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(629, 496);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(153, 30);
			this->label12->TabIndex = 98;
			this->label12->Text = L"Schedule";
			this->label12->Click += gcnew System::EventHandler(this, &AccountantPortal::label12_Click);
			// 
			// AccountantPortal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1356, 735);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->linkLabel3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->shapeContainer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"AccountantPortal";
			this->ShowInTaskbar = false;
			this->Text = L"Accountant Portal";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &AccountantPortal::AccountantPortal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
void Reset()
{
	textBox6->Text="\0";
	textBox1->Text="\0";
	textBox2->Text="\0";
	textBox3->Text="\0";
	textBox4->Text="\0";
	textBox5->Text="\0";
	textBox7->Text="\0";
	textBox17->Text="\0";
}
void Disable()
{
	textBox6->Enabled=false;
	textBox1->Enabled=false;
	textBox2->Enabled=false;
	textBox3->Enabled=false;
	textBox4->Enabled=false;
	textBox5->Enabled=false;
}
void Enable()
{
	textBox6->Enabled=true;
	textBox1->Enabled=true;
	textBox2->Enabled=true;
	textBox3->Enabled=true; 
	textBox4->Enabled=true;
	textBox5->Enabled=true; 
}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 this->Hide();
			 }
private: System::Void AccountantPortal_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
				String^ constring="server=localhost;user id=root;database=oms_database";
				MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				MySqlDataAdapter^ sda= gcnew MySqlDataAdapter("SELECT * FROM `accounts` where 1;",conDataBase);
				DataTable^ dt=gcnew DataTable();
				sda->Fill(dt);
				bindingSource1->DataSource =dt;	
				dataGridView1->DataSource=bindingSource1;
				Reset();
				label5->Text="Add Record";
				button2->Show();
				button2->Text="Add";
				label20->Hide();
				label21->Hide();
				textBox17->Hide();
				label11->Hide();
				textBox7->Hide();
				button3->Hide();
				Enable();
		 }
private: System::Void linkLabel3_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) 
		 {
			 Reset();
			 label5->Text="Add Record";
			 button2->Show();
			 button2->Text="Add";
			 label20->Hide();
			 label21->Hide();
			 textBox17->Hide();
			 label11->Hide();
			 textBox7->Hide();
			 button3->Hide();
			 Enable();
		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) 
		 {
			 Reset();
			 label5->Text="Update Record";
			 button2->Show();
			 button2->Text="Update";
			 label20->Show();
			 label21->Show();
			 textBox17->Show();
			 label11->Show();
			 textBox7->Show();
			 button3->Show();
			 Enable();
			 Reset();
		 }
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) 
		 {
			 Reset();
			 label5->Text="Search Record";
			 button2->Hide();
			 label20->Show();
			 label21->Show();
			 textBox17->Show();
			 label11->Show();
			 textBox7->Show();
			 button3->Show();
			 Disable();
			 Reset();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(textBox6->Text=="\0"||textBox1->Text=="\0"||textBox2->Text=="\0"||textBox3->Text=="\0")
			{
				MessageBox::Show("One or more text field(s) is empty","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
				this->AcceptButton = button2;		
			}
			else if(textBox6->Text==""||textBox1->Text==""||textBox2->Text==""||textBox3->Text=="")
			{
				MessageBox::Show("One or more text field(s) is empty","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
				this->AcceptButton = button2;			
			}
			else if(textBox6->Text!="\0"&&textBox1->Text!="\0"&&textBox2->Text!="\0"&& textBox3->Text!="\0")
			{
				if(button2->Text=="Add")
					{
						try
						{
							String^ constring="server=localhost;user id=root;database=oms_database";
							MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
		    
							String^ Year = (textBox6->Text);
							String^ Month = (textBox1->Text);
							int Budget = Int32::Parse(textBox2->Text);
							int Expenses = Int32::Parse(textBox3->Text);
							int Profit = Budget-Expenses;//200-300//-100
							int Loss;

							if(Profit<0) 
							{
								Profit=-1*Profit;
								textBox5->Text = Profit.ToString();
								textBox4->Text = Convert::ToString(0);
								Loss=Profit;
								Profit=0;
							}
							else
							{
								textBox4->Text = Profit.ToString() ;
								textBox5->Text = Convert::ToString(0);
								Loss=0;
							}


							MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO `accounts` (`Year`, `Month`, `Budget`, `Expenses`, `Profit`, `Loss`) VALUES ('"+Year+"','"+Month+"', '"+Budget+"','"+Expenses+"','"+Profit+"','"+Loss+"');",conDataBase);
							MySqlDataReader^ Reader;
							conDataBase->Open();
							Reader=cmdDataBase->ExecuteReader();
							MessageBox::Show("Record Saved Successfully","Succeeded", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
							Reset();

							String^ constring1="server=localhost;user id=root;database=oms_database";
							MySqlConnection^ conDataBase1=gcnew MySqlConnection(constring1);
							MySqlDataAdapter^ sda1= gcnew MySqlDataAdapter("SELECT * FROM `accounts` where 1;",conDataBase1);
							DataTable^ dt=gcnew DataTable();
							sda1->Fill(dt);
							bindingSource1->DataSource =dt;	
							dataGridView1->DataSource=bindingSource1;

							textBox6->Focus();
							this->AcceptButton = button2;
							conDataBase->Close();
						}
						catch (Exception ^ex)
						{
							MessageBox::Show("Connection with Database Failed","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
							Reset(); 
							textBox6->Focus();
							this->AcceptButton = button2;
						}
					}
				else if(button2->Text=="Update")
					{
						String^ Year = textBox17->Text;
						if(textBox17->Text=="\0"||textBox17->Text=="")
						{
							MessageBox::Show("Invalid Year is given","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
							Reset();
							textBox17->Focus();					
							this->AcceptButton = button2;
						}
						else if(textBox17->Text!="\0"&&textBox17->Text!="")
						{
							try
							{
								String^ constring="server=localhost;user id=root;database=oms_database";
								MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
								
								String^ Year = (textBox6->Text);
								String^ Month = (textBox1->Text);
								int Budget = Int32::Parse(textBox2->Text);
								int Expenses = Int32::Parse(textBox3->Text);
								int Profit = Budget-Expenses;//200-300//-100
								int Loss;

								if(Profit<0) 
								{
									Profit=-1*Profit;
									textBox5->Text = Profit.ToString();
									textBox4->Text = Convert::ToString(0);
									Loss=Profit;
									Profit=0;
								}
								else
								{
									textBox4->Text = Profit.ToString() ;
									textBox5->Text = Convert::ToString(0);
									Loss=0;
								}
		
								MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UPDATE `accounts` SET `Year`='"+Year+"',`Month`='"+Month+"',`Budget`='"+Budget+"',`Expenses`='"+Expenses+"',`Profit`='"+Profit+"',`Loss`='"+Loss+"' where `Year` = '"+Year+"' ;",conDataBase);
								conDataBase->Open();
								MySqlDataReader^ Reader;
								Reader=cmdDataBase->ExecuteReader();
								MessageBox::Show("Record Updated Successfully","Succeeded", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
								Reset();

								String^ constring1="server=localhost;user id=root;database=oms_database";
								MySqlConnection^ conDataBase1=gcnew MySqlConnection(constring1);
								MySqlDataAdapter^ sda1= gcnew MySqlDataAdapter("SELECT * FROM `accounts` where 1;",conDataBase1);
								DataTable^ dt=gcnew DataTable();
								sda1->Fill(dt);
								bindingSource1->DataSource =dt;	
								dataGridView1->DataSource=bindingSource1;
								
								textBox17->Focus();					
								this->AcceptButton = button2;
								conDataBase->Close();

							}
							catch (Exception ^ex)
							{
								MessageBox::Show("Connection with Database Failed","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
								Reset();
								textBox17->Focus();					
								this->AcceptButton = button2;
							}
						}
					}
			}
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			String^ Year = textBox17->Text;
			String^ Month = textBox7->Text;
			if(textBox17->Text=="\0"||textBox17->Text==""||textBox7->Text=="\0"||textBox7->Text=="")
			{
				MessageBox::Show("Invalid Year is given","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
				Reset();
				textBox17->Focus();					
				this->AcceptButton = button2;
			}
			else if(textBox17->Text!="\0"&&textBox17->Text!=""&&textBox7->Text!="\0"||textBox7->Text!="")
			{
				try
				{
					String^ constring="server=localhost;user id=root;database=oms_database";
					MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT* from `accounts` where `Year` = '"+Year+"'and `Month` = '"+Month+"' ;",conDataBase);
					conDataBase->Open();
					MySqlDataReader^ Reader;
					Reader=cmdDataBase->ExecuteReader();
				
					while(Reader->Read())
					{
					 	textBox6->Text = Reader->GetString(0);
						textBox1->Text = Reader->GetString(1);
						textBox2->Text = Reader->GetString(2);
						textBox3->Text = Reader->GetString(3);
						textBox4->Text = Reader->GetString(4);
						textBox5->Text = Reader->GetString(5);
					}
					textBox17->Focus();					
					this->AcceptButton = button3;
					conDataBase->Close();
				}
				catch (Exception ^ex)
				{
					MessageBox::Show("Connection with Database Failed","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
					Reset();
					textBox17->Focus();					
					this->AcceptButton = button3;
				}
			}


		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			ScheduleForm^ F6= gcnew ScheduleForm();
			F6->ShowDialog();
		 }
};
}
