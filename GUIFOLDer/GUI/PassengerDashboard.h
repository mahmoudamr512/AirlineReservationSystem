#pragma 
#include "CustomMoreBox.h"
#include "Ticket1.h"
#include <fstream>
#include <string>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include "BookAFlight.h"

namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	public ref class PassengerDashboard : public System::Windows::Forms::Form
	{
	public:
		PassengerDashboard(void)
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
		~PassengerDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;








	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	public: String^ username;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  FlightNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  From;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Seats;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  To;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Class;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  arrive;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Airport;
	private: System::Windows::Forms::DataGridViewImageColumn^  Column1;











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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PassengerDashboard::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->FlightNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->From = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Seats = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->To = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Class = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->arrive = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Airport = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::InactiveBorder;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Audrey", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->FlightNumber,
					this->From, this->Seats, this->To, this->Class, this->Time, this->arrive, this->Airport, this->Column1
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Audrey", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::GrayText;
			this->dataGridView1->Location = System::Drawing::Point(188, 20);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Audrey", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::Black;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::White;
			this->dataGridView1->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->dataGridView1->RowTemplate->DefaultCellStyle->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->RowTemplate->Height = 180;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(1061, 282);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PassengerDashboard::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Audrey", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::SteelBlue;
			this->button1->Location = System::Drawing::Point(29, 519);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PassengerDashboard::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Audrey", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::SteelBlue;
			this->button2->Location = System::Drawing::Point(7, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 31);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Book Flight";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &PassengerDashboard::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(29, 20);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(154, 43);
			this->panel1->TabIndex = 3;
			// 
			// FlightNumber
			// 
			this->FlightNumber->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->FlightNumber->HeaderText = L"Flight Number ";
			this->FlightNumber->Name = L"FlightNumber";
			this->FlightNumber->ReadOnly = true;
			// 
			// From
			// 
			this->From->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->From->HeaderText = L"Date";
			this->From->Name = L"From";
			this->From->ReadOnly = true;
			// 
			// Seats
			// 
			this->Seats->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Seats->HeaderText = L"Seats";
			this->Seats->Name = L"Seats";
			this->Seats->ReadOnly = true;
			// 
			// To
			// 
			this->To->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->To->HeaderText = L"From";
			this->To->Name = L"To";
			this->To->ReadOnly = true;
			// 
			// Class
			// 
			this->Class->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Class->HeaderText = L"To";
			this->Class->Name = L"Class";
			this->Class->ReadOnly = true;
			// 
			// Time
			// 
			this->Time->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Time->HeaderText = L"Departure Time";
			this->Time->Name = L"Time";
			this->Time->ReadOnly = true;
			// 
			// arrive
			// 
			this->arrive->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->arrive->HeaderText = L"Arrival Time";
			this->arrive->Name = L"arrive";
			this->arrive->ReadOnly = true;
			// 
			// Airport
			// 
			this->Airport->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Airport->HeaderText = L"Airline";
			this->Airport->Name = L"Airport";
			this->Airport->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Modify/Delete";
			this->Column1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Column1.Image")));
			this->Column1->ImageLayout = System::Windows::Forms::DataGridViewImageCellLayout::Zoom;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// PassengerDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1260, 562);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"PassengerDashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PassengerDashboard";
			this->Load += gcnew System::EventHandler(this, &PassengerDashboard::PassengerDashboard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}


	public: System::Void searchInAFile(std::string flightNumber) {

		std::ifstream allFlights("flights.txt");

		std::string flightNo, date, seats, from, to, deptime, arrivetime, airlines;


		while (allFlights >> flightNo >> date >> seats >> from >> to >> deptime >> arrivetime >> airlines) {
			if (flightNo == flightNumber) {

				DataGridViewRow^ row = { gcnew DataGridViewRow() };

				row->CreateCells(this->dataGridView1);

				row->SetValues(gcnew cli::array< System::String^>(9) {
					marshal_as<String^>(flightNo),
						marshal_as<String^>(date),
						marshal_as<String^>(seats),
						marshal_as<String^>(from),
						marshal_as<String^>(to),
						marshal_as<String^>(deptime),
						marshal_as<String^>(arrivetime),
						marshal_as<String^>(airlines)
				});

				dataGridView1->Rows->Add(row);
			}
		}

		allFlights.close();

	}

	public: System::Void readAFlight(std::string username) {

		std::ifstream bookedflights("Booked.txt");

		std::string user, flightNo;

		while (bookedflights >> user >> flightNo) {
			if (user == username) {
				searchInAFile(flightNo);
			}
		}
		bookedflights.close();
	};




#pragma endregion
	private: System::Void PassengerDashboard_Load(System::Object^  sender, System::EventArgs^  e) {
		readAFlight(marshal_as<std::string>(this->username->ToString()));
		dataGridView1->Visible = true;
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		BookAFlight^ book = gcnew BookAFlight();
		book->passengerDashboard = this;
		book->Show();
		this->Hide();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

		int RowIndex = e->RowIndex;

		Form^ formBackground = gcnew Form();
		Ticket^ ticketBox = gcnew Ticket();
		formBackground->ClientSize = System::Drawing::Size(1260, 562);
		formBackground->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		formBackground->BackColor = System::Drawing::Color::Black;
		formBackground->Opacity = .70;
		formBackground->StartPosition = this->StartPosition;
		formBackground->Show();
		ticketBox->TicketInfo(this->dataGridView1, RowIndex, formBackground);

		CustomMoreBox^ box = gcnew CustomMoreBox();
		box->username = this->username;
		box->setters(dataGridView1, RowIndex, formBackground);

		if (e->ColumnIndex == 8) {
			box->ShowDialog();
		}

		if (e->ColumnIndex != 8) {
			ticketBox->ShowDialog();
		}
	}

	};
}
