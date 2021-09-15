#pragma once
#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <time.h>

namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for BookForm
	/// </summary>
	public ref class BookForm : public System::Windows::Forms::Form
	{
	public:
		BookForm(void)
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
		~BookForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: String^ flightNumber;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RadioButton^ First;
	private: System::Windows::Forms::RadioButton^ Business;
	private: System::Windows::Forms::RadioButton^ Economy;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BookForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->First = (gcnew System::Windows::Forms::RadioButton());
			this->Business = (gcnew System::Windows::Forms::RadioButton());
			this->Economy = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Audrey", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(2, 175);
			this->label1->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(243, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Number Of Seats";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::DarkGray;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(259, 184);
			this->textBox1->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(247, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &BookForm::textBox1_TextChanged);
			// 
			// First
			// 
			this->First->AutoSize = true;
			this->First->BackColor = System::Drawing::Color::Transparent;
			this->First->Font = (gcnew System::Drawing::Font(L"Audrey", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->First->Location = System::Drawing::Point(293, 337);
			this->First->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->First->Name = L"First";
			this->First->Size = System::Drawing::Size(72, 29);
			this->First->TabIndex = 2;
			this->First->TabStop = true;
			this->First->Text = L"First";
			this->First->UseVisualStyleBackColor = false;
			// 
			// Business
			// 
			this->Business->AutoSize = true;
			this->Business->BackColor = System::Drawing::Color::Transparent;
			this->Business->Font = (gcnew System::Drawing::Font(L"Audrey", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Business->Location = System::Drawing::Point(293, 404);
			this->Business->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->Business->Name = L"Business";
			this->Business->Size = System::Drawing::Size(109, 29);
			this->Business->TabIndex = 3;
			this->Business->TabStop = true;
			this->Business->Text = L"Business";
			this->Business->UseVisualStyleBackColor = false;
			// 
			// Economy
			// 
			this->Economy->AutoSize = true;
			this->Economy->BackColor = System::Drawing::Color::Transparent;
			this->Economy->Font = (gcnew System::Drawing::Font(L"Audrey", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Economy->Location = System::Drawing::Point(293, 471);
			this->Economy->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->Economy->Name = L"Economy";
			this->Economy->Size = System::Drawing::Size(115, 29);
			this->Economy->TabIndex = 4;
			this->Economy->TabStop = true;
			this->Economy->Text = L"Economy";
			this->Economy->UseVisualStyleBackColor = false;
			this->Economy->CheckedChanged += gcnew System::EventHandler(this, &BookForm::radioButton3_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Audrey", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(26, 308);
			this->label4->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 44);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Class";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Audrey", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(444, 21);
			this->label5->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(279, 58);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Book flight:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Audrey", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(715, 21);
			this->label2->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 58);
			this->label2->TabIndex = 9;
			this->label2->Text = L"label";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(122, 607);
			this->button1->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(243, 87);
			this->button1->TabIndex = 10;
			this->button1->Text = L"book";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BookForm::button1_Click);
			// 
			// BookForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1244, 709);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Economy);
			this->Controls->Add(this->Business);
			this->Controls->Add(this->First);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Audrey", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->Name = L"BookForm";
			this->Text = L"BookForm";
			this->Load += gcnew System::EventHandler(this, &BookForm::BookForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void book(String^ flightNo, std::string username) {

		std::string flightClass;
		// Generate Random Number; 

		std::string str_flightNo = marshal_as<std::string>(flightNo);

		srand(time(0));
		int ticketNumber = rand() % 10000 + 10000;
		std::string seats = marshal_as<std::string>(textBox1->Text);

		if (First->Checked)
			flightClass = "First";

		if (Business->Checked)
			flightClass = "Business";

		if (Economy->Checked)
			flightClass = "Economy";
		// File -> Booked.txt -> username flightNo ticket# (No Of Seats) Class
		std::ofstream booked;
		booked.open("Booked.txt", std::ios_base::app);

		booked << username << " " << str_flightNo << " " << ticketNumber << " " << seats << " " << flightClass << std::endl;

		booked.close();

	}
#pragma endregion
	public: System::Void setter(String^ flightNo) {
		this->flightNumber = flightNo;
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BookForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		book(this->flightNumber, "user0");
		MessageBox::Show("Flight " + this->flightNumber + " had been booked successfully.");
		this->Hide();
	}
	};
}
