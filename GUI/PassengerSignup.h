#pragma once
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "BookAFlight.h"

struct User {
	std::string username, fullname, passengerId, email,
		nationality, addreess, phone, password;
};

namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace std;
	/// <summary>
	/// Summary for PassengerSignup
	/// </summary>
	public ref class PassengerSignup : public System::Windows::Forms::Form
	{
	public:
		PassengerSignup(void)
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
		~PassengerSignup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	public: Form^ prevForm;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button3;

	protected:








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PassengerSignup::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Audrey", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(26, 395);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Sign-up";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PassengerSignup::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Audrey Med", 13, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(22, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Audrey Med", 13, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(22, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Full name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Audrey Med", 13, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(22, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 22);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Passenger ID:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Audrey Med", 13, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(22, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 22);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Email:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Audrey Med", 13, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(22, 188);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 22);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Nationality:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Audrey Med", 13, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(23, 286);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(99, 22);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Password:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Audrey Med", 13, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(22, 320);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(178, 22);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Re-enter password:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(128, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(105, 13);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox2->Location = System::Drawing::Point(122, 86);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(105, 13);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(154, 121);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(105, 13);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Location = System::Drawing::Point(91, 155);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(105, 13);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Location = System::Drawing::Point(142, 188);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(105, 13);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Location = System::Drawing::Point(128, 286);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(105, 13);
			this->textBox6->TabIndex = 13;
			this->textBox6->UseSystemPasswordChar = true;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Location = System::Drawing::Point(206, 320);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(105, 13);
			this->textBox7->TabIndex = 14;
			this->textBox7->UseSystemPasswordChar = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Audrey", 24, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(199, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(277, 38);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Passenger Sign-up";
			this->label8->Click += gcnew System::EventHandler(this, &PassengerSignup::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Audrey Med", 13, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(22, 221);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(91, 22);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Address: ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Audrey Med", 13, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(22, 253);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(144, 22);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Phone Number: ";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Location = System::Drawing::Point(119, 221);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(130, 13);
			this->textBox8->TabIndex = 18;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Location = System::Drawing::Point(172, 253);
			this->textBox9->MaxLength = 12;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(110, 13);
			this->textBox9->TabIndex = 19;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Location = System::Drawing::Point(128, 71);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(105, 1);
			this->panel2->TabIndex = 20;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(122, 105);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(105, 1);
			this->panel1->TabIndex = 21;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Black;
			this->panel3->Location = System::Drawing::Point(154, 142);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(105, 1);
			this->panel3->TabIndex = 23;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Black;
			this->panel4->Location = System::Drawing::Point(142, 207);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(105, 1);
			this->panel4->TabIndex = 24;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Black;
			this->panel5->Location = System::Drawing::Point(91, 174);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(105, 1);
			this->panel5->TabIndex = 25;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Black;
			this->panel6->Location = System::Drawing::Point(119, 240);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(130, 1);
			this->panel6->TabIndex = 26;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Black;
			this->panel7->Location = System::Drawing::Point(172, 272);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(110, 1);
			this->panel7->TabIndex = 27;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Black;
			this->panel8->Location = System::Drawing::Point(128, 305);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(105, 1);
			this->panel8->TabIndex = 28;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Black;
			this->panel9->Location = System::Drawing::Point(206, 339);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(105, 1);
			this->panel9->TabIndex = 29;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Audrey", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(137, 395);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 43);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &PassengerSignup::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Audrey Med", 12));
			this->checkBox1->Location = System::Drawing::Point(26, 359);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(122, 23);
			this->checkBox1->TabIndex = 31;
			this->checkBox1->Text = L"I agree to the";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Audrey Med", 12));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label11->Location = System::Drawing::Point(138, 360);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(168, 19);
			this->label11->TabIndex = 32;
			this->label11->Text = L"Terms and Conditions";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::DarkRed;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Audrey Med", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DarkRed;
			this->button3->Location = System::Drawing::Point(624, 9);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(53, 33);
			this->button3->TabIndex = 33;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &PassengerSignup::button3_Click);
			// 
			// PassengerSignup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(689, 450);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"PassengerSignup";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Passenger Sign-up";
			this->Load += gcnew System::EventHandler(this, &PassengerSignup::PassengerSignup_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void signup(User newuser) {

		ofstream singupfile;
		singupfile.open("userinfo.txt", std::ios_base::app);

		singupfile << newuser.fullname << endl << newuser.addreess << endl << newuser.username
			<< " " << newuser.password << " "
			<< newuser.passengerId << " " << newuser.email << " " << newuser.nationality << " " << newuser.phone << endl;

		singupfile.close();

	}

#pragma endregion

	private: System::Void PassengerSignup_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		User newuser;
		newuser.username = marshal_as<std::string>(textBox1->Text);
		newuser.fullname = marshal_as<std::string>(textBox2->Text);
		newuser.passengerId = marshal_as<std::string>(textBox3->Text);
		newuser.email = marshal_as<std::string>(textBox4->Text);
		newuser.nationality = marshal_as<std::string>(textBox5->Text);

		newuser.addreess = marshal_as<std::string>(textBox8->Text);
		newuser.phone = marshal_as<std::string>(textBox9->Text);

		if ((textBox6->Text) != (textBox7->Text))
			MessageBox::Show("Password and re-enter password should match each other");
		else {
			newuser.password = marshal_as<std::string>(textBox6->Text);
			signup(newuser);
			BookAFlight^ book = gcnew BookAFlight();
			book->Show();
			book->username = marshal_as<String^>(newuser.username);
		}
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->prevForm->Show();
}
};
}
