#pragma once
#include "windowP.h"

namespace MyProgram {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для windowM
	/// </summary>
	public ref class windowM : public System::Windows::Forms::Form
	{
	public:
		windowM(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~windowM()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ welcome;
	private: System::Windows::Forms::Button^ addinfo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ delet;
	private: System::Windows::Forms::Button^ show;
	private: System::Windows::Forms::Button^ brightness;




	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(windowM::typeid));
			this->welcome = (gcnew System::Windows::Forms::Label());
			this->addinfo = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->delet = (gcnew System::Windows::Forms::Button());
			this->show = (gcnew System::Windows::Forms::Button());
			this->brightness = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// welcome
			// 
			this->welcome->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->welcome->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->welcome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->welcome->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->welcome->Location = System::Drawing::Point(90, 9);
			this->welcome->Name = L"welcome";
			this->welcome->Size = System::Drawing::Size(205, 42);
			this->welcome->TabIndex = 0;
			this->welcome->Text = L"Добро пожаловать!";
			this->welcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// addinfo
			// 
			this->addinfo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->addinfo->Location = System::Drawing::Point(25, 549);
			this->addinfo->Name = L"addinfo";
			this->addinfo->Size = System::Drawing::Size(33, 24);
			this->addinfo->TabIndex = 1;
			this->addinfo->Text = L"\?";
			this->addinfo->UseVisualStyleBackColor = true;
			this->addinfo->Click += gcnew System::EventHandler(this, &windowM::addinfo_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(12, 533);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Доп.инфор.";
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->plus->Location = System::Drawing::Point(99, 164);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(182, 30);
			this->plus->TabIndex = 3;
			this->plus->Text = L"Добавить дело";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &windowM::plus_Click);
			// 
			// delet
			// 
			this->delet->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->delet->Location = System::Drawing::Point(99, 214);
			this->delet->Name = L"delet";
			this->delet->Size = System::Drawing::Size(182, 30);
			this->delet->TabIndex = 3;
			this->delet->Text = L"Удалить дело";
			this->delet->UseVisualStyleBackColor = false;
			// 
			// show
			// 
			this->show->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->show->Location = System::Drawing::Point(99, 264);
			this->show->Name = L"show";
			this->show->Size = System::Drawing::Size(182, 30);
			this->show->TabIndex = 3;
			this->show->Text = L"Смотреть дела";
			this->show->UseVisualStyleBackColor = false;
			// 
			// brightness
			// 
			this->brightness->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->brightness->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"brightness.BackgroundImage")));
			this->brightness->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->brightness->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->brightness->Location = System::Drawing::Point(333, 533);
			this->brightness->Name = L"brightness";
			this->brightness->Size = System::Drawing::Size(39, 41);
			this->brightness->TabIndex = 4;
			this->brightness->Text = L"❋";
			this->brightness->UseVisualStyleBackColor = false;
			// 
			// windowM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(384, 585);
			this->Controls->Add(this->brightness);
			this->Controls->Add(this->show);
			this->Controls->Add(this->delet);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->addinfo);
			this->Controls->Add(this->welcome);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->MaximumSize = System::Drawing::Size(400, 900);
			this->MinimumSize = System::Drawing::Size(400, 39);
			this->Name = L"windowM";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"windowM";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	
private: System::Void addinfo_Click(System::Object^ sender, System::EventArgs^ e) 
{
	MessageBox::Show(this, "Приветстувую вас в своем приложении.\nДанную работу я выполнял в качество экзамена.", "Дополнительная информация");
}
private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Hide();
	windowP^ window = gcnew windowP();
	window->Show();
}
};
}
