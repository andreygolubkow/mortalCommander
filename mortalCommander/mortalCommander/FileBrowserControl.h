#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace mortalCommander {

	/// <summary>
	/// —водка дл€ FileBrowserControl
	/// </summary>
	public ref class FileBrowserControl : public System::Windows::Forms::UserControl
	{
	public:
		FileBrowserControl(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~FileBrowserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  driveComboBox;
	protected:
	private: System::Windows::Forms::TextBox^  pathTextBox;
	private: System::Windows::Forms::Label^  memoryLabel;
	private: System::Windows::Forms::DataGridView^  filesGridView;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->driveComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->pathTextBox = (gcnew System::Windows::Forms::TextBox());
			this->memoryLabel = (gcnew System::Windows::Forms::Label());
			this->filesGridView = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->filesGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// driveComboBox
			// 
			this->driveComboBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->driveComboBox->FormattingEnabled = true;
			this->driveComboBox->Location = System::Drawing::Point(3, 3);
			this->driveComboBox->Name = L"driveComboBox";
			this->driveComboBox->Size = System::Drawing::Size(154, 21);
			this->driveComboBox->TabIndex = 0;
			// 
			// pathTextBox
			// 
			this->pathTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pathTextBox->Location = System::Drawing::Point(3, 30);
			this->pathTextBox->Name = L"pathTextBox";
			this->pathTextBox->Size = System::Drawing::Size(384, 20);
			this->pathTextBox->TabIndex = 1;
			// 
			// memoryLabel
			// 
			this->memoryLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->memoryLabel->AutoSize = true;
			this->memoryLabel->Location = System::Drawing::Point(163, 6);
			this->memoryLabel->Name = L"memoryLabel";
			this->memoryLabel->Size = System::Drawing::Size(35, 13);
			this->memoryLabel->TabIndex = 2;
			this->memoryLabel->Text = L"NULL";
			// 
			// filesGridView
			// 
			this->filesGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->filesGridView->Location = System::Drawing::Point(3, 56);
			this->filesGridView->Name = L"filesGridView";
			this->filesGridView->Size = System::Drawing::Size(384, 291);
			this->filesGridView->TabIndex = 3;
			// 
			// FileBrowserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->filesGridView);
			this->Controls->Add(this->memoryLabel);
			this->Controls->Add(this->pathTextBox);
			this->Controls->Add(this->driveComboBox);
			this->Name = L"FileBrowserControl";
			this->Size = System::Drawing::Size(390, 350);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->filesGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
