#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal.h>



static struct Flight {

	std::string flightNO;

	std::string seats, date, from, to, depTime, arriveTime, airline;
}f, n;
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditFlightForm
	/// </summary>
	public ref class EditFlightForm : public System::Windows::Forms::Form
	{

	public:
		EditFlightForm(void)
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
		~EditFlightForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::TextBox^ textBox3;


	protected:
		//private: int RowIndex;
	private: String^ i;
			 //private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Audrey", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(250, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 29);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Date:";
			this->label1->Click += gcnew System::EventHandler(this, &EditFlightForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Audrey", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(250, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 29);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Seats:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Audrey", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(250, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 29);
			this->label3->TabIndex = 11;
			this->label3->Text = L"From:";
			this->label3->Click += gcnew System::EventHandler(this, &EditFlightForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Audrey", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(250, 178);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 29);
			this->label4->TabIndex = 12;
			this->label4->Text = L"To:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Audrey", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(570, 39);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(194, 29);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Departure Time:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Audrey", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(570, 92);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 29);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Arrival Time:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Audrey", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(570, 135);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(96, 29);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Airline:";
			this->label7->Click += gcnew System::EventHandler(this, &EditFlightForm::label7_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Audrey", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(331, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(207, 28);
			this->textBox1->TabIndex = 16;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &EditFlightForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Audrey", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(331, 92);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(207, 28);
			this->textBox2->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Audrey", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label8->Location = System::Drawing::Point(25, 84);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(205, 36);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Editing Flight:";
			this->label8->Click += gcnew System::EventHandler(this, &EditFlightForm::label8_Click);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Audrey", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(778, 39);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(207, 28);
			this->textBox5->TabIndex = 21;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Audrey", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(778, 92);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(207, 28);
			this->textBox6->TabIndex = 22;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &EditFlightForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Audrey", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(672, 134);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(207, 28);
			this->textBox7->TabIndex = 23;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &EditFlightForm::textBox7_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Audrey", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(346, 178);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(207, 28);
			this->textBox4->TabIndex = 24;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Audrey", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(331, 135);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(207, 28);
			this->textBox3->TabIndex = 25;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &EditFlightForm::textBox9_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Audrey", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button1->Location = System::Drawing::Point(636, 171);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(204, 35);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Done";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EditFlightForm::button1_Click);
			// 
			// EditFlightForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(997, 235);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"EditFlightForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EditFlightForm";
			this->Load += gcnew System::EventHandler(this, &EditFlightForm::EditFlightForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


	public: System::Void EditFlight(String^ i) {

		std::fstream inFile;
		inFile.open("flights.txt");
		std::ofstream outFile;
		outFile.open("temp.txt");
		//Check for error
		if (inFile.fail()) {
			std::cerr << "Error Opening File" << std::endl;
			exit(1);
		}

		std::string searchFlightNumber = msclr::interop::marshal_as<std::string>(i);

		n.date = msclr::interop::marshal_as<std::string>(textBox1->Text);
		n.seats = msclr::interop::marshal_as<std::string>(textBox2->Text);
		n.from = msclr::interop::marshal_as<std::string>(textBox3->Text);
		n.to = msclr::interop::marshal_as<std::string>(textBox4->Text);
		n.depTime = msclr::interop::marshal_as<std::string>(textBox5->Text);
		n.arriveTime = msclr::interop::marshal_as<std::string>(textBox6->Text);
		n.airline = msclr::interop::marshal_as<std::string>(textBox7->Text);

		while (inFile >> f.flightNO >> f.date >> f.seats >> f.from >> f.to >> f.depTime >> f.arriveTime >> f.airline) {
			if (f.flightNO == searchFlightNumber) {
				f.date = n.date;
				f.seats = n.seats;
				f.from = n.from;
				f.to = n.to;
				f.depTime = n.depTime;
				f.arriveTime = n.arriveTime;
				f.airline = n.airline;
			}
			outFile << f.flightNO << " " << f.date << " " << f.seats << " " << f.from << " " << f.to << " " << f.depTime << " " << f.arriveTime << " " << f.airline << " " << std::endl;
		}
		inFile.close();
		outFile.close();
		remove("flights.txt");
		rename("temp.txt", "flights.txt");

	}

#pragma endregion

			//public: System::Void setterss(System::Windows::Forms::DataGridView^ dataGridView1, int RowIndex) {
				//this->dataGridView1 = dataGridView1;
				//this->RowIndex = RowIndex;

			//}

	public: System::Void setter(String^ passed) {
		this->i = passed;
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EditFlightForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox7->Text != "") {

			//MessageBox::Show(dataGridView1->Rows[1]->Cells[2]->Value->ToString());
			EditFlight(i);
			/*dataGridView1->Rows[RowIndex]->Cells[1]->Value = msclr::interop::marshal_as<String^>(n.date);
			dataGridView1->Rows[RowIndex]->Cells[2]->Value = msclr::interop::marshal_as<String^>(n.seats);
			dataGridView1->Rows[RowIndex]->Cells[3]->Value = msclr::interop::marshal_as<String^>(n.from);
			dataGridView1->Rows[RowIndex]->Cells[4]->Value = msclr::interop::marshal_as<String^>(n.to);
			dataGridView1->Rows[RowIndex]->Cells[5]->Value = msclr::interop::marshal_as<String^>(n.depTime);
			dataGridView1->Rows[RowIndex]->Cells[6]->Value = msclr::interop::marshal_as<String^>(n.arriveTime);
			dataGridView1->Rows[RowIndex]->Cells[7]->Value = msclr::interop::marshal_as<String^>(n.airline);8*/


			this->Hide();

		}
		else MessageBox::Show("Please enter the required information");


	}

	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
