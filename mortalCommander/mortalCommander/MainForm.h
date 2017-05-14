#pragma once

namespace mortalCommander {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DataGridView^  leftGridView;

	private: System::Windows::Forms::ComboBox^  leftDriveComboBox;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::DataGridView^  rightGridView;

	private: System::Windows::Forms::ComboBox^  rightDriveComboBox;
	private: System::Windows::Forms::BindingSource^  leftPanelBindingSource;
	private: System::Windows::Forms::BindingSource^  rightPanelBindingSource;
	private: System::ComponentModel::IContainer^  components;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->leftDriveComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->rightDriveComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->leftGridView = (gcnew System::Windows::Forms::DataGridView());
			this->rightGridView = (gcnew System::Windows::Forms::DataGridView());
			this->leftPanelBindingSource = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->rightPanelBindingSource = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leftGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rightGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leftPanelBindingSource))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rightPanelBindingSource))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(671, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(671, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->leftGridView);
			this->groupBox1->Controls->Add(this->leftDriveComboBox);
			this->groupBox1->Location = System::Drawing::Point(0, 52);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(336, 281);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Левая панель ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rightGridView);
			this->groupBox2->Controls->Add(this->rightDriveComboBox);
			this->groupBox2->Location = System::Drawing::Point(342, 52);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(322, 281);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Правая панель";
			// 
			// leftDriveComboBox
			// 
			this->leftDriveComboBox->FormattingEnabled = true;
			this->leftDriveComboBox->Location = System::Drawing::Point(12, 19);
			this->leftDriveComboBox->Name = L"leftDriveComboBox";
			this->leftDriveComboBox->Size = System::Drawing::Size(318, 21);
			this->leftDriveComboBox->TabIndex = 0;
			// 
			// rightDriveComboBox
			// 
			this->rightDriveComboBox->FormattingEnabled = true;
			this->rightDriveComboBox->Location = System::Drawing::Point(6, 19);
			this->rightDriveComboBox->Name = L"rightDriveComboBox";
			this->rightDriveComboBox->Size = System::Drawing::Size(307, 21);
			this->rightDriveComboBox->TabIndex = 0;
			// 
			// leftGridView
			// 
			this->leftGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->leftGridView->Location = System::Drawing::Point(12, 46);
			this->leftGridView->Name = L"leftGridView";
			this->leftGridView->Size = System::Drawing::Size(318, 229);
			this->leftGridView->TabIndex = 1;
			// 
			// rightGridView
			// 
			this->rightGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->rightGridView->Location = System::Drawing::Point(6, 46);
			this->rightGridView->Name = L"rightGridView";
			this->rightGridView->Size = System::Drawing::Size(307, 229);
			this->rightGridView->TabIndex = 1;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(671, 339);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leftGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rightGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leftPanelBindingSource))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rightPanelBindingSource))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
