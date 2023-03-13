#pragma once
#include "Header.h"
namespace MyProgram {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для windowP
	/// </summary>
	public ref class windowP : public System::Windows::Forms::Form
	{
	public:
		windowP(void)
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
		~windowP()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::TextBox^ priority;
	private: System::Windows::Forms::TextBox^ descrip;
	private: System::Windows::Forms::Button^ result;
	private: System::Windows::Forms::Label^ add;
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
			this->exit = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->priority = (gcnew System::Windows::Forms::TextBox());
			this->descrip = (gcnew System::Windows::Forms::TextBox());
			this->result = (gcnew System::Windows::Forms::Button());
			this->add = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::Red;
			this->exit->ForeColor = System::Drawing::Color::Black;
			this->exit->Location = System::Drawing::Point(367, -1);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(48, 26);
			this->exit->TabIndex = 0;
			this->exit->Text = L"X";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &windowP::exit_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(6, -1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 26);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &windowP::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(3, 161);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Название";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(3, 216);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Приоритет";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(3, 265);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Описание";
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(97, 161);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(178, 20);
			this->name->TabIndex = 3;
			// 
			// priority
			// 
			this->priority->Location = System::Drawing::Point(97, 217);
			this->priority->Name = L"priority";
			this->priority->Size = System::Drawing::Size(178, 20);
			this->priority->TabIndex = 3;
			// 
			// descrip
			// 
			this->descrip->Location = System::Drawing::Point(97, 265);
			this->descrip->Multiline = true;
			this->descrip->Name = L"descrip";
			this->descrip->Size = System::Drawing::Size(247, 77);
			this->descrip->TabIndex = 3;
			// 
			// result
			// 
			this->result->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->result->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->result->Location = System::Drawing::Point(97, 372);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(124, 22);
			this->result->TabIndex = 4;
			this->result->Text = L"Добавить";
			this->result->UseVisualStyleBackColor = false;
			this->result->Click += gcnew System::EventHandler(this, &windowP::result_Click);
			// 
			// add
			// 
			this->add->AutoSize = true;
			this->add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->add->Location = System::Drawing::Point(109, 87);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(0, 18);
			this->add->TabIndex = 5;
			// 
			// windowP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(413, 514);
			this->Controls->Add(this->add);
			this->Controls->Add(this->result);
			this->Controls->Add(this->descrip);
			this->Controls->Add(this->priority);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"windowP";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"windowP";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Application::Exit();
	}
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}

	void clear()
	{
		this->name->Text = "";
		this->priority->Text = "";
		this->descrip->Text = "";
	}
	private: System::Void result_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		std::string str = "affairs.txt";
		std::ofstream fout;
		fout.open(str);
		if (!fout.is_open())
			std::cout << "d";
		else
		{
			std::string name = msclr::interop::marshal_as<std::string>(this->name->Text);
			fout << name;
			fout << "\n";
			std::string priority = msclr::interop::marshal_as<std::string>(this->priority->Text);
			fout << priority;
			fout << "\n";
			std::string desc = msclr::interop::marshal_as<std::string>(this->descrip->Text);
			fout << desc;
			fout << "\n";
		}
		clear();
		this->add->Text = "Дело было добавлено!";
	}
};
}
