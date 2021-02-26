#pragma once
#include <math.h>
#define PI 3.14159265

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtDisplay;
	protected:

	private: System::Windows::Forms::Button^ btncls;
	protected:

	private: System::Windows::Forms::Button^ btnmod;

	private: System::Windows::Forms::Button^ btndel;

	private: System::Windows::Forms::Button^ btndiv;

	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btnmul;




	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btnneg;




	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnplus;




	private: System::Windows::Forms::Button^ btn00;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ decimal;

	private: System::Windows::Forms::Button^ btnequal;
	private: System::Windows::Forms::Button^ btnPow;
	private: System::Windows::Forms::Button^ btnRoot;
	private: System::Windows::Forms::Button^ anyPow;
	private: System::Windows::Forms::Button^ oneOver;
	private: System::Windows::Forms::TextBox^ txtHist;
	private: System::Windows::Forms::Button^ btnFact;
	private: System::Windows::Forms::Button^ btnSin;
	private: System::Windows::Forms::Button^ btnCos;
	private: System::Windows::Forms::Button^ btnTan;
	private: System::Windows::Forms::Button^ btnLog;
	private: System::Windows::Forms::Button^ btnCbrt;



	private: System::ComponentModel::IContainer^ components;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btncls = (gcnew System::Windows::Forms::Button());
			this->btnmod = (gcnew System::Windows::Forms::Button());
			this->btndel = (gcnew System::Windows::Forms::Button());
			this->btndiv = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnmul = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnneg = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnplus = (gcnew System::Windows::Forms::Button());
			this->btn00 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->decimal = (gcnew System::Windows::Forms::Button());
			this->btnequal = (gcnew System::Windows::Forms::Button());
			this->btnPow = (gcnew System::Windows::Forms::Button());
			this->btnRoot = (gcnew System::Windows::Forms::Button());
			this->anyPow = (gcnew System::Windows::Forms::Button());
			this->oneOver = (gcnew System::Windows::Forms::Button());
			this->txtHist = (gcnew System::Windows::Forms::TextBox());
			this->btnFact = (gcnew System::Windows::Forms::Button());
			this->btnSin = (gcnew System::Windows::Forms::Button());
			this->btnCos = (gcnew System::Windows::Forms::Button());
			this->btnTan = (gcnew System::Windows::Forms::Button());
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->btnCbrt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->txtDisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtDisplay->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Consolas", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->ForeColor = System::Drawing::Color::White;
			this->txtDisplay->Location = System::Drawing::Point(12, 12);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->ReadOnly = true;
			this->txtDisplay->ShortcutsEnabled = false;
			this->txtDisplay->Size = System::Drawing::Size(373, 109);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			// 
			// btncls
			// 
			this->btncls->BackColor = System::Drawing::Color::Red;
			this->btncls->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btncls->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btncls->FlatAppearance->BorderSize = 0;
			this->btncls->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncls->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncls->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btncls->Location = System::Drawing::Point(11, 126);
			this->btncls->Name = L"btncls";
			this->btncls->Size = System::Drawing::Size(70, 70);
			this->btncls->TabIndex = 1;
			this->btncls->Text = L"C";
			this->btncls->UseVisualStyleBackColor = false;
			this->btncls->Click += gcnew System::EventHandler(this, &MyForm::btnClear);
			// 
			// btnmod
			// 
			this->btnmod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnmod->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnmod->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnmod->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmod->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnmod->Location = System::Drawing::Point(315, 127);
			this->btnmod->Name = L"btnmod";
			this->btnmod->Size = System::Drawing::Size(70, 70);
			this->btnmod->TabIndex = 1;
			this->btnmod->Text = L"%";
			this->btnmod->UseVisualStyleBackColor = false;
			this->btnmod->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btndel
			// 
			this->btndel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btndel->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btndel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btndel->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btndel->Location = System::Drawing::Point(239, 127);
			this->btndel->Name = L"btndel";
			this->btndel->Size = System::Drawing::Size(70, 70);
			this->btndel->TabIndex = 1;
			this->btndel->Text = L"DEL";
			this->btndel->UseVisualStyleBackColor = false;
			this->btndel->Click += gcnew System::EventHandler(this, &MyForm::btnDelete);
			// 
			// btndiv
			// 
			this->btndiv->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btndiv->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btndiv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btndiv->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndiv->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btndiv->Location = System::Drawing::Point(239, 202);
			this->btndiv->Name = L"btndiv";
			this->btndiv->Size = System::Drawing::Size(70, 70);
			this->btndiv->TabIndex = 1;
			this->btndiv->Text = L"÷";
			this->btndiv->UseVisualStyleBackColor = false;
			this->btndiv->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn7
			// 
			this->btn7->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn7->Location = System::Drawing::Point(11, 278);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(70, 70);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn8
			// 
			this->btn8->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn8->Location = System::Drawing::Point(87, 278);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(70, 70);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn9
			// 
			this->btn9->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn9->Location = System::Drawing::Point(163, 278);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(70, 70);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnmul
			// 
			this->btnmul->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnmul->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnmul->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnmul->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmul->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnmul->Location = System::Drawing::Point(239, 278);
			this->btnmul->Name = L"btnmul";
			this->btnmul->Size = System::Drawing::Size(70, 70);
			this->btnmul->TabIndex = 1;
			this->btnmul->Text = L"×";
			this->btnmul->UseVisualStyleBackColor = false;
			this->btnmul->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn4
			// 
			this->btn4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn4->Location = System::Drawing::Point(11, 354);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(70, 70);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn5
			// 
			this->btn5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn5->Location = System::Drawing::Point(87, 354);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(70, 70);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn6
			// 
			this->btn6->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn6->Location = System::Drawing::Point(163, 354);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(70, 70);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnneg
			// 
			this->btnneg->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnneg->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnneg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnneg->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnneg->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnneg->Location = System::Drawing::Point(239, 354);
			this->btnneg->Name = L"btnneg";
			this->btnneg->Size = System::Drawing::Size(70, 70);
			this->btnneg->TabIndex = 1;
			this->btnneg->Text = L"-";
			this->btnneg->UseVisualStyleBackColor = false;
			this->btnneg->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn1
			// 
			this->btn1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn1->Location = System::Drawing::Point(11, 430);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(70, 70);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn2
			// 
			this->btn2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn2->Location = System::Drawing::Point(87, 430);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(70, 70);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn3
			// 
			this->btn3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn3->Location = System::Drawing::Point(163, 430);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(70, 70);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnplus
			// 
			this->btnplus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnplus->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnplus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnplus->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnplus->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnplus->Location = System::Drawing::Point(239, 430);
			this->btnplus->Name = L"btnplus";
			this->btnplus->Size = System::Drawing::Size(70, 70);
			this->btnplus->TabIndex = 1;
			this->btnplus->Text = L"+";
			this->btnplus->UseVisualStyleBackColor = false;
			this->btnplus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn00
			// 
			this->btn00->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn00->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn00->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn00->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn00->Location = System::Drawing::Point(11, 506);
			this->btn00->Name = L"btn00";
			this->btn00->Size = System::Drawing::Size(70, 70);
			this->btn00->TabIndex = 1;
			this->btn00->Text = L"00";
			this->btn00->UseVisualStyleBackColor = true;
			this->btn00->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn0
			// 
			this->btn0->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn0->Location = System::Drawing::Point(87, 506);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(70, 70);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// decimal
			// 
			this->decimal->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->decimal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->decimal->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decimal->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->decimal->Location = System::Drawing::Point(163, 506);
			this->decimal->Name = L"decimal";
			this->decimal->Size = System::Drawing::Size(70, 70);
			this->decimal->TabIndex = 1;
			this->decimal->Text = L".";
			this->decimal->UseVisualStyleBackColor = true;
			this->decimal->Click += gcnew System::EventHandler(this, &MyForm::btnDecimal);
			// 
			// btnequal
			// 
			this->btnequal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnequal->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnequal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnequal->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnequal->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnequal->Location = System::Drawing::Point(239, 506);
			this->btnequal->Name = L"btnequal";
			this->btnequal->Size = System::Drawing::Size(70, 70);
			this->btnequal->TabIndex = 1;
			this->btnequal->Text = L"=";
			this->btnequal->UseVisualStyleBackColor = false;
			this->btnequal->Click += gcnew System::EventHandler(this, &MyForm::btnEquals);
			// 
			// btnPow
			// 
			this->btnPow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnPow->FlatAppearance->BorderSize = 0;
			this->btnPow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPow->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPow->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnPow->Location = System::Drawing::Point(87, 126);
			this->btnPow->Name = L"btnPow";
			this->btnPow->Size = System::Drawing::Size(70, 70);
			this->btnPow->TabIndex = 2;
			this->btnPow->Text = L"x²";
			this->btnPow->UseVisualStyleBackColor = false;
			this->btnPow->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnRoot
			// 
			this->btnRoot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnRoot->FlatAppearance->BorderSize = 0;
			this->btnRoot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRoot->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRoot->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnRoot->Location = System::Drawing::Point(163, 127);
			this->btnRoot->Name = L"btnRoot";
			this->btnRoot->Size = System::Drawing::Size(70, 70);
			this->btnRoot->TabIndex = 3;
			this->btnRoot->Text = L"√";
			this->btnRoot->UseVisualStyleBackColor = false;
			this->btnRoot->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// anyPow
			// 
			this->anyPow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->anyPow->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->anyPow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->anyPow->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->anyPow->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->anyPow->Location = System::Drawing::Point(87, 202);
			this->anyPow->Name = L"anyPow";
			this->anyPow->Size = System::Drawing::Size(70, 70);
			this->anyPow->TabIndex = 1;
			this->anyPow->Text = L"x^n";
			this->anyPow->UseVisualStyleBackColor = false;
			this->anyPow->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// oneOver
			// 
			this->oneOver->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->oneOver->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->oneOver->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->oneOver->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->oneOver->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->oneOver->Location = System::Drawing::Point(11, 202);
			this->oneOver->Name = L"oneOver";
			this->oneOver->Size = System::Drawing::Size(70, 70);
			this->oneOver->TabIndex = 1;
			this->oneOver->Text = L"1/x";
			this->oneOver->UseVisualStyleBackColor = false;
			this->oneOver->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// txtHist
			// 
			this->txtHist->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->txtHist->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtHist->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtHist->ForeColor = System::Drawing::SystemColors::Window;
			this->txtHist->Location = System::Drawing::Point(15, 94);
			this->txtHist->Multiline = true;
			this->txtHist->Name = L"txtHist";
			this->txtHist->Size = System::Drawing::Size(364, 26);
			this->txtHist->TabIndex = 4;
			this->txtHist->Text = L"0";
			this->txtHist->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtHist->TextChanged += gcnew System::EventHandler(this, &MyForm::txtHist_TextChanged);
			// 
			// btnFact
			// 
			this->btnFact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnFact->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnFact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFact->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFact->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnFact->Location = System::Drawing::Point(315, 202);
			this->btnFact->Name = L"btnFact";
			this->btnFact->Size = System::Drawing::Size(70, 70);
			this->btnFact->TabIndex = 1;
			this->btnFact->Text = L"!";
			this->btnFact->UseVisualStyleBackColor = false;
			this->btnFact->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnSin
			// 
			this->btnSin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnSin->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnSin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSin->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSin->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnSin->Location = System::Drawing::Point(315, 278);
			this->btnSin->Name = L"btnSin";
			this->btnSin->Size = System::Drawing::Size(70, 70);
			this->btnSin->TabIndex = 1;
			this->btnSin->Text = L"sin";
			this->btnSin->UseVisualStyleBackColor = false;
			this->btnSin->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnCos
			// 
			this->btnCos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnCos->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnCos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCos->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCos->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnCos->Location = System::Drawing::Point(315, 354);
			this->btnCos->Name = L"btnCos";
			this->btnCos->Size = System::Drawing::Size(70, 70);
			this->btnCos->TabIndex = 1;
			this->btnCos->Text = L"cos";
			this->btnCos->UseVisualStyleBackColor = false;
			this->btnCos->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnTan
			// 
			this->btnTan->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnTan->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnTan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTan->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTan->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnTan->Location = System::Drawing::Point(315, 430);
			this->btnTan->Name = L"btnTan";
			this->btnTan->Size = System::Drawing::Size(70, 70);
			this->btnTan->TabIndex = 1;
			this->btnTan->Text = L"tan";
			this->btnTan->UseVisualStyleBackColor = false;
			this->btnTan->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnLog
			// 
			this->btnLog->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnLog->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnLog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLog->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLog->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnLog->Location = System::Drawing::Point(315, 506);
			this->btnLog->Name = L"btnLog";
			this->btnLog->Size = System::Drawing::Size(70, 70);
			this->btnLog->TabIndex = 1;
			this->btnLog->Text = L"log";
			this->btnLog->UseVisualStyleBackColor = false;
			this->btnLog->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnCbrt
			// 
			this->btnCbrt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnCbrt->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnCbrt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCbrt->Font = (gcnew System::Drawing::Font(L"Consolas", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCbrt->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnCbrt->Location = System::Drawing::Point(163, 202);
			this->btnCbrt->Name = L"btnCbrt";
			this->btnCbrt->Size = System::Drawing::Size(70, 70);
			this->btnCbrt->TabIndex = 1;
			this->btnCbrt->Text = L"∛";
			this->btnCbrt->UseVisualStyleBackColor = false;
			this->btnCbrt->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->ClientSize = System::Drawing::Size(396, 586);
			this->Controls->Add(this->txtHist);
			this->Controls->Add(this->btnRoot);
			this->Controls->Add(this->btnPow);
			this->Controls->Add(this->btnequal);
			this->Controls->Add(this->btnplus);
			this->Controls->Add(this->btnneg);
			this->Controls->Add(this->btnmul);
			this->Controls->Add(this->anyPow);
			this->Controls->Add(this->oneOver);
			this->Controls->Add(this->btnCbrt);
			this->Controls->Add(this->btnLog);
			this->Controls->Add(this->btnTan);
			this->Controls->Add(this->btnCos);
			this->Controls->Add(this->btnSin);
			this->Controls->Add(this->btnFact);
			this->Controls->Add(this->btndiv);
			this->Controls->Add(this->decimal);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btndel);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn00);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnmod);
			this->Controls->Add(this->btncls);
			this->Controls->Add(this->txtDisplay);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Opacity = 0.99;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::btnFORM);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double num1, num2, res, rad;
		String^ operators;
		String^ str;
		String^ s2;
		String^ s = u8"\u221A"; //Symbol for square root
		String^ s3 = u8"\u221B";//Symbol for cube root

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);

		if (txtDisplay->Text == "0") {
			txtDisplay->Text = Numbers->Text;
			txtHist->Text = Numbers->Text;
		}
		else {
			txtDisplay->Text = txtDisplay->Text+ Numbers->Text;
			txtHist->Text = txtHist->Text + Numbers->Text;
		}
	}
	private: System::Void btnDecimal(System::Object^ sender, System::EventArgs^ e) {

		if (!txtDisplay->Text->Contains(".")) {
			txtDisplay->Text = txtDisplay->Text + ".";
			txtHist->Text = txtHist->Text + ".";
		}
	}
	private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
		Button^ NumbersOp = safe_cast<Button^>(sender);
		s2 = System::Convert::ToString(txtDisplay->Text);
		num1 = Double::Parse(txtDisplay->Text);
		if (NumbersOp->Text == "x²") {
			res = num1 * num1;
			txtDisplay->Text = System::Convert::ToString(res);
			str = System::Convert::ToString(res);
			txtHist->Text = s2 + "^2" +  "=" + str;
		}
		else if (NumbersOp->Text == s) {
			res = sqrt(num1);
			txtDisplay->Text = System::Convert::ToString(res);
			str = System::Convert::ToString(res);
			
			txtHist->Text = s + s2+"="+str;
		}
		else if (NumbersOp->Text == "1/x") {
			res = 1/num1;
			txtDisplay->Text = System::Convert::ToString(res);
			str = System::Convert::ToString(res);
			txtHist->Text = "1/" + s2 + "=" + str;
		}
		else if (NumbersOp->Text == "!") {
			res = 1;
			for (int i = 1; i <= num1; i++) {
				res *= i;
			}
			txtDisplay->Text = System::Convert::ToString(res);
			str = System::Convert::ToString(res);
			txtHist->Text =  txtHist->Text + "!" + "=" + str;
		}
		else if (NumbersOp->Text == "sin") {
			rad = num1 * PI / 180;
			res = sin(rad);
			txtDisplay->Text = System::Convert::ToString(res);
			str = System::Convert::ToString(res);
			txtHist->Text = "sin " + txtHist->Text + "=" + str;
		}
		else if (NumbersOp->Text == "cos") {
			rad = num1 * PI / 180;
			res = cos(rad);
			txtDisplay->Text = System::Convert::ToString(res);
			str = System::Convert::ToString(res);
			txtHist->Text = "cos " + txtHist->Text + "=" + str;
		}
		else if (NumbersOp->Text == "tan") {
			rad = num1 * PI / 180;
			res = tan(rad);
			txtDisplay->Text = System::Convert::ToString(res);
			str = System::Convert::ToString(res);
			txtHist->Text = "tan " + txtHist->Text + "=" + str;
		}
		else if (NumbersOp->Text == "log") {
			res = log10(num1);
			txtDisplay->Text = System::Convert::ToString(res);
			str = System::Convert::ToString(res);
			txtHist->Text = "log " + txtHist->Text + "=" + str;
		}
		else if (NumbersOp->Text == s3) {
			res = cbrt(num1);
			txtDisplay->Text = System::Convert::ToString(res);
			str = System::Convert::ToString(res);
			txtHist->Text = s3 + s2 + "=" + str;
		}
		else {
			if (NumbersOp->Text == "x^n") {
				txtHist->Text = txtDisplay->Text + "^";
			}
			else {
				txtHist->Text = txtDisplay->Text + NumbersOp->Text;
			}
			txtDisplay->Text = "";
			operators = NumbersOp->Text; 
			
		}
	}
	private: System::Void btnEquals(System::Object^ sender, System::EventArgs^ e) {
		num2 = Double::Parse(txtDisplay->Text);
		//txtHist->Text = txtHist->Text + txtDisplay->Text;

		if (operators == "+") {
			res = num1 + num2;
			txtDisplay-> Text = System::Convert::ToString(res);
			str= System::Convert::ToString(res);
		}
		else if (operators == "-") {
			res = num1 - num2;
			txtDisplay->Text = System::Convert::ToString(res);
			str = System::Convert::ToString(res);
		}
		else if (operators == "×") {
			res = num1 * num2;
			txtDisplay->Text = System::Convert::ToString(res);
			str = System::Convert::ToString(res);
		}
		else if (operators == "÷") {
			res = num1 / num2;
			txtDisplay->Text = System::Convert::ToString(res);
			str = System::Convert::ToString(res);
		}
		else if (operators == "%") {
			res = (int)num1 % (int)num2;
			txtDisplay->Text = System::Convert::ToString(res);
			str = System::Convert::ToString(res);
		}
		else if (operators == "x^n") {
			res = pow(num1, num2);
			txtDisplay->Text = System::Convert::ToString(res); 
			str = System::Convert::ToString(res);
		}
		txtHist->Text = txtHist->Text +"="+str;
	}
	private: System::Void btnClear(System::Object^ sender, System::EventArgs^ e) {
		txtDisplay->Text = "0";
		txtHist->Text = "0";
	}
	private: System::Void btnDelete(System::Object^ sender, System::EventArgs^ e) {
		if (txtDisplay->Text->Length > 0) {
			txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
		}
	}
	private: System::Void txtHist_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnFORM(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
