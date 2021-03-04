#pragma once

namespace OfficeMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Staff
	/// </summary>
	public ref class Staff : public System::Windows::Forms::Form
	{
	public:
		Staff(void)
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
		~Staff()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;




	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TabPage^  tabPage2;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::LinkLabel^  linkLabel3;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape1;
	private: System::Windows::Forms::LinkLabel^  linkLabel4;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;


































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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Staff::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
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
			this->label3->TabIndex = 55;
			this->label3->Text = L"Office Management System";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(544, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(288, 30);
			this->label1->TabIndex = 57;
			this->label1->Text = L"Staff Management";
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabControl1->HotTrack = true;
			this->tabControl1->ItemSize = System::Drawing::Size(165, 40);
			this->tabControl1->Location = System::Drawing::Point(1, 138);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1366, 768);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 58;
			this->tabControl1->Click += gcnew System::EventHandler(this, &Staff::Staff_Load);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 44);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1358, 720);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"View All Records";
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
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
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
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->Padding = System::Windows::Forms::Padding(6);
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::DarkGray;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
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
			this->dataGridView1->Size = System::Drawing::Size(1362, 522);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Staff::dataGridView1_CellContentClick);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::LightGray;
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage2->Controls->Add(this->comboBox2);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->textBox17);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->textBox16);
			this->tabPage2->Controls->Add(this->textBox15);
			this->tabPage2->Controls->Add(this->textBox14);
			this->tabPage2->Controls->Add(this->textBox13);
			this->tabPage2->Controls->Add(this->textBox12);
			this->tabPage2->Controls->Add(this->textBox11);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->linkLabel4);
			this->tabPage2->Controls->Add(this->linkLabel2);
			this->tabPage2->Controls->Add(this->linkLabel1);
			this->tabPage2->Controls->Add(this->linkLabel3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->shapeContainer1);
			this->tabPage2->Location = System::Drawing::Point(4, 44);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1358, 720);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Particular Record";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Male", L"Female"});
			this->comboBox2->Location = System::Drawing::Point(498, 277);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(205, 27);
			this->comboBox2->TabIndex = 86;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Admin", L"Accountant", L"Inventory Clerk", L"Receptionist"});
			this->comboBox1->Location = System::Drawing::Point(498, 81);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(205, 27);
			this->comboBox1->TabIndex = 85;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(186, 271);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 31);
			this->button2->TabIndex = 84;
			this->button2->Text = L"Fetch";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Staff::button2_Click);
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(62, 273);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(101, 27);
			this->textBox17->TabIndex = 83;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(8, 271);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(48, 25);
			this->label21->TabIndex = 82;
			this->label21->Text = L"ID :";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(8, 223);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(187, 25);
			this->label20->TabIndex = 81;
			this->label20->Text = L"Enter ID to Search";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(791, 422);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(114, 25);
			this->label19->TabIndex = 80;
			this->label19->Text = L"Password :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(791, 370);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(120, 25);
			this->label18->TabIndex = 79;
			this->label18->Text = L"Username :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(791, 324);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(104, 25);
			this->label17->TabIndex = 78;
			this->label17->Text = L"Email Id :";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(791, 273);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(83, 25);
			this->label16->TabIndex = 68;
			this->label16->Text = L"Salary :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(791, 227);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(132, 25);
			this->label15->TabIndex = 77;
			this->label15->Text = L"Attendence :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(791, 178);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(142, 25);
			this->label14->TabIndex = 76;
			this->label14->Text = L"Qualification :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(791, 129);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(142, 25);
			this->label13->TabIndex = 68;
			this->label13->Text = L"Office Hours :";
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(976, 424);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(205, 27);
			this->textBox16->TabIndex = 75;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(976, 374);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(205, 27);
			this->textBox15->TabIndex = 74;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(976, 326);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(205, 27);
			this->textBox14->TabIndex = 73;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(976, 273);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(205, 27);
			this->textBox13->TabIndex = 72;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(976, 225);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(205, 27);
			this->textBox12->TabIndex = 71;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(976, 180);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(205, 27);
			this->textBox11->TabIndex = 70;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(976, 131);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(205, 27);
			this->textBox10->TabIndex = 62;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1218, 422);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 32);
			this->button1->TabIndex = 69;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Staff::button1_Click_1);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(325, 28);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(151, 24);
			this->label12->TabIndex = 68;
			this->label12->Text = L"Add Record";
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(976, 85);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(205, 27);
			this->textBox9->TabIndex = 61;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(791, 81);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(100, 25);
			this->label11->TabIndex = 67;
			this->label11->Text = L"Address :";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(498, 424);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(205, 27);
			this->textBox8->TabIndex = 60;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(498, 372);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(205, 27);
			this->textBox7->TabIndex = 60;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(498, 326);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(205, 27);
			this->textBox6->TabIndex = 60;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(498, 229);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(205, 27);
			this->textBox4->TabIndex = 60;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(498, 180);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(205, 27);
			this->textBox3->TabIndex = 60;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(498, 131);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(205, 27);
			this->textBox2->TabIndex = 59;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(324, 372);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(146, 25);
			this->label9->TabIndex = 59;
			this->label9->Text = L"Date of Birth :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(324, 426);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 25);
			this->label10->TabIndex = 60;
			this->label10->Text = L"Age :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(324, 324);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 25);
			this->label8->TabIndex = 59;
			this->label8->Text = L"Phone :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(324, 275);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 25);
			this->label7->TabIndex = 66;
			this->label7->Text = L"Gender :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(324, 227);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 25);
			this->label6->TabIndex = 59;
			this->label6->Text = L"Last Name :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(324, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 25);
			this->label4->TabIndex = 59;
			this->label4->Text = L"ID :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(324, 178);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 25);
			this->label5->TabIndex = 60;
			this->label5->Text = L"First Name :";
			// 
			// linkLabel4
			// 
			this->linkLabel4->ActiveLinkColor = System::Drawing::Color::DarkRed;
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel4->LinkColor = System::Drawing::Color::Black;
			this->linkLabel4->Location = System::Drawing::Point(8, 149);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(149, 25);
			this->linkLabel4->TabIndex = 65;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Delete Record";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Staff::linkLabel4_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->ActiveLinkColor = System::Drawing::Color::DarkRed;
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel2->LinkColor = System::Drawing::Color::Black;
			this->linkLabel2->Location = System::Drawing::Point(7, 105);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(155, 25);
			this->linkLabel2->TabIndex = 64;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Search Record";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Staff::linkLabel2_LinkClicked);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::DarkRed;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(7, 62);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(156, 25);
			this->linkLabel1->TabIndex = 63;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Update Record";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Staff::linkLabel1_LinkClicked);
			// 
			// linkLabel3
			// 
			this->linkLabel3->ActiveLinkColor = System::Drawing::Color::DarkRed;
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel3->LinkColor = System::Drawing::Color::Black;
			this->linkLabel3->Location = System::Drawing::Point(7, 16);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(125, 25);
			this->linkLabel3->TabIndex = 61;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"Add Record";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Staff::linkLabel3_LinkClicked);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(324, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Designation :";
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(3, 3);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->rectangleShape1});
			this->shapeContainer1->Size = System::Drawing::Size(1352, 714);
			this->shapeContainer1->TabIndex = 62;
			this->shapeContainer1->TabStop = false;
			// 
			// rectangleShape1
			// 
			this->rectangleShape1->Location = System::Drawing::Point(287, 11);
			this->rectangleShape1->Name = L"rectangleShape1";
			this->rectangleShape1->Size = System::Drawing::Size(1040, 465);
			this->rectangleShape1->Click += gcnew System::EventHandler(this, &Staff::rectangleShape1_Click);
			// 
			// Staff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1356, 735);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Staff";
			this->ShowInTaskbar = false;
			this->Text = L"Staff";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Staff::Staff_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
void Disable()
{
	comboBox1->Enabled=false;
	textBox3->Enabled=false;
	textBox2->Enabled=false;
	textBox3->Enabled=false;
	textBox4->Enabled=false;
	comboBox2->Enabled=false;
	textBox6->Enabled=false;
	textBox7->Enabled=false;
	textBox8->Enabled=false;
	textBox9->Enabled=false;
	textBox10->Enabled=false;
	textBox11->Enabled=false;
	textBox12->Enabled=false;
	textBox13->Enabled=false;
	textBox14->Enabled=false;
	textBox15->Enabled=false;
	textBox16->Enabled=false;
}
void Enable()
{
	comboBox1->Enabled=true;
	textBox2->Enabled=true;
	textBox3->Enabled=true;
	textBox4->Enabled=true;
	comboBox2->Enabled=true;
	textBox6->Enabled=true;
	textBox7->Enabled=true;
	textBox8->Enabled=true;
	textBox9->Enabled=true;
	textBox10->Enabled=true;
	textBox11->Enabled=true;
	textBox12->Enabled=true;
	textBox13->Enabled=true;
	textBox14->Enabled=true;
	textBox15->Enabled=true;
	textBox16->Enabled=true;
}
void Reset()
{
	comboBox1->Text="\0";
	textBox2->Text="\0";
	textBox3->Text="\0";
	textBox4->Text="\0";
	comboBox2->Text="\0";
	textBox6->Text="\0";
	textBox7->Text="\0";
	textBox8->Text="\0";
	textBox9->Text="\0";
	textBox10->Text="\0";
	textBox11->Text="\0";
	textBox12->Text="\0";
	textBox13->Text="\0";
	textBox14->Text="\0";
	textBox15->Text="\0";
	textBox16->Text="\0";
	textBox17->Text="\0";
}

private: System::Void Staff_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			String^ constring="server=localhost;user id=root;database=oms_database";
			MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlDataAdapter^ sda= gcnew MySqlDataAdapter("SELECT * FROM `staff` where 1;",conDataBase);
			DataTable^ dt=gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource =dt;	
			dataGridView1->DataSource=bindingSource1;
			button1->Show();
			label12->Text="Add Record";
			button1->Text="Add";
			label20->Hide();
			label21->Hide();
			textBox17->Hide();
			button2->Hide();
			Enable();
			Reset();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		 }

private: System::Void lineShape1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) 
		 {			 
			 Reset();
			 label12->Text="Update Record";
			 button1->Show();
			 button1->Text="Update";
			 label20->Show();
			 label21->Show();
			 textBox17->Show();
			 button2->Show();
			 Enable();
		 }
private: System::Void linkLabel3_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) 
		 {
			 Reset();
			 label12->Text="Add Record";
			 button1->Show();
			 button1->Text="Add";
			 label20->Hide();
			 label21->Hide();
			 textBox17->Hide();
			 button2->Hide();
			 Enable();
		 }
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) 
		 {
			 Reset();
			 label12->Text="Search Record";
			 button1->Hide();
			 label20->Show();
			 label21->Show();
			 textBox17->Show();
			 button2->Show();
			 Disable();
		 }

private: System::Void linkLabel4_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) 
		 {
			 Reset();
			 label12->Text="Delete Record";
			 button1->Show();
			 button1->Text="Delete";
			 label20->Show();
			 label21->Show();
			 textBox17->Show();
			 button2->Show();
			 Disable();
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(comboBox1->Text=="\0"||textBox2->Text=="\0"||textBox3->Text=="\0"||textBox4->Text=="\0"||comboBox2->Text=="\0"|| textBox6->Text=="\0"||textBox7->Text=="\0"|| textBox8->Text=="\0"||textBox9->Text=="\0"||textBox10->Text=="\0"||textBox11->Text=="\0"||textBox12->Text=="\0"||textBox13->Text=="\0"||textBox14->Text=="\0"||textBox15->Text=="\0"||textBox16->Text=="\0")
			{
				MessageBox::Show("One or more text field(s) is empty","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
				this->AcceptButton = button1;		
			}
			else if(comboBox1->Text==""||textBox2->Text==""||textBox3->Text==""||textBox4->Text==""||comboBox2->Text==""|| textBox6->Text==""||textBox7->Text==""|| textBox8->Text==""||textBox9->Text==""||textBox10->Text==""||textBox11->Text==""||textBox12->Text==""||textBox13->Text==""||textBox14->Text==""||textBox15->Text==""||textBox16->Text=="")
			{
				MessageBox::Show("One or more text field(s) is empty","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
				this->AcceptButton = button1;			
			}
			else if(comboBox1->Text!="\0"&&textBox2->Text!="\0"&&textBox3->Text!="\0"&&textBox4->Text!="\0"&&comboBox2->Text!="\0"&& textBox6->Text!="\0"&&textBox7->Text!="\0"&& textBox8->Text!="\0"&&textBox9->Text!="\0"&&textBox10->Text!="\0"&&textBox11->Text!="\0"&&textBox12->Text!="\0"&&textBox13->Text!="\0"&&textBox14->Text!="\0"&&textBox15->Text!="\0"&&textBox16->Text!="\0")
			{
					if(button1->Text=="Add")
					{
						try
						{
							String^ constring="server=localhost;user id=root;database=oms_database";
							MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
		    
							String^ Designation =(comboBox1->Text);
							String^ ID = (textBox2->Text);
							String^ FirstName = (textBox3->Text);
							String^ LastName = (textBox4->Text);
							String^ Gender = (comboBox2->Text);
							String^ Phone = (textBox6->Text);
							String^ DateOfBirth = (textBox7->Text);
							String^ Age = (textBox8->Text);
							String^ Address = (textBox9->Text);
							String^ OfficeHours = (textBox10->Text);
							String^ Qualification =(textBox11->Text);
							String^ Attendance = (textBox12->Text);
							String^ Salary = (textBox13->Text);
							String^ EmailId = (textBox14->Text);
							String^ UserName = (textBox15->Text);
							String^ Password = (textBox16->Text);
		
							MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO `staff` (`Designation`,`ID`,`First Name`,`Last Name`,`Gender`,`Phone`,`Date Of Birth`,`Age`, `Address`,`Office Hours`,`Qualification`, `Attendance`,`Salary`,`Email Id`,`Username`,`Password`) VALUES ('"+Designation+"','"+ID+"', '"+FirstName+"','"+LastName+"','"+Gender+"','"+Phone+"','"+DateOfBirth+"','"+Age+"','"+Address+"','"+OfficeHours+"','"+Qualification+"','"+Attendance+"','"+Salary+"','"+EmailId+"', '"+UserName+"','"+Password+"');",conDataBase);
							MySqlDataReader^ Reader;
							conDataBase->Open();
							Reader=cmdDataBase->ExecuteReader();
							MessageBox::Show("Record Saved Successfully","Succeeded", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
							Reset();
							textBox17->Focus();
							this->AcceptButton = button1;
							conDataBase->Close();
						}
						catch (Exception ^ex)
						{
							MessageBox::Show("Connection with Database Failed","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
							Reset(); 
							textBox17->Focus();
							this->AcceptButton = button1;
						}
					}
					else if(button1->Text=="Update")
					{
						String^ Id = textBox17->Text;
						if(textBox17->Text=="\0"||textBox17->Text=="")
						{
							MessageBox::Show("Invalid ID is given","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
							Reset();
							textBox17->Focus();					
							this->AcceptButton = button1;
						}
						else if(textBox17->Text!="\0"&&textBox17->Text!="")
						{
							try
							{
								String^ constring="server=localhost;user id=root;database=oms_database";
								MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
								
								String^ Designation =(comboBox1->Text);
								String^ ID = (textBox2->Text);
								String^ FirstName = (textBox3->Text);
								String^ LastName = (textBox4->Text);
								String^ Gender = (comboBox2->Text);
								String^ Phone = (textBox6->Text);
								String^ DateOfBirth = (textBox7->Text);
								String^ Age = (textBox8->Text);
								String^ Address = (textBox9->Text);
								String^ OfficeHours = (textBox10->Text);
								String^ Qualification =(textBox11->Text);
								String^ Attendance = (textBox12->Text);
								String^ Salary = (textBox13->Text);
								String^ EmailId = (textBox14->Text);
								String^ UserName = (textBox15->Text);
								String^ Password = (textBox16->Text);
		
								MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UPDATE `staff` SET `ID` = '"+ID+"',`Designation`= '"+Designation+"',`First Name`= '"+FirstName+"', `Last Name`= '"+LastName+"', `Gender`= '"+Gender+"',`Date Of Birth`= '"+DateOfBirth+"', `Age`= '"+Age+"', `Qualification`= '"+Qualification+"', `Phone`= '"+Phone+"', `Address`= '"+Address+"', `Office Hours`= '"+OfficeHours+"', `Attendance`= '"+Attendance+"', `Salary`= '"+Salary+"', `Email Id`= '"+EmailId+"', `Username`= '"+UserName+"',`Password`= '"+Password+"' where ID = '"+Id+"' ;",conDataBase);
								conDataBase->Open();
								MySqlDataReader^ Reader;
								Reader=cmdDataBase->ExecuteReader();
								MessageBox::Show("Record Updated Successfully","Succeeded", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
								Reset();		
								textBox17->Focus();					
								this->AcceptButton = button1;
								conDataBase->Close();
							}
							catch (Exception ^ex)
							{
								MessageBox::Show("Connection with Database Failed","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
								Reset();
								textBox17->Focus();					
								this->AcceptButton = button1;
							}
						}
					}
					else if(button1->Text=="Delete")
					{
						String^ ID = textBox17->Text;
						if(textBox17->Text=="\0"||textBox17->Text=="")
						{
							MessageBox::Show("Invalid ID is given","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
							Reset();
							textBox17->Focus();					
							this->AcceptButton = button1;
						}
						else if(textBox17->Text!="\0"&&textBox17->Text!="")
						{
							try
							{
							String^ constring="server=localhost;user id=root;database=oms_database";
							MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
							MySqlCommand^ cmdDataBase = gcnew MySqlCommand("DELETE from `staff` where ID = '"+ID+"' ;",conDataBase); 
							conDataBase->Open();
							MySqlDataReader^ Reader;
							Reader=cmdDataBase->ExecuteReader();
							MessageBox::Show("Record Deleted Successfully","Succeeded", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
							Reset();
							textBox17->Focus();					
							this->AcceptButton = button1;

							conDataBase->Close();
							}
							catch (Exception ^ex)
							{
								MessageBox::Show("Connection with Database Failed","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
								Reset();
								textBox17->Focus();					
								this->AcceptButton = button1;
							}
						}	
					}

			}
		}

		 
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			String^ ID = textBox17->Text;
			if(textBox17->Text=="\0"||textBox17->Text=="")
			{
				MessageBox::Show("Invalid ID is given","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
				Reset();
				textBox17->Focus();					
				this->AcceptButton = button1;
			}
			else if(textBox17->Text!="\0"&&textBox17->Text!="")
			{
				try
				{
					String^ constring="server=localhost;user id=root;database=oms_database";
					MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT* from `staff` where ID = '"+ID+"' ;",conDataBase);
					conDataBase->Open();
					MySqlDataReader^ Reader;
					Reader=cmdDataBase->ExecuteReader();
				
					while(Reader->Read())
					{
						comboBox1->Text = Reader->GetString(0);
					 	textBox2->Text = Reader->GetString(1);
						textBox3->Text = Reader->GetString(2);
						textBox4->Text = Reader->GetString(3);
						comboBox2->Text = Reader->GetString(4);
						textBox6->Text = Reader->GetString(5);
						textBox7->Text = Reader->GetString(6);
						textBox8->Text = Reader->GetString(7);
						textBox9->Text = Reader->GetString(8);
						textBox10->Text = Reader->GetString(9);
						textBox11->Text = Reader->GetString(10);
						textBox12->Text = Reader->GetString(11);
						textBox13->Text = Reader->GetString(12);
						textBox14->Text = Reader->GetString(13);
						textBox15->Text = Reader->GetString(14);
						textBox16->Text = Reader->GetString(15);
						//textBox17->Text = Reader->GetString(16);
					}
					textBox17->Focus();					
					this->AcceptButton = button1;
					conDataBase->Close();
				}
				catch (Exception ^ex)
				{
					MessageBox::Show("Connection with Database Failed","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
					Reset();
					textBox17->Focus();					
					this->AcceptButton = button1;
				}
			}
		 }

private: System::Void rectangleShape1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
};

}

