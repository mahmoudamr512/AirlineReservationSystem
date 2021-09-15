#pragma once
#include<fstream>
#include<string>
#include <msclr\marshal_cppstd.h>


struct addaflight {
	std::string flightno;
	std::string date;
	std::string seats;
	std::string from;
	std::string to;
	std::string departure;
	std::string arrival;
	std::string airline;

};

namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	/// <summary>
	/// Summary for AddAFlight
	/// </summary>


	public ref class AddAFlight : public System::Windows::Forms::Form
	{
	public:
		AddAFlight(void)
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
		~AddAFlight()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: Form^ mainDashboard;






	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddAFlight::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Audrey", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Flight Number :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Audrey", 13, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(12, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Date :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Audrey", 13, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(12, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 22);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Available Seats :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Audrey", 13, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(12, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 22);
			this->label4->TabIndex = 3;
			this->label4->Text = L"From :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Audrey", 13, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(13, 261);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 22);
			this->label5->TabIndex = 4;
			this->label5->Text = L"To :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Audrey", 13, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(13, 310);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(151, 22);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Departure Time :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Audrey", 13, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(12, 356);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 22);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Arrival Time :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Audrey", 13, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(12, 405);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 22);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Airline :";
			this->label8->Click += gcnew System::EventHandler(this, &AddAFlight::label8_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Audrey", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(169, 61);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(202, 20);
			this->textBox1->TabIndex = 8;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AddAFlight::textBox1_KeyDown);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Audrey Med", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(170, 160);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(201, 20);
			this->textBox3->TabIndex = 10;
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AddAFlight::textBox3_KeyDown);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Audrey Med", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(169, 208);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(202, 20);
			this->textBox4->TabIndex = 11;
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AddAFlight::textBox4_KeyDown);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Audrey Med", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(166, 263);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(203, 20);
			this->textBox5->TabIndex = 12;
			this->textBox5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AddAFlight::textBox5_KeyDown);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Audrey Med", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(166, 312);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(203, 20);
			this->textBox6->TabIndex = 13;
			this->textBox6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AddAFlight::textBox6_KeyDown);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Audrey Med", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(170, 358);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(203, 20);
			this->textBox7->TabIndex = 14;
			this->textBox7->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AddAFlight::textBox7_KeyDown);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Audrey Med", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(166, 405);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(203, 20);
			this->textBox8->TabIndex = 15;
			this->textBox8->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AddAFlight::textBox8_KeyDown);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Audrey", 12, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(136, 458);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 53);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Add Flight";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AddAFlight::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(170, 87);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(202, 2);
			this->panel1->TabIndex = 17;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Audrey", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DarkRed;
			this->button2->Location = System::Drawing::Point(1115, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 53);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AddAFlight::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Audrey", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(289, 458);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 53);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Done";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AddAFlight::button3_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(171, 134);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(202, 2);
			this->panel2->TabIndex = 27;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(171, 186);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(202, 2);
			this->panel3->TabIndex = 28;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Location = System::Drawing::Point(171, 234);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(202, 2);
			this->panel4->TabIndex = 29;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel5->Location = System::Drawing::Point(171, 289);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(202, 2);
			this->panel5->TabIndex = 30;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel6->Location = System::Drawing::Point(170, 338);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(202, 2);
			this->panel6->TabIndex = 31;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel7->Location = System::Drawing::Point(171, 384);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(202, 2);
			this->panel7->TabIndex = 32;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel8->Location = System::Drawing::Point(169, 432);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(202, 2);
			this->panel8->TabIndex = 33;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(166, 110);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(206, 20);
			this->dateTimePicker1->TabIndex = 34;
			// 
			// AddAFlight
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1244, 523);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddAFlight";
			this->Text = L"AddAFlight";
			this->Load += gcnew System::EventHandler(this, &AddAFlight::AddAFlight_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	public: System::Void addaflight(std::string flightno, std::string date, std::string seats, std::string from, std::string to,
		std::string departure, std::string arrival, std::string airline) {
		std::ofstream files;
		files.open("flights.txt", std::ios_base::app);

		files << flightno << " " << date << " " << seats << " " << from << " " << to << " " << departure << " " <<
			arrival << " " << airline << std::endl;

		files.close();
	}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTime^ dt = dateTimePicker1->Value;
		String^ dateString = dt->ToString("dd-MM-yyyy");
		addaflight(marshal_as<std::string>(textBox1->Text), marshal_as<std::string>(dateString), marshal_as<std::string>(textBox3->Text),
			marshal_as<std::string>(textBox4->Text), marshal_as<std::string>(textBox5->Text), marshal_as<std::string>(textBox6->Text),
			marshal_as<std::string>(textBox7->Text), marshal_as<std::string>(textBox8->Text));

		MessageBox::Show("Flight Added successfully", "Message", MessageBoxButtons::OK, MessageBoxIcon::None);

		textBox1->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";
		textBox8->Text = "";
	}
	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter)
		{
			textBox3->Focus();
		}
	}
	private: System::Void textBox3_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter)
		{
			textBox4->Focus();
		}
	}
	private: System::Void textBox4_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter)
		{
			textBox5->Focus();
		}
	}
	private: System::Void textBox5_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter)
		{
			textBox6->Focus();
		}
	}
	private: System::Void textBox6_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter)
		{
			textBox7->Focus();
		}
	}
	private: System::Void textBox7_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter)
		{
			textBox8->Focus();
		}
	}

	public: System::Void setter(Form^ dashboard) {
		this->mainDashboard = dashboard;
	}
	private: System::Void textBox8_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter)
		{
			button1->PerformClick();
		}
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void AddAFlight_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		this->mainDashboard->Invalidate();
		this->mainDashboard->Refresh();
		this->mainDashboard->Show();
	}
	};
}
