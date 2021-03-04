#pragma once
#include "stdafx.h"
#include "AccountantPortal.h"
#include "AdminPortal.h"
#include "InventoryPortal.h"
#include "ReceptionistPortal.h"
namespace OfficeMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  login;
	private: System::Windows::Forms::Label^  username;
	private: System::Windows::Forms::TextBox^  user_name;

	private: System::Windows::Forms::Label^  password;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;
	protected: 

	protected: 


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->login = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::Label());
			this->user_name = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(408, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(547, 54);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Office Management System";
			// 
			// login
			// 
			this->login->AutoSize = true;
			this->login->BackColor = System::Drawing::Color::Transparent;
			this->login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->login->Location = System::Drawing::Point(59, 10);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(168, 37);
			this->login->TabIndex = 10;
			this->login->Text = L"Login here";
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->BackColor = System::Drawing::Color::Transparent;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(97, 71);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(97, 24);
			this->username->TabIndex = 11;
			this->username->Text = L"Username";
			// 
			// user_name
			// 
			this->user_name->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->user_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->user_name->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->user_name->Location = System::Drawing::Point(56, 111);
			this->user_name->MaxLength = 30;
			this->user_name->Name = L"user_name";
			this->user_name->Size = System::Drawing::Size(171, 22);
			this->user_name->TabIndex = 12;
			this->user_name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->BackColor = System::Drawing::Color::Transparent;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(102, 150);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(92, 24);
			this->password->TabIndex = 13;
			this->password->Text = L"Password";
			this->password->Click += gcnew System::EventHandler(this, &Form1::password_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(56, 192);
			this->textBox2->MaxLength = 20;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(171, 22);
			this->textBox2->TabIndex = 14;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(106, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 27);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Controls->Add(this->login);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->username);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->user_name);
			this->panel1->Controls->Add(this->password);
			this->panel1->Location = System::Drawing::Point(546, 183);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(277, 287);
			this->panel1->TabIndex = 16;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1356, 735);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Form1";
			this->Text = L"Welcome";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
void Reset()
{
	user_name->Text="\0";
	textBox2->Text="\0";
	this->AcceptButton = button1;
	user_name->Focus();
}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				if(user_name->Text=="1" && textBox2->Text=="1")
					{
						AdminPortal^ A1=gcnew AdminPortal();
						A1->ShowDialog();
						Reset();
					}
				else if(user_name->Text=="2" && textBox2->Text=="2")
					{
						InventoryPortal^ A2=gcnew InventoryPortal();
						A2->ShowDialog();
						Reset();
					}
				else if(user_name->Text=="3" && textBox2->Text=="3")
					{
						ReceptionistPortal^ A3=gcnew ReceptionistPortal();
						A3->ShowDialog();
						Reset();
					}
				else if(user_name->Text=="4" && textBox2->Text=="4")
					{
						AccountantPortal^ A4=gcnew AccountantPortal();
						A4->ShowDialog();
						Reset();
					}
			
				else if(user_name->Text!="" && textBox2->Text!="")
				{
					String^ constring="server=localhost;user id=root;database=oms_database";
					MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from `staff` where Username='"+this->user_name->Text+"' and Password='"+this->textBox2->Text+"';", conDataBase);
					MySqlDataReader^ myReader;
					try
					{
						conDataBase->Open();
						myReader=cmdDataBase->ExecuteReader();
						int count=0;
						String^ Designation;
						while(myReader->Read())
						{
							count=count+1;
							Designation = myReader->GetString(0);
						}
						if(count==1 && Designation=="Accountant")
						{
							AccountantPortal^ A1=gcnew AccountantPortal();
							Reset();
							A1->ShowDialog();
						}
						else if(count==1 && Designation=="Inventory Clerk")
						{
							InventoryPortal^ A2=gcnew InventoryPortal();
							Reset();
							A2->ShowDialog();
						}
						else if(count==1 && Designation=="Receptionist")
						{
							ReceptionistPortal^ A3=gcnew ReceptionistPortal();
							Reset();
							A3->ShowDialog();
						}
						else if(count==1 && Designation=="Admin")
						{
							AdminPortal^ A3=gcnew AdminPortal();
							Reset();
							A3->ShowDialog();
						}
						else if(count>1)
						{
							MessageBox::Show("Username and password are duplicate");
						}
						else
						{
							MessageBox::Show("Username and password is incorrect");
						}
					}
					catch(Exception^ex)
					{
						MessageBox::Show("Connection with Database Failed","Error", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
					}
				 }
			 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Reset();
			 
		 }
private: System::Void password_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

