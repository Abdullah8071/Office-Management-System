#pragma once
#include <list>

namespace OfficeMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;
	/// <summary>
	/// Summary for Bill
	/// </summary>
	public ref class Bill : public System::Windows::Forms::Form
	{
	public:
		Bill(void)
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
		~Bill()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;

	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button5;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Bill::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
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
			this->label3->TabIndex = 32;
			this->label3->Text = L"Office Management System";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(723, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 30);
			this->label2->TabIndex = 60;
			this->label2->Text = L"Bill";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(12, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(197, 30);
			this->label1->TabIndex = 61;
			this->label1->Text = L"Create Bill :";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(236, 417);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(102, 27);
			this->textBox2->TabIndex = 62;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 370);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 25);
			this->label4->TabIndex = 63;
			this->label4->Text = L"Product ID :";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(354, 419);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 27);
			this->button2->TabIndex = 85;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Bill::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(236, 368);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(102, 27);
			this->textBox1->TabIndex = 86;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Bill::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 417);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(184, 25);
			this->label5->TabIndex = 87;
			this->label5->Text = L"Product Quantity :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 224);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(176, 25);
			this->label6->TabIndex = 88;
			this->label6->Text = L"Customer Name :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 271);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(167, 25);
			this->label7->TabIndex = 89;
			this->label7->Text = L"Customer Type :";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(236, 226);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(205, 27);
			this->textBox3->TabIndex = 90;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(236, 324);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(205, 20);
			this->dateTimePicker1->TabIndex = 92;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Bill::dateTimePicker1_ValueChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 319);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(69, 25);
			this->label8->TabIndex = 94;
			this->label8->Text = L"Date :";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1079, 446);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 27);
			this->button1->TabIndex = 96;
			this->button1->Text = L"Generate Bill";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Bill::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1219, 446);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(77, 27);
			this->button3->TabIndex = 97;
			this->button3->Text = L"Reset";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Bill::button3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(723, 446);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 22);
			this->label9->TabIndex = 98;
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
			this->dataGridView1->Location = System::Drawing::Point(728, 185);
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
			this->dataGridView1->Size = System::Drawing::Size(568, 228);
			this->dataGridView1->TabIndex = 99;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(461, 419);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 27);
			this->button4->TabIndex = 100;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Bill::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(12, 185);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(115, 25);
			this->label10->TabIndex = 101;
			this->label10->Text = L"Dealer ID :";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(236, 183);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(205, 27);
			this->textBox4->TabIndex = 102;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(236, 269);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(205, 27);
			this->textBox5->TabIndex = 103;
			this->textBox5->Text = L"End User";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(474, 182);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(87, 27);
			this->button5->TabIndex = 104;
			this->button5->Text = L"Check";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Bill::button5_Click);
			// 
			// Bill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1350, 729);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Bill";
			this->ShowInTaskbar = false;
			this->Text = L"Bill";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Bill::Bill_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
int static cost;
void Reset()
{
	textBox1->Text="\0";
	textBox2->Text="\0";
	textBox3->Text="\0";
	textBox5->Text="End User";
	textBox4->Text="\0";
	label9->Text="\0";
	cost=0;
}

private: System::Void Bill_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				String^ constring="server=localhost;user id=root;database=oms_database";
				MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				MySqlDataAdapter^ sda= gcnew MySqlDataAdapter("DELETE from `bills` where 1;",conDataBase);
				DataTable^ dt=gcnew DataTable();
				sda->Fill(dt);
				bindingSource1->DataSource =dt;	
				dataGridView1->DataSource=bindingSource1;				 
				 
				 
				textBox4->Focus();
				this->AcceptButton = button5;
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			String^ ID = textBox1->Text;
			if(textBox1->Text=="\0"||textBox1->Text==""||textBox2->Text=="\0"||textBox2->Text=="")
			{
				MessageBox::Show("Invalid ID is given","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
				textBox1->Focus();					
				this->AcceptButton = button2;
			}
			else if(textBox1->Text!="\0"&&textBox1->Text!=""&&textBox2->Text!="\0"&&textBox2->Text!="")
			{
				try
				{
					String^ constring="server=localhost;user id=root;database=oms_database";
					MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT* from `products` where `Product ID` = '"+ID+"' ;",conDataBase);
					conDataBase->Open();
					MySqlDataReader^ Reader;
					Reader=cmdDataBase->ExecuteReader();

					String^ PName;
					int Qty=Int32::Parse(textBox2->Text);
					String^ Quantity;
					Quantity=textBox2->Text;
					String^ Price;
					while(Reader->Read())
					{
					 	PName = Reader->GetString(1);
						Price = Reader->GetString(2);
					}
					int cost1=Int32::Parse(Price);
					cost1=cost1*Qty;
					cost=cost+cost1;
					Price=cost1.ToString();
					
					String^ constring1="server=localhost;user id=root;database=oms_database";
					MySqlConnection^ conDataBase1=gcnew MySqlConnection(constring1);
					MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("INSERT INTO `bills` (`Product ID`, `Product Name`, `Product Price`, `Quantity`) VALUES ('"+ID+"','"+PName+"', '"+Price+"','"+Quantity+"');",conDataBase1);
					MySqlDataReader^ Reader1;
					conDataBase1->Open();
					Reader1=cmdDataBase1->ExecuteReader();
					
					
					String^ constring2="server=localhost;user id=root;database=oms_database";
					MySqlConnection^ conDataBase2=gcnew MySqlConnection(constring2);
					MySqlDataAdapter^ sda2= gcnew MySqlDataAdapter("SELECT * FROM `bills`;",conDataBase2);
					DataTable^ dt=gcnew DataTable();
					sda2->Fill(dt);
					bindingSource1->DataSource =dt;	
					dataGridView1->DataSource=bindingSource1;	
					textBox1->Text="\0";
					textBox2->Text="\0";
					
					textBox1->Focus();					
					this->AcceptButton = button2;
					
					conDataBase->Close();
					conDataBase1->Close();
				}
				catch (Exception ^ex)
				{
					MessageBox::Show("Connection with Database Failed","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
					Reset();
					textBox1->Focus();					
					this->AcceptButton = button2;
				}
			}
			
		 }
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			String^ P1=dataGridView1->Rows[0]->Cells["Product ID"]->FormattedValue->ToString();
			P1=P1+"\t\t\t"+dataGridView1->Rows[0]->Cells["Product Name"]->FormattedValue->ToString();
			P1=P1+"\t\t\t"+dataGridView1->Rows[0]->Cells["Product Price"]->FormattedValue->ToString();
			P1=P1+"\t\t\t"+dataGridView1->Rows[0]->Cells["Quantity"]->FormattedValue->ToString();

			String^ P2="\0";
			String^ P3="\0";
			P2=dataGridView1->Rows[1]->Cells["Product ID"]->FormattedValue->ToString();
			P2=P2+"\t\t\t"+dataGridView1->Rows[1]->Cells["Product Name"]->FormattedValue->ToString();
			P2=P2+"\t\t\t"+dataGridView1->Rows[1]->Cells["Product Price"]->FormattedValue->ToString();
			P2=P2+"\t\t\t"+dataGridView1->Rows[1]->Cells["Quantity"]->FormattedValue->ToString();

			P3=dataGridView1->Rows[2]->Cells["Product ID"]->FormattedValue->ToString();
			P3=P3+"\t\t\t"+dataGridView1->Rows[2]->Cells["Product Name"]->FormattedValue->ToString();
			P3=P3+"\t\t\t"+dataGridView1->Rows[2]->Cells["Product Price"]->FormattedValue->ToString();
			P3=P3+"\t\t\t"+dataGridView1->Rows[2]->Cells["Quantity"]->FormattedValue->ToString();

			if(textBox5->Text=="Dealer")
			{
				int dis=cost*0.10;
				int disCost=cost;
				disCost=disCost-dis;
				label9->Text="Total Cost : "+cost.ToString()+" PKR"+"\nAfter 10% Discount:\n"+disCost.ToString()+" PKR";;
			}
			else
			{
				label9->Text="Total Cost : "+cost.ToString()+" PKR";
			}
			MessageBox::Show("Bill Generated","Succeeded", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
			StreamWriter^ outFile= gcnew StreamWriter(""+this->textBox3->Text+".doc");
			outFile->Write("*** OFFICE MANAGEMENT SYSTEM ***");
			outFile->Write("\r\n");
			outFile->Write("\r\n");
			outFile->Write("BILL");
			outFile->Write("\r\n");
			outFile->Write("\r\n");
			outFile->Write("Dated : ");
			outFile->Write(this->dateTimePicker1->Text);
			outFile->Write("\r\n");
			outFile->Write("\r\n");
			if(textBox5->Text=="Dealer")
			{
				outFile->Write("Dealer ID : ");
				outFile->Write(this->textBox4->Text);
			}
			outFile->Write("\r\n");
			outFile->Write("\r\n");
			outFile->Write("Customer Name : ");
			outFile->Write(this->textBox3->Text);
			outFile->Write("\r\n");
			outFile->Write("\r\n");	
			outFile->Write("Product Code\t\tProduct Name\t\tPrice\t\tQuantity");
			outFile->Write("\r\n");
			outFile->Write("\r\n");	
			outFile->Write(P1);
			outFile->Write("\r\n");
			outFile->Write("\r\n");	
			outFile->Write(P2);
			outFile->Write("\r\n");
			outFile->Write("\r\n");
			outFile->Write(P3);
			outFile->Write("\r\n");
			outFile->Write("\r\n");
			outFile->Write(label9->Text);
			outFile->Close();
			Reset();
		}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			String^ ID = textBox1->Text;
			try
			{
				String^ constring2="server=localhost;user id=root;database=oms_database";
				MySqlConnection^ conDataBase2=gcnew MySqlConnection(constring2);
				MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("SELECT* from `bills` where `Product ID` = '"+ID+"' ;",conDataBase2);
				conDataBase2->Open();
				MySqlDataReader^ Reader2;
				Reader2=cmdDataBase2->ExecuteReader();				
				String^ Price;
				while(Reader2->Read())
				{
					Price = Reader2->GetString(2);
				}
				int pcost=Int32::Parse(Price);
				cost=cost-pcost;

				String^ constring="server=localhost;user id=root;database=oms_database";
				MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				MySqlCommand^ cmdDataBase = gcnew MySqlCommand("DELETE from `bills` where `Product ID` = '"+ID+"' ;",conDataBase); 
				conDataBase->Open();
				MySqlDataReader^ Reader;
				Reader=cmdDataBase->ExecuteReader();

				String^ constring1="server=localhost;user id=root;database=oms_database";
				MySqlConnection^ conDataBase1=gcnew MySqlConnection(constring1);
				MySqlDataAdapter^ sda1= gcnew MySqlDataAdapter("SELECT * FROM `bills` where 1;",conDataBase1);
				DataTable^ dt=gcnew DataTable();
				sda1->Fill(dt);
				bindingSource1->DataSource =dt;	
				dataGridView1->DataSource=bindingSource1;
										
				this->AcceptButton = button2;
				conDataBase->Close();
				conDataBase2->Close();
			}
			catch (Exception ^ex)
			{
				MessageBox::Show("Connection with Database Failed","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);			
				this->AcceptButton = button2;
			}
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			try
			{
				String^ constring="server=localhost;user id=root;database=oms_database";
				MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				MySqlCommand^ cmdDataBase = gcnew MySqlCommand("DELETE from `bills` where 1;",conDataBase); 
				conDataBase->Open();
				MySqlDataReader^ Reader;
				Reader=cmdDataBase->ExecuteReader();									
				this->AcceptButton = button2;
				Reset();
				textBox3->Text="\0";
				textBox5->Text="End User";

				String^ constring1="server=localhost;user id=root;database=oms_database";
				MySqlConnection^ conDataBase1=gcnew MySqlConnection(constring1);
				MySqlDataAdapter^ sda1= gcnew MySqlDataAdapter("SELECT * FROM `bills` where 1;",conDataBase1);
				DataTable^ dt=gcnew DataTable();
				sda1->Fill(dt);
				bindingSource1->DataSource =dt;	
				dataGridView1->DataSource=bindingSource1;
										
				this->AcceptButton = button2;
				conDataBase->Close();
			}
			catch (Exception ^ex)
			{
				MessageBox::Show("Connection with Database Failed","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);			
				this->AcceptButton = button2;
			}
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			String^ ID=textBox4->Text;
			if(textBox4->Text=="\0"||textBox4->Text=="")
			{
				MessageBox::Show("Invalid ID is given","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
				Reset();
				textBox1->Focus();					
				this->AcceptButton = button2;
			}
			else if(textBox4->Text!="\0"&&textBox4->Text!="")
			{	
			 try
				{
					String^ constring="server=localhost;user id=root;database=oms_database";
					MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT* from `customer` where `ID` = '"+ID+"' ;",conDataBase);
					conDataBase->Open();
					MySqlDataReader^ Reader;
					Reader=cmdDataBase->ExecuteReader();
					int count=0;
					while(Reader->Read())
					{
						count=count+1;
					}
					if(count==1)
					{
						textBox5->Text="Dealer";
					}
					else
					{
						MessageBox::Show("ID Not Found","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
						textBox5->Text="End User";
					}
					conDataBase->Close();
				}
				catch (Exception ^ex)
				{
					MessageBox::Show("Connection with Database Failed","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
					Reset();
					textBox1->Focus();					
					this->AcceptButton = button2;
				}			
			}
		 }

};
}
