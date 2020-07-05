#pragma once
#include "definiciones.h";
#include "P1.h";
#include "P2.h";
#include "P3.h";
#include "P4.h";
#include "P5.h";
#include "P8.h";
#include "about.h";
#include <Windows.h>;
#include <mmsystem.h>;
#include <iostream>;
#include <shellapi.h>;


namespace FEM3DV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de formInicio
	/// </summary>
	public ref class formInicio : public System::Windows::Forms::Form
	{
	public:
		formInicio(void)
		{
			InitializeComponent();
			this->panel4->Hide();
			this->panel6->Hide();
			this->panel7->Hide();
			this->panel8->Hide();
			this->panel9->Hide();
			this->panel10->Hide();
			this->panel11->Hide();
			this->panel12->Hide();
		
			PlaySound(L"C:\\Recursos\\sound.wav", NULL, SND_LOOP | SND_ASYNC);


			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~formInicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ Home;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;












	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;













	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->Home = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->panel1->Controls->Add(this->panel12);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel11);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->pictureBox12);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->pictureBox11);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->Home);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(169, 695);
			this->panel1->TabIndex = 0;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::White;
			this->panel12->ForeColor = System::Drawing::Color::White;
			this->panel12->Location = System::Drawing::Point(0, 163);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(5, 51);
			this->panel12->TabIndex = 34;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->ForeColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(0, 284);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(5, 58);
			this->panel6->TabIndex = 28;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::White;
			this->panel11->ForeColor = System::Drawing::Color::White;
			this->panel11->Location = System::Drawing::Point(0, 604);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(5, 58);
			this->panel11->TabIndex = 33;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::White;
			this->panel10->ForeColor = System::Drawing::Color::White;
			this->panel10->Location = System::Drawing::Point(0, 540);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(5, 58);
			this->panel10->TabIndex = 32;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::White;
			this->panel9->ForeColor = System::Drawing::Color::White;
			this->panel9->Location = System::Drawing::Point(0, 476);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(5, 58);
			this->panel9->TabIndex = 31;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::White;
			this->panel8->ForeColor = System::Drawing::Color::White;
			this->panel8->Location = System::Drawing::Point(0, 412);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(5, 58);
			this->panel8->TabIndex = 30;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->ForeColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(0, 348);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(5, 58);
			this->panel7->TabIndex = 29;
			// 
			// pictureBox12
			// 
			this->pictureBox12->ImageLocation = L"C:\\Recursos\\git.png";
			this->pictureBox12->Location = System::Drawing::Point(25, 619);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(31, 27);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 26;
			this->pictureBox12->TabStop = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->Location = System::Drawing::Point(-4, 604);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(183, 58);
			this->button9->TabIndex = 27;
			this->button9->Text = L"ABOUT";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &formInicio::button9_Click);
			this->button9->MouseLeave += gcnew System::EventHandler(this, &formInicio::button9_MouseLeave);
			this->button9->MouseHover += gcnew System::EventHandler(this, &formInicio::button9_MouseHover);
			// 
			// pictureBox11
			// 
			this->pictureBox11->ImageLocation = L"C:\\Recursos\\mente.png";
			this->pictureBox11->Location = System::Drawing::Point(25, 555);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(31, 27);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 24;
			this->pictureBox11->TabStop = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->Location = System::Drawing::Point(-4, 540);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(183, 58);
			this->button8->TabIndex = 25;
			this->button8->Text = L"   PASO 8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &formInicio::button8_Click);
			this->button8->MouseLeave += gcnew System::EventHandler(this, &formInicio::button8_MouseLeave);
			this->button8->MouseHover += gcnew System::EventHandler(this, &formInicio::button8_MouseHover);
			// 
			// pictureBox10
			// 
			this->pictureBox10->ImageLocation = L"C:\\Recursos\\parts.png";
			this->pictureBox10->Location = System::Drawing::Point(29, 491);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(31, 27);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 22;
			this->pictureBox10->TabStop = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(0, 476);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(183, 58);
			this->button7->TabIndex = 23;
			this->button7->Text = L"          COMPONENTES";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &formInicio::button7_Click);
			this->button7->MouseLeave += gcnew System::EventHandler(this, &formInicio::button7_MouseLeave);
			this->button7->MouseHover += gcnew System::EventHandler(this, &formInicio::button7_MouseHover);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->ForeColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(0, 99);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(5, 58);
			this->panel5->TabIndex = 21;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->ForeColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(0, 220);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(5, 58);
			this->panel4->TabIndex = 19;
			// 
			// pictureBox9
			// 
			this->pictureBox9->ImageLocation = L"C:\\Recursos\\mente.png";
			this->pictureBox9->Location = System::Drawing::Point(25, 427);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(31, 27);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 17;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &formInicio::pictureBox9_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(-4, 412);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(183, 58);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Quiz ";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &formInicio::button6_Click);
			this->button6->MouseLeave += gcnew System::EventHandler(this, &formInicio::button6_MouseLeave);
			this->button6->MouseHover += gcnew System::EventHandler(this, &formInicio::button6_MouseHover);
			// 
			// pictureBox8
			// 
			this->pictureBox8->ImageLocation = L"C:\\Recursos\\mente.png";
			this->pictureBox8->Location = System::Drawing::Point(25, 363);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(31, 27);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 15;
			this->pictureBox8->TabStop = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(-4, 348);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(183, 58);
			this->button5->TabIndex = 16;
			this->button5->Text = L"   PASO 5 - 6";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &formInicio::button5_Click);
			this->button5->MouseLeave += gcnew System::EventHandler(this, &formInicio::button5_MouseLeave);
			this->button5->MouseHover += gcnew System::EventHandler(this, &formInicio::button5_MouseHover);
			// 
			// pictureBox7
			// 
			this->pictureBox7->ImageLocation = L"C:\\Recursos\\mente.png";
			this->pictureBox7->Location = System::Drawing::Point(25, 299);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(31, 27);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 13;
			this->pictureBox7->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(-4, 284);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(183, 58);
			this->button4->TabIndex = 14;
			this->button4->Text = L"   PASO 3 - 4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &formInicio::button4_Click);
			this->button4->MouseLeave += gcnew System::EventHandler(this, &formInicio::button4_MouseLeave);
			this->button4->MouseHover += gcnew System::EventHandler(this, &formInicio::button4_MouseHover);
			// 
			// pictureBox6
			// 
			this->pictureBox6->ImageLocation = L"C:\\Recursos\\mente.png";
			this->pictureBox6->Location = System::Drawing::Point(25, 235);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(31, 27);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 11;
			this->pictureBox6->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(-4, 220);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(183, 58);
			this->button3->TabIndex = 12;
			this->button3->Text = L"   PASO 1 - 2";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &formInicio::button3_Click);
			this->button3->MouseLeave += gcnew System::EventHandler(this, &formInicio::button3_MouseLeave);
			this->button3->MouseHover += gcnew System::EventHandler(this, &formInicio::button3_MouseHover);
			// 
			// pictureBox5
			// 
			this->pictureBox5->ImageLocation = L"C:\\Recursos\\chess.png";
			this->pictureBox5->Location = System::Drawing::Point(25, 171);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(31, 27);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(-4, 156);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 58);
			this->button2->TabIndex = 10;
			this->button2->Text = L"        DEFINICIONES";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &formInicio::button2_Click);
			this->button2->MouseLeave += gcnew System::EventHandler(this, &formInicio::button2_MouseLeave);
			this->button2->MouseHover += gcnew System::EventHandler(this, &formInicio::button2_MouseHover);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 53);
			this->button1->TabIndex = 7;
			this->button1->Text = L"FEM 3D";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 100);
			this->panel3->TabIndex = 20;
			// 
			// pictureBox4
			// 
			this->pictureBox4->ImageLocation = L"C:\\Recursos\\house.png";
			this->pictureBox4->Location = System::Drawing::Point(25, 105);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(31, 27);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// Home
			// 
			this->Home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->Home->FlatAppearance->BorderSize = 0;
			this->Home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Home->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Home->ForeColor = System::Drawing::Color::White;
			this->Home->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Home->Location = System::Drawing::Point(-4, 90);
			this->Home->Name = L"Home";
			this->Home->Size = System::Drawing::Size(183, 58);
			this->Home->TabIndex = 6;
			this->Home->Text = L"Inicio";
			this->Home->UseVisualStyleBackColor = false;
			this->Home->Click += gcnew System::EventHandler(this, &formInicio::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel2->Controls->Add(this->pictureBox13);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->ImeMode = System::Windows::Forms::ImeMode::On;
			this->panel2->Location = System::Drawing::Point(169, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(866, 53);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &formInicio::panel2_Paint);
			// 
			// pictureBox13
			// 
			this->pictureBox13->ImageLocation = L"C:\\Recursos\\pause.png";
			this->pictureBox13->Location = System::Drawing::Point(740, 9);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(42, 38);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 6;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &formInicio::pictureBox13_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->ImageLocation = L"C:\\Recursos\\off.png";
			this->pictureBox3->Location = System::Drawing::Point(786, 8);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(42, 38);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &formInicio::pictureBox3_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"C:\\Recursos\\logo.png";
			this->pictureBox1->Location = System::Drawing::Point(4, 2);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(176, 44);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &formInicio::pictureBox1_Click_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->ImageLocation = L"C:\\Recursos\\InicoCubo.gif";
			this->pictureBox2->Location = System::Drawing::Point(393, 248);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(379, 213);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->label1->Location = System::Drawing::Point(389, 151);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(396, 23);
			this->label1->TabIndex = 4;
			this->label1->Text = L" Método de los Elementos Finitos (MEF 3D) ";
			this->label1->Click += gcnew System::EventHandler(this, &formInicio::label1_Click_1);
			this->label1->MouseHover += gcnew System::EventHandler(this, &formInicio::label1_MouseHover);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->label2->Location = System::Drawing::Point(282, 499);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(606, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"El MEF es un método por aproximación numérica que parte del conocido Método Matri"
				L"cial, ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->label3->Location = System::Drawing::Point(282, 517);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(307, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"elevándolo de modo “discreto” a “continuo”.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->label4->Location = System::Drawing::Point(281, 534);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(624, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Se basa en transformar un cuerpo de naturaleza continua en un modelo discreto apr"
				L"oximado, ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->label5->Location = System::Drawing::Point(281, 551);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(271, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"se denomina discretización del modelo. ";
			// 
			// formInicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(1035, 695);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"formInicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bienvenido";
			this->Load += gcnew System::EventHandler(this, &formInicio::formInicio_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void formInicio_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	

}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	/*P1 - P2*/
	this->Hide();
	definiciones^ f1 = gcnew definiciones();
	f1->ShowDialog();
	this->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	/*P1 - P2*/
	this->Hide();
	P1^ f1 = gcnew P1();
	f1->ShowDialog();
	this->Show();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	/*P5 - P6*/
	this->Hide();
	P4^ f1 = gcnew P4();
	f1->ShowDialog();
	this->Show();
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	this -> panel4->Show();
}
private: System::Void button3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->panel4->Hide();
}
	
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	/*P2 - P3*/
	this->Hide();
	P2^ f1 = gcnew P2();
	f1->ShowDialog();
	this->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	/*P3 - P4*/
	this->Hide();
	P3^ f1 = gcnew P3();
	f1->ShowDialog();
	this->Show();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Componetes - Ensamblaje*/
	this->Hide();
	P5^ f1 = gcnew P5();
	f1->ShowDialog();
	this->Show();
}
private: System::Void button4_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	this->panel6->Show();
}
private: System::Void button4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->panel6->Hide();
}
private: System::Void button5_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	this->panel7->Show();
}
private: System::Void button5_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->panel7->Hide();
}
private: System::Void button6_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	this->panel8->Show();
}
private: System::Void button6_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->panel8->Hide();
}
private: System::Void button7_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	this->panel9->Show();
}
private: System::Void button7_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->panel9->Hide();
}
private: System::Void button8_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	this->panel10->Show();
}
private: System::Void button8_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->panel10->Hide();
}
private: System::Void button9_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	this->panel11->Show();
}
private: System::Void button9_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->panel11->Hide();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	/*P1 - P2*/
	this->Hide();
	P8^ f1 = gcnew P8();
	f1->ShowDialog();
	this->Show();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	ShellExecute(0, 0, L"https://github.com/lopezosv/SIMU/tree/master/Desafio", 0, 0, SW_SHOW);


	/*P1 - P2
	this->Hide();
	about^ f1 = gcnew about();
	f1->ShowDialog();
	this->Show();*/
}
private: System::Void button2_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	this->panel12->Show();
}
private: System::Void button2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->panel12->Hide();
}
private: System::Void pictureBox13_Click(System::Object^ sender, System::EventArgs^ e) {
	
	PlaySound(NULL, NULL, 0);

}
};


	
}


