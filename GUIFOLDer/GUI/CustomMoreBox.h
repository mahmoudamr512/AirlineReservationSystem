#pragma once
#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>

namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for CustomMoreBox
	/// </summary>
	public ref class CustomMoreBox : public System::Windows::Forms::Form
	{
	public:
		CustomMoreBox()
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
		~CustomMoreBox()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected:
	private: System::Windows::Forms::Button^  button3;

	public: String^ username;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: Form^ passedForm;

	private: int rowIndex;

	private: String^ testdata;

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
		void InitializeComponent()
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			this->FormClosed += gcnew FormClosedEventHandler(this, &CustomMoreBox::CustomMoreBox_FormClosed);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Coral;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(289, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 45);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Modify Reservation";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CustomMoreBox::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Crimson;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(12, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 45);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Cancel Reservation";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &CustomMoreBox::button3_Click);
			// 
			// CustomMoreBox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(428, 74);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"CustomMoreBox";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Options";
			this->ResumeLayout(false);

		}

	public: System::Void CancelReservation(std::string loggedUser, std::string targetFlight) {
		std::ofstream temp;
		temp.open("temp.txt");

		std::ifstream bookedFlights("Booked.txt");

		std::string username, flightNumber;

		while (bookedFlights >> username >> flightNumber) {
			if (username == loggedUser && flightNumber == targetFlight) {
				continue;
			}
			else {
				temp << username << " " << flightNumber << std::endl;
			}
		}

		temp.close();
		bookedFlights.close();

		remove("Booked.txt");
		rename("temp.txt", "Booked.txt");
		dataGridView1->Refresh();
		dataGridView1->Update();
	}

	public: System::Void ModifyReservation(std::string loggedUser, std::string targetFlight) {

	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		CancelReservation(marshal_as<std::string>(this->username->ToString()), marshal_as<std::string>(dataGridView1->Rows[rowIndex]->Cells[0]->Value->ToString()));
		dataGridView1->Rows->RemoveAt(rowIndex);
		CustomMoreBox::Close();
	}


	private: System::Void CustomMoreBox_FormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
		passedForm->Hide();
	}

	public: System::Void setters(System::Windows::Forms::DataGridView^  dataGridView1, int rowindex, Form^ passedForm) {
		this->dataGridView1 = dataGridView1;
		this->rowIndex = rowindex;
		this->passedForm = passedForm;
	}


#pragma endregion
	};
}