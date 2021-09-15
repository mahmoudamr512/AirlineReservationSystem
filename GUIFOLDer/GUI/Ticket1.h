#pragma once
#include<string>
#include<fstream>
#include<msclr\marshal_cppstd.h>

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
	/// Summary for Ticket
	/// </summary>
	public ref class Ticket : public System::Windows::Forms::Form
	{
	public:
		Ticket(void)
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
		~Ticket()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private:DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;


	private:int rowindex;










	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private:Form^ Background;
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
				this->label8 = (gcnew System::Windows::Forms::Label());
				this->label9 = (gcnew System::Windows::Forms::Label());
				this->label10 = (gcnew System::Windows::Forms::Label());
				this->label11 = (gcnew System::Windows::Forms::Label());
				this->label12 = (gcnew System::Windows::Forms::Label());
				this->label13 = (gcnew System::Windows::Forms::Label());
				this->label14 = (gcnew System::Windows::Forms::Label());
				this->label15 = (gcnew System::Windows::Forms::Label());
				this->label16 = (gcnew System::Windows::Forms::Label());
				this->label17 = (gcnew System::Windows::Forms::Label());
				this->label18 = (gcnew System::Windows::Forms::Label());
				this->label19 = (gcnew System::Windows::Forms::Label());
				this->label20 = (gcnew System::Windows::Forms::Label());
				this->label21 = (gcnew System::Windows::Forms::Label());
				this->label22 = (gcnew System::Windows::Forms::Label());
				this->SuspendLayout();
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->BackColor = System::Drawing::Color::Transparent;
				this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				this->label1->Font = (gcnew System::Drawing::Font(L"Audrey", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label1->Location = System::Drawing::Point(215, -1);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(406, 72);
				this->label1->TabIndex = 1;
				this->label1->Text = L"Boarding Pass";
				this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				this->label1->Click += gcnew System::EventHandler(this, &Ticket::label1_Click);
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Font = (gcnew System::Drawing::Font(L"Audrey", 12, System::Drawing::FontStyle::Bold));
				this->label2->Location = System::Drawing::Point(12, 137);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(181, 29);
				this->label2->TabIndex = 2;
				this->label2->Text = L"Ticket Number:";
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Font = (gcnew System::Drawing::Font(L"Audrey", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label3->Location = System::Drawing::Point(20, 228);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(100, 29);
				this->label3->TabIndex = 3;
				this->label3->Text = L"Airway:";
				this->label3->Click += gcnew System::EventHandler(this, &Ticket::label3_Click);
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->Font = (gcnew System::Drawing::Font(L"Audrey", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label4->Location = System::Drawing::Point(12, 87);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(224, 29);
				this->label4->TabIndex = 4;
				this->label4->Text = L"Name of Passenger:";
				this->label4->Click += gcnew System::EventHandler(this, &Ticket::label4_Click);
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->Font = (gcnew System::Drawing::Font(L"Audrey", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label5->Location = System::Drawing::Point(20, 184);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(173, 29);
				this->label5->TabIndex = 5;
				this->label5->Text = L"Flight Number:";
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->Font = (gcnew System::Drawing::Font(L"Audrey", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label6->Location = System::Drawing::Point(550, 228);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(75, 29);
				this->label6->TabIndex = 6;
				this->label6->Text = L"Date:";
				// 
				// label7
				// 
				this->label7->AutoSize = true;
				this->label7->Font = (gcnew System::Drawing::Font(L"Audrey", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label7->Location = System::Drawing::Point(550, 137);
				this->label7->Name = L"label7";
				this->label7->Size = System::Drawing::Size(75, 29);
				this->label7->TabIndex = 7;
				this->label7->Text = L"From:";
				// 
				// label8
				// 
				this->label8->AutoSize = true;
				this->label8->Font = (gcnew System::Drawing::Font(L"Audrey", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label8->Location = System::Drawing::Point(545, 84);
				this->label8->Name = L"label8";
				this->label8->Size = System::Drawing::Size(76, 29);
				this->label8->TabIndex = 8;
				this->label8->Text = L"Class:";
				this->label8->Click += gcnew System::EventHandler(this, &Ticket::label8_Click);
				// 
				// label9
				// 
				this->label9->AutoSize = true;
				this->label9->Font = (gcnew System::Drawing::Font(L"Audrey", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label9->Location = System::Drawing::Point(550, 184);
				this->label9->Name = L"label9";
				this->label9->Size = System::Drawing::Size(148, 29);
				this->label9->TabIndex = 9;
				this->label9->Text = L"Destination:";
				// 
				// label10
				// 
				this->label10->AutoSize = true;
				this->label10->Font = (gcnew System::Drawing::Font(L"Audrey", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label10->Location = System::Drawing::Point(20, 277);
				this->label10->Name = L"label10";
				this->label10->Size = System::Drawing::Size(70, 29);
				this->label10->TabIndex = 10;
				this->label10->Text = L"Seat:";
				// 
				// label11
				// 
				this->label11->AutoSize = true;
				this->label11->Font = (gcnew System::Drawing::Font(L"Audrey", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label11->Location = System::Drawing::Point(504, 277);
				this->label11->Name = L"label11";
				this->label11->Size = System::Drawing::Size(172, 29);
				this->label11->TabIndex = 11;
				this->label11->Text = L"Time of Flight:";
				// 
				// label12
				// 
				this->label12->AutoSize = true;
				this->label12->Location = System::Drawing::Point(199, 187);
				this->label12->Name = L"label12";
				this->label12->Size = System::Drawing::Size(60, 20);
				this->label12->TabIndex = 22;
				this->label12->Text = L"label12";
				// 
				// label13
				// 
				this->label13->AutoSize = true;
				this->label13->Location = System::Drawing::Point(133, 237);
				this->label13->Name = L"label13";
				this->label13->Size = System::Drawing::Size(60, 20);
				this->label13->TabIndex = 23;
				this->label13->Text = L"label13";
				// 
				// label14
				// 
				this->label14->AutoSize = true;
				this->label14->Location = System::Drawing::Point(116, 286);
				this->label14->Name = L"label14";
				this->label14->Size = System::Drawing::Size(60, 20);
				this->label14->TabIndex = 24;
				this->label14->Text = L"label14";
				// 
				// label15
				// 
				this->label15->AutoSize = true;
				this->label15->Location = System::Drawing::Point(251, 96);
				this->label15->Name = L"label15";
				this->label15->Size = System::Drawing::Size(60, 20);
				this->label15->TabIndex = 25;
				this->label15->Text = L"label15";
				// 
				// label16
				// 
				this->label16->AutoSize = true;
				this->label16->Location = System::Drawing::Point(199, 146);
				this->label16->Name = L"label16";
				this->label16->Size = System::Drawing::Size(60, 20);
				this->label16->TabIndex = 26;
				this->label16->Text = L"label16";
				// 
				// label17
				// 
				this->label17->AutoSize = true;
				this->label17->Location = System::Drawing::Point(638, 92);
				this->label17->Name = L"label17";
				this->label17->Size = System::Drawing::Size(60, 20);
				this->label17->TabIndex = 27;
				this->label17->Text = L"label17";
				// 
				// label18
				// 
				this->label18->AutoSize = true;
				this->label18->Location = System::Drawing::Point(638, 142);
				this->label18->Name = L"label18";
				this->label18->Size = System::Drawing::Size(60, 20);
				this->label18->TabIndex = 28;
				this->label18->Text = L"label18";
				// 
				// label19
				// 
				this->label19->AutoSize = true;
				this->label19->Location = System::Drawing::Point(704, 193);
				this->label19->Name = L"label19";
				this->label19->Size = System::Drawing::Size(60, 20);
				this->label19->TabIndex = 29;
				this->label19->Text = L"label19";
				// 
				// label20
				// 
				this->label20->AutoSize = true;
				this->label20->Location = System::Drawing::Point(631, 237);
				this->label20->Name = L"label20";
				this->label20->Size = System::Drawing::Size(60, 20);
				this->label20->TabIndex = 30;
				this->label20->Text = L"label20";
				// 
				// label21
				// 
				this->label21->AutoSize = true;
				this->label21->Location = System::Drawing::Point(682, 282);
				this->label21->Name = L"label21";
				this->label21->Size = System::Drawing::Size(60, 20);
				this->label21->TabIndex = 31;
				this->label21->Text = L"label21";
				// 
				// label22
				// 
				this->label22->AutoSize = true;
				this->label22->Location = System::Drawing::Point(777, 282);
				this->label22->Name = L"label22";
				this->label22->Size = System::Drawing::Size(60, 20);
				this->label22->TabIndex = 32;
				this->label22->Text = L"label22";
				// 
				// Ticket
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::Color::WhiteSmoke;
				this->ClientSize = System::Drawing::Size(898, 368);
				this->Controls->Add(this->label22);
				this->Controls->Add(this->label21);
				this->Controls->Add(this->label20);
				this->Controls->Add(this->label19);
				this->Controls->Add(this->label18);
				this->Controls->Add(this->label17);
				this->Controls->Add(this->label16);
				this->Controls->Add(this->label15);
				this->Controls->Add(this->label14);
				this->Controls->Add(this->label13);
				this->Controls->Add(this->label12);
				this->Controls->Add(this->label11);
				this->Controls->Add(this->label10);
				this->Controls->Add(this->label9);
				this->Controls->Add(this->label8);
				this->Controls->Add(this->label7);
				this->Controls->Add(this->label6);
				this->Controls->Add(this->label5);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->label1);
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
				this->Name = L"Ticket";
				this->Text = L"Ticket";
				this->Load += gcnew System::EventHandler(this, &Ticket::Ticket_Load);
				this->FormClosed += gcnew FormClosedEventHandler(this, &Ticket::TicketInfo_FormClosed);
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
	public:System::Void TicketInfo(DataGridView^ datGridView2, int rowindex, Form^ Background)
	{
		this->dataGridView1 = datGridView2;
		this->rowindex = rowindex;
		this->Background = Background;
	}
	private:System::Void TicketInfo_FormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
		Background->Hide();
	}
	private: System::Void Ticket_Load(System::Object^  sender, System::EventArgs^  e) {

		label12->Text = this->dataGridView1->Rows[this->rowindex]->Cells[0]->Value->ToString();
		label20->Text = this->dataGridView1->Rows[this->rowindex]->Cells[1]->Value->ToString();
		label18->Text = this->dataGridView1->Rows[this->rowindex]->Cells[3]->Value->ToString();
		label19->Text = this->dataGridView1->Rows[this->rowindex]->Cells[4]->Value->ToString();
		label21->Text = this->dataGridView1->Rows[this->rowindex]->Cells[5]->Value->ToString();
		label22->Text = this->dataGridView1->Rows[this->rowindex]->Cells[6]->Value->ToString();
		label13->Text = this->dataGridView1->Rows[this->rowindex]->Cells[7]->Value->ToString();
		fstream bookedflights;
		bookedflights.open("Booked.txt", ios::in);
		string username, flight_, P_class, P_Seat, temp, ticket_;
		temp = marshal_as<std::string>(this->dataGridView1->Rows[this->rowindex]->Cells[0]->Value->ToString());
		while (bookedflights >> username >> flight_ >> P_class >> P_Seat >> ticket_) {
			if (flight_ == temp) {
				label15->Text = marshal_as<String^>(username);
				label16->Text = marshal_as<String^>(ticket_);
				label14->Text = marshal_as<String^>(P_Seat);
				label17->Text = marshal_as<String^>(P_class);

			}
		}
		bookedflights.close();
	}

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
