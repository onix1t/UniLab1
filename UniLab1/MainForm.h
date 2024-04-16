#pragma once

namespace UniLab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{

	public:MainForm(void) {

		InitializeComponent();
	}



	protected:~MainForm() {

		if (components) {

			delete components;
		}
	}

			 // Пользовательские поля
	private: unsigned short int n1;								// Глобальная переменная, используемая для передачи в рекурсивную функцию значения из поля ввода, в области 1 и 2 рекурсии первой программы
	private: unsigned int count = 0;							// Глобальная переменная, используемая для фиксации количества рекурсивных вызовов в первой программе
	private: bool choiceСheck;									// Булевая переменная, отображающая выбранную рекурсию в первой программе
	private: array<UInt32>^ arr = gcnew array<UInt32>(250);		// Массив int, используемый для фиксирования введенной последовательности, в области второй программы
	private: System::Windows::Forms::Label^ fieldLabel1;


	private: System::Windows::Forms::Label^ radioLabel;
	private: System::Windows::Forms::Label^ progLabel1;
	private: System::Windows::Forms::Label^ resultLabel;
	private: System::Windows::Forms::Label^ formulaLabel;
	private: System::Windows::Forms::Label^ countLabel;
	private: System::Windows::Forms::GroupBox^ progBox1;
	private: System::Windows::Forms::GroupBox^ progBox2;
	private: System::Windows::Forms::Button^ resetBtn1;
	private: System::Windows::Forms::Button^ infoBtn1;
	private: System::Windows::Forms::Button^ startBtn1;
	private: System::Windows::Forms::Button^ startBtn2;
	private: System::Windows::Forms::Button^ resetBtn2;
	private: System::Windows::Forms::Label^ progLabel2;
	private: System::Windows::Forms::Button^ infoBtn2;
	private: System::Windows::Forms::Button^ inputBtn;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ errorTestBtn;
	private: System::Windows::Forms::RadioButton^ radioBtn2;
	private: System::Windows::Forms::RadioButton^ radioBtn1;
	private: System::Windows::Forms::TextBox^ textField1;
	private: System::Windows::Forms::TextBox^ textField2;
	private: System::Windows::Forms::Label^ resultNum;
	private: System::Windows::Forms::Label^ countNum;
	private: System::Windows::Forms::Label^ outputLabel;
	private: System::Windows::Forms::Label^ inputLabel;
	private: System::Windows::Forms::Label^ fieldLabel2;



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
			this->fieldLabel1 = (gcnew System::Windows::Forms::Label());
			this->radioLabel = (gcnew System::Windows::Forms::Label());
			this->progLabel1 = (gcnew System::Windows::Forms::Label());
			this->formulaLabel = (gcnew System::Windows::Forms::Label());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->countLabel = (gcnew System::Windows::Forms::Label());
			this->progBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->countNum = (gcnew System::Windows::Forms::Label());
			this->resultNum = (gcnew System::Windows::Forms::Label());
			this->textField1 = (gcnew System::Windows::Forms::TextBox());
			this->radioBtn2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtn1 = (gcnew System::Windows::Forms::RadioButton());
			this->infoBtn1 = (gcnew System::Windows::Forms::Button());
			this->startBtn1 = (gcnew System::Windows::Forms::Button());
			this->resetBtn1 = (gcnew System::Windows::Forms::Button());
			this->progBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->fieldLabel2 = (gcnew System::Windows::Forms::Label());
			this->textField2 = (gcnew System::Windows::Forms::TextBox());
			this->errorTestBtn = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->outputLabel = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->inputLabel = (gcnew System::Windows::Forms::Label());
			this->infoBtn2 = (gcnew System::Windows::Forms::Button());
			this->inputBtn = (gcnew System::Windows::Forms::Button());
			this->startBtn2 = (gcnew System::Windows::Forms::Button());
			this->resetBtn2 = (gcnew System::Windows::Forms::Button());
			this->progLabel2 = (gcnew System::Windows::Forms::Label());
			this->progBox1->SuspendLayout();
			this->progBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// fieldLabel1
			// 
			this->fieldLabel1->AutoSize = true;
			this->fieldLabel1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->fieldLabel1->Location = System::Drawing::Point(13, 53);
			this->fieldLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->fieldLabel1->Name = L"fieldLabel1";
			this->fieldLabel1->Size = System::Drawing::Size(69, 14);
			this->fieldLabel1->TabIndex = 0;
			this->fieldLabel1->Text = L"Поле ввода:";
			// 
			// radioLabel
			// 
			this->radioLabel->AutoSize = true;
			this->radioLabel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->radioLabel->Location = System::Drawing::Point(13, 81);
			this->radioLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->radioLabel->Name = L"radioLabel";
			this->radioLabel->Size = System::Drawing::Size(102, 14);
			this->radioLabel->TabIndex = 2;
			this->radioLabel->Text = L"Вариант рекурсии:";
			// 
			// progLabel1
			// 
			this->progLabel1->AutoSize = true;
			this->progLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->progLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->progLabel1->Location = System::Drawing::Point(12, 17);
			this->progLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->progLabel1->Name = L"progLabel1";
			this->progLabel1->Size = System::Drawing::Size(156, 18);
			this->progLabel1->TabIndex = 8;
			this->progLabel1->Text = L"Первая программа";
			// 
			// formulaLabel
			// 
			this->formulaLabel->AutoSize = true;
			this->formulaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->formulaLabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->formulaLabel->Location = System::Drawing::Point(13, 110);
			this->formulaLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->formulaLabel->Name = L"formulaLabel";
			this->formulaLabel->Size = System::Drawing::Size(329, 13);
			this->formulaLabel->TabIndex = 10;
			this->formulaLabel->Text = L"Здесь будет отображаться выбранный Вами вариант рекурсии";
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->resultLabel->Location = System::Drawing::Point(13, 179);
			this->resultLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(62, 14);
			this->resultLabel->TabIndex = 13;
			this->resultLabel->Text = L"Результат:";
			// 
			// countLabel
			// 
			this->countLabel->AutoSize = true;
			this->countLabel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->countLabel->Location = System::Drawing::Point(13, 201);
			this->countLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->countLabel->Name = L"countLabel";
			this->countLabel->Size = System::Drawing::Size(236, 14);
			this->countLabel->TabIndex = 14;
			this->countLabel->Text = L"Количество вызовов рекурсиивной функции:";
			// 
			// progBox1
			// 
			this->progBox1->Controls->Add(this->countNum);
			this->progBox1->Controls->Add(this->resultNum);
			this->progBox1->Controls->Add(this->textField1);
			this->progBox1->Controls->Add(this->radioBtn2);
			this->progBox1->Controls->Add(this->radioBtn1);
			this->progBox1->Controls->Add(this->infoBtn1);
			this->progBox1->Controls->Add(this->startBtn1);
			this->progBox1->Controls->Add(this->resetBtn1);
			this->progBox1->Controls->Add(this->countLabel);
			this->progBox1->Controls->Add(this->resultLabel);
			this->progBox1->Controls->Add(this->formulaLabel);
			this->progBox1->Controls->Add(this->progLabel1);
			this->progBox1->Controls->Add(this->fieldLabel1);
			this->progBox1->Controls->Add(this->radioLabel);
			this->progBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->progBox1->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->progBox1->Location = System::Drawing::Point(14, 1);
			this->progBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->progBox1->Name = L"progBox1";
			this->progBox1->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->progBox1->Size = System::Drawing::Size(492, 230);
			this->progBox1->TabIndex = 15;
			this->progBox1->TabStop = false;
			// 
			// countNum
			// 
			this->countNum->AutoSize = true;
			this->countNum->Location = System::Drawing::Point(295, 202);
			this->countNum->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->countNum->Name = L"countNum";
			this->countNum->Size = System::Drawing::Size(0, 14);
			this->countNum->TabIndex = 21;
			// 
			// resultNum
			// 
			this->resultNum->AutoSize = true;
			this->resultNum->Location = System::Drawing::Point(92, 179);
			this->resultNum->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultNum->Name = L"resultNum";
			this->resultNum->Size = System::Drawing::Size(0, 14);
			this->resultNum->TabIndex = 20;
			// 
			// textField1
			// 
			this->textField1->Location = System::Drawing::Point(100, 51);
			this->textField1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textField1->Name = L"textField1";
			this->textField1->Size = System::Drawing::Size(115, 20);
			this->textField1->TabIndex = 2;
			this->textField1->TextChanged += gcnew System::EventHandler(this, &MainForm::textField1TextChanged);
			// 
			// radioBtn2
			// 
			this->radioBtn2->AutoSize = true;
			this->radioBtn2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->radioBtn2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioBtn2->Location = System::Drawing::Point(182, 81);
			this->radioBtn2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->radioBtn2->Name = L"radioBtn2";
			this->radioBtn2->Size = System::Drawing::Size(37, 19);
			this->radioBtn2->TabIndex = 19;
			this->radioBtn2->TabStop = true;
			this->radioBtn2->Text = L"2";
			this->radioBtn2->UseVisualStyleBackColor = false;
			this->radioBtn2->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioBtn2_CheckedChanged);
			// 
			// radioBtn1
			// 
			this->radioBtn1->AutoSize = true;
			this->radioBtn1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->radioBtn1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioBtn1->Location = System::Drawing::Point(139, 81);
			this->radioBtn1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->radioBtn1->Name = L"radioBtn1";
			this->radioBtn1->Size = System::Drawing::Size(37, 19);
			this->radioBtn1->TabIndex = 18;
			this->radioBtn1->TabStop = true;
			this->radioBtn1->Text = L"1";
			this->radioBtn1->UseVisualStyleBackColor = false;
			this->radioBtn1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioBtn1_CheckedChanged);
			// 
			// infoBtn1
			// 
			this->infoBtn1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->infoBtn1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->infoBtn1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->infoBtn1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->infoBtn1->Location = System::Drawing::Point(386, 197);
			this->infoBtn1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->infoBtn1->Name = L"infoBtn1";
			this->infoBtn1->Size = System::Drawing::Size(99, 24);
			this->infoBtn1->TabIndex = 17;
			this->infoBtn1->Text = L"Информация";
			this->infoBtn1->UseVisualStyleBackColor = false;
			this->infoBtn1->Click += gcnew System::EventHandler(this, &MainForm::infoBtn1_Click);
			// 
			// startBtn1
			// 
			this->startBtn1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->startBtn1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->startBtn1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->startBtn1->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startBtn1->Location = System::Drawing::Point(309, 51);
			this->startBtn1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->startBtn1->Name = L"startBtn1";
			this->startBtn1->Size = System::Drawing::Size(176, 46);
			this->startBtn1->TabIndex = 16;
			this->startBtn1->Text = L"Запуск";
			this->startBtn1->UseVisualStyleBackColor = false;
			this->startBtn1->Click += gcnew System::EventHandler(this, &MainForm::startBtn1_Click);
			// 
			// resetBtn1
			// 
			this->resetBtn1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->resetBtn1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->resetBtn1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->resetBtn1->Location = System::Drawing::Point(225, 51);
			this->resetBtn1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->resetBtn1->Name = L"resetBtn1";
			this->resetBtn1->Size = System::Drawing::Size(75, 46);
			this->resetBtn1->TabIndex = 15;
			this->resetBtn1->Text = L"Очистить поля";
			this->resetBtn1->UseVisualStyleBackColor = false;
			this->resetBtn1->Click += gcnew System::EventHandler(this, &MainForm::resetBtn1_Click);
			// 
			// progBox2
			// 
			this->progBox2->Controls->Add(this->fieldLabel2);
			this->progBox2->Controls->Add(this->textField2);
			this->progBox2->Controls->Add(this->errorTestBtn);
			this->progBox2->Controls->Add(this->groupBox4);
			this->progBox2->Controls->Add(this->groupBox3);
			this->progBox2->Controls->Add(this->infoBtn2);
			this->progBox2->Controls->Add(this->inputBtn);
			this->progBox2->Controls->Add(this->startBtn2);
			this->progBox2->Controls->Add(this->resetBtn2);
			this->progBox2->Controls->Add(this->progLabel2);
			this->progBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->progBox2->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->progBox2->Location = System::Drawing::Point(14, 238);
			this->progBox2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->progBox2->Name = L"progBox2";
			this->progBox2->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->progBox2->Size = System::Drawing::Size(492, 261);
			this->progBox2->TabIndex = 16;
			this->progBox2->TabStop = false;
			// 
			// fieldLabel2
			// 
			this->fieldLabel2->AutoSize = true;
			this->fieldLabel2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->fieldLabel2->Location = System::Drawing::Point(19, 58);
			this->fieldLabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->fieldLabel2->Name = L"fieldLabel2";
			this->fieldLabel2->Size = System::Drawing::Size(69, 14);
			this->fieldLabel2->TabIndex = 37;
			this->fieldLabel2->Text = L"Поле ввода:";
			// 
			// textField2
			// 
			this->textField2->Location = System::Drawing::Point(100, 55);
			this->textField2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textField2->Name = L"textField2";
			this->textField2->Size = System::Drawing::Size(139, 20);
			this->textField2->TabIndex = 21;
			// 
			// errorTestBtn
			// 
			this->errorTestBtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->errorTestBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->errorTestBtn->Location = System::Drawing::Point(22, 230);
			this->errorTestBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->errorTestBtn->Name = L"errorTestBtn";
			this->errorTestBtn->Size = System::Drawing::Size(324, 24);
			this->errorTestBtn->TabIndex = 36;
			this->errorTestBtn->Text = L"Протестировать программы на наличие ошибок";
			this->errorTestBtn->UseVisualStyleBackColor = false;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox4->Controls->Add(this->outputLabel);
			this->groupBox4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox4->Location = System::Drawing::Point(354, 55);
			this->groupBox4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox4->Size = System::Drawing::Size(86, 157);
			this->groupBox4->TabIndex = 35;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Вывод";
			// 
			// outputLabel
			// 
			this->outputLabel->AutoSize = true;
			this->outputLabel->Location = System::Drawing::Point(7, 17);
			this->outputLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->outputLabel->Name = L"outputLabel";
			this->outputLabel->Size = System::Drawing::Size(0, 14);
			this->outputLabel->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox3->Controls->Add(this->inputLabel);
			this->groupBox3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox3->Location = System::Drawing::Point(260, 55);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox3->Size = System::Drawing::Size(86, 157);
			this->groupBox3->TabIndex = 34;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ввод";
			// 
			// inputLabel
			// 
			this->inputLabel->AutoSize = true;
			this->inputLabel->Location = System::Drawing::Point(7, 17);
			this->inputLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->inputLabel->Name = L"inputLabel";
			this->inputLabel->Size = System::Drawing::Size(0, 14);
			this->inputLabel->TabIndex = 0;
			// 
			// infoBtn2
			// 
			this->infoBtn2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->infoBtn2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->infoBtn2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->infoBtn2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->infoBtn2->Location = System::Drawing::Point(386, 230);
			this->infoBtn2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->infoBtn2->Name = L"infoBtn2";
			this->infoBtn2->Size = System::Drawing::Size(99, 24);
			this->infoBtn2->TabIndex = 18;
			this->infoBtn2->Text = L"Информация";
			this->infoBtn2->UseVisualStyleBackColor = false;
			this->infoBtn2->Click += gcnew System::EventHandler(this, &MainForm::infoBtn2_Click);
			// 
			// inputBtn
			// 
			this->inputBtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->inputBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->inputBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->inputBtn->Location = System::Drawing::Point(139, 83);
			this->inputBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->inputBtn->Name = L"inputBtn";
			this->inputBtn->Size = System::Drawing::Size(102, 33);
			this->inputBtn->TabIndex = 30;
			this->inputBtn->Text = L"Ввести";
			this->inputBtn->UseVisualStyleBackColor = false;
			this->inputBtn->Click += gcnew System::EventHandler(this, &MainForm::inputBtn_Click);
			// 
			// startBtn2
			// 
			this->startBtn2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->startBtn2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->startBtn2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->startBtn2->Location = System::Drawing::Point(22, 123);
			this->startBtn2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->startBtn2->Name = L"startBtn2";
			this->startBtn2->Size = System::Drawing::Size(218, 89);
			this->startBtn2->TabIndex = 28;
			this->startBtn2->Text = L"Запуск";
			this->startBtn2->UseVisualStyleBackColor = false;
			this->startBtn2->Click += gcnew System::EventHandler(this, &MainForm::startBtn2_Click);
			// 
			// resetBtn2
			// 
			this->resetBtn2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->resetBtn2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->resetBtn2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->resetBtn2->Location = System::Drawing::Point(22, 83);
			this->resetBtn2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->resetBtn2->Name = L"resetBtn2";
			this->resetBtn2->Size = System::Drawing::Size(110, 33);
			this->resetBtn2->TabIndex = 27;
			this->resetBtn2->Text = L"Очистить поля";
			this->resetBtn2->UseVisualStyleBackColor = false;
			this->resetBtn2->Click += gcnew System::EventHandler(this, &MainForm::resetBtn2_Click);
			// 
			// progLabel2
			// 
			this->progLabel2->AutoSize = true;
			this->progLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->progLabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->progLabel2->Location = System::Drawing::Point(18, 17);
			this->progLabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->progLabel2->Name = L"progLabel2";
			this->progLabel2->Size = System::Drawing::Size(155, 18);
			this->progLabel2->TabIndex = 20;
			this->progLabel2->Text = L"Вторая программа";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(523, 514);
			this->Controls->Add(this->progBox2);
			this->Controls->Add(this->progBox1);
			this->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторная работа №1 - Рекурсия";
			this->progBox1->ResumeLayout(false);
			this->progBox1->PerformLayout();
			this->progBox2->ResumeLayout(false);
			this->progBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion

	private: int recursion1(unsigned int n) {
		++count;

		if (n <= 1) {
			return 2;
		}
		else if (n > 1 && n % 2 != 0) {
			return (1 + recursion1(n - 1) * recursion1(n - 2) - recursion1(n - 1) - recursion1(n - 2));
		}
		return 0;
	}

	private: int recursion2(unsigned int n) {
		++count;

		if (n == 1) {
			return 1;
		}
		else if (n == 2) {
			return 2;
		}
		else if (n > 2 && n % 2 == 0) {
			return((7 * n + recursion2(n - 3)) / 9);
		}
		else if (n > 2 && n % 2 != 0) {
			return ((5 * n + recursion2(n - 1) + recursion2(n - 2)) / 7);
		}
		return 0;
	}

	private: array<int>^ ConvertToIntegerArray(array<String^>^ strings) {
		return ConvertToIntegerArrayRecursive(strings, 0);
	}

	private: array<int>^ ConvertToIntegerArrayRecursive(array<String^>^ strings, int index) {
		// Базовый случай: если индекс вышел за границы массива, возвращаем пустой массив.
		if (index >= strings->Length)
			return gcnew array<int>(0);

		// Рекурсивный случай: конвертируем текущую строку в число и вызываем функцию для следующей строки.
		array<int>^ convertedArray = ConvertToIntegerArrayRecursive(strings, index + 1);

		// Конвертируем текущую строку в число и добавляем его в начало результирующего массива.
		int number = System::Convert::ToInt32(strings[index]);
		array<int>^ result = gcnew array<int>(convertedArray->Length + 1);
		result[0] = number;
		Array::Copy(convertedArray, 0, result, 1, convertedArray->Length);

		return result;
	}


	private: bool validatyCheckFor1() {

		String^ errorOverFlow = "";
		String^ errorOverFlow1 = "В целях безопасноси для рекурсии первого вида программа не принимает значения выше 51.";
		String^ errorOverFlow2 = "При выборе первого варианта рекурсивной функции вводимое значение, которое больше единицы, должно быть нечётным.";

		try {

			if (this->radioBtn1->Checked == true && this->textField1->Text != "") {
				int dataN = System::Convert::ToInt32(this->textField1->Text);

				if (dataN > 51) {
					errorOverFlow = errorOverFlow1;
					throw errorOverFlow;
				}
				else if (dataN > 1 && dataN % 2 == 0) {
					errorOverFlow = errorOverFlow2;
					throw errorOverFlow;
				}

			}
		}
		catch (String^ errorOverFlow) {
			this->textField1->ForeColor = Color::Red;
			System::Windows::Forms::DialogResult result = MessageBox::Show(errorOverFlow, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

			if (result == System::Windows::Forms::DialogResult::OK)
			{
				this->textField1->Text = "";
				this->textField1->ForeColor = Color::Black;
				this->radioBtn1->Checked = false;
				this->radioBtn2->Checked = false;
			}
		}
		return 0;
	}

	private: bool validatyCheckFor2() {

		String^ errorOverFlow = "";
		String^ errorOverFlow1 = "В целях безопасноси для рекурсии второго вида программа не принимает значения выше 80.";
		String^ errorOverFlow2 = "При выборе второй рекурсивной функции вводимое значение должно быть не меньше единицы.";

		try {
			if (this->radioBtn2->Checked == true && this->textField1->Text != "") {
				int dataN = System::Convert::ToInt32(this->textField1->Text);

				if (dataN > 80) {
					errorOverFlow = errorOverFlow1;
					throw errorOverFlow;
				}
				else if (dataN < 1) {
					errorOverFlow = errorOverFlow2;
					throw errorOverFlow;
				}

			}
		}
		catch (String^ errorOverFlow) {
			this->textField1->ForeColor = Color::Red;
			System::Windows::Forms::DialogResult result = MessageBox::Show(errorOverFlow, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

			if (result == System::Windows::Forms::DialogResult::OK) {
				this->textField1->Text = "";
				this->textField1->ForeColor = Color::Black;
				this->radioBtn1->Checked = false;
				this->radioBtn2->Checked = false;
			}
		}
		return 0;
	}

	private: System::Void radioBtn1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		validatyCheckFor1();
		if (validatyCheckFor1() == true) {
			this->radioBtn1->Checked = false;
			this->radioBtn2->Checked = false;
		}

		if (this->radioBtn1->Checked == true) {
			this->formulaLabel->Text = "F(n) = 2, при n <=1;\nF(n) = 1 + F(n - 1) * F(n - 2) - F(n - 1) - F(n - 2), если n > 1 и при этом n нечётно;";
			choiceСheck = true;
		}
		else {
			this->formulaLabel->Text = "Здесь будет отображаться выбранный Вами вариант рекурсии";
		}

	}

	private: System::Void radioBtn2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		validatyCheckFor2();
		if (validatyCheckFor2() == true) {
			this->radioBtn1->Checked = false;
			this->radioBtn2->Checked = false;
		}

		if (this->radioBtn2->Checked == true) {
			this->formulaLabel->Text = "F(n) = 1, при n = 1;\nF(n) = 2, при n = 2;\nF(n) = [(7 * n + F(n - 3)) / 9], если n > 2 и при этом n четно\nF(n) = [(5 * n + F(n - 1) + F(n - 2)) / 7], если n > 2 и при этом n";
			choiceСheck = false;
		}
		else {
			this->formulaLabel->Text = "Здесь будет отображаться выбранный Вами вариант рекурсии";
		}

	}

	private: System::Void textField1TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		validatyCheckFor1();
		validatyCheckFor2();
	};

	private: System::Void startBtn1_Click(System::Object^ sender, System::EventArgs^ e) {

		count = 0;

		if (this->textField1->Text == "") {
			MessageBox::Show("Введите значение в \"Поле ввода\" для начала подсчета.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (this->radioBtn1->Checked == false && this->radioBtn2->Checked == false) {
			MessageBox::Show("Выберите один из двух вариантов рекурсии для начала подсчета.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (this->textField1->Text != "") {
			this->n1 = System::Convert::ToInt32(this->textField1->Text);
			if (this->radioBtn1->Checked || this->radioBtn2->Checked)
			{
				if (choiceСheck == true)
				{
					this->resultNum->Text = System::Convert::ToString(recursion1(n1));
					this->countNum->Text = System::Convert::ToString(count);
				}
				else
				{
					this->resultNum->Text = System::Convert::ToString(recursion2(n1));
					this->countNum->Text = System::Convert::ToString(count);
				}
			}

		}
	}

	private: System::Void resetBtn1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textField1->Text = "";
		this->formulaLabel->Text = "Здесь будет отображаться выбранный Вами вариант рекурсии";
		this->resultNum->Text = "";
		this->countNum->Text = "";
		this->radioBtn1->Checked = false;
		this->radioBtn2->Checked = false;
	}

	private: System::Void infoBtn1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Работа с первой программой\n\nДля работы с рекурсивными функциями:\r\n\r\n1. Введите данные.\n    Для ввода значений введите данные в поле ввода.\n    Максимальное значение для первой рекурсии - 51.\n    Максимальное значение для второй рекурсии - 80.\r\n\r\n2. Выберите вариант рекурсивной функции.\n    После выбора рекурсии ниже будет выведена\n    формула выбранной Вами рекурсивной функции.\r\n\r\n3. Запустите программу.\n    Нажмине кнопку \"Запуск\" для запуска рекурсии.\r\n\r\nПосле запуска рекурсии будет выведен результат рекурсивных вычислений и количество вызовов рекурсивной функции.\r\n\r\nДля повторного использования программы нажмите кнопку \"Очистить поля\" и повторите вышеперечисленные действия.", "Информация о работе программы", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private:System::Void inputBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->textField1->Text == " ") {
			MessageBox::Show("Введите значение элемента массива в \"Поле ввода\" прежде чем нажать на кнопку \"Ввести\" .", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (inputLabel->Text->Split('\n')->Length - 1 >= 9) {
			MessageBox::Show("Максимальное количество элементов в массиве достигнуто.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (!textField2->Text->Equals("")) {
			int num = System::Convert::ToInt32(textField2->Text);
			this->textField2->Text = "";

			if (inputLabel->Text->Split('\n')->Length - 1 == 8 && num != 0) {
				MessageBox::Show("Девятый введенный элемент должен быть нулем.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}


			if (inputLabel->Text->Split('\n')->Length - 1 == 8 && num != 0) {
				inputLabel->Text = inputLabel->Text->Substring(0, inputLabel->Text->LastIndexOf('\n'));
			}

			inputLabel->Text += num + "\r\n";

		}

	}

	private: System::Void startBtn2_Click(System::Object^ sender, System::EventArgs^ e) {
		array<String^>^ numbers = inputLabel->Text->Split(gcnew array<wchar_t> {'\n', '\r'}, StringSplitOptions::RemoveEmptyEntries);

		// Обработка ошибок
		if (numbers->Length == 0) {
			MessageBox::Show("Введите хотя бы один элемент для начала подсчета.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (numbers[numbers->Length - 1] != "0") {
			MessageBox::Show("Для начала подсчета нечетных элементов введите ноль в качестве последнего элемента массива.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		Array::Resize(numbers, numbers->Length - 1);

		// Преобразование строк в целые числа с использованием рекурсивной функции
		array<int>^ arr = ConvertToIntegerArray(numbers);

		// Остальная часть кода без изменений
		array<int>^ oddIndices = gcnew array<int>(arr->Length);
		int oddCount = 0;

		for (int i = 0; i < arr->Length; ++i) {
			if (arr[i] % 2 != 0) {
				oddIndices[oddCount++] = i;
			}
		}

		array<int>^ oddElements = gcnew array<int>(oddCount);

		for (int i = 0; i < oddCount; ++i) {
			oddElements[i] = arr[oddIndices[i]];
		}

		outputLabel->Text = "";
		for (int i = 0; i < oddCount; ++i) {
			outputLabel->Text += oddElements[i] + "\r\n";
		}
	}


	private: System::Void resetBtn2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->inputLabel->Text = "";
		this->outputLabel->Text = "";
		this->textField2->Text = "";
	}

	private: System::Void infoBtn2_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Работа со второй программой\r\n\r\nДля работы с программой:\r\n\r\n1. Введите последовательность в поле ввода по одному\n    элементу.\r\n\r\n2. Чтобы добавить элемент в программу нажмите\n    кнопку \"Ввести\", после чего элемент будет добавлен\n    в поле\"Ввод\".\r\n\r\n3. Для запуска программы нажмите кнопку \"Запуск\".\r\n\r\nДля повторного использования программы нажмите кнопку \"Очистить поля\" и повторие вышеперечисленные действия.", "Информация о работе программы", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	};
}
