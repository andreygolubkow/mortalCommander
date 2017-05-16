#pragma once
#include "ISectorObject.h"
#include "FileObject.h"
#include "DirectoryObject.h"

namespace mortalCommander {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			Initialize();
			_activePanel = 0;
			
		}

	protected:

		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: int _activePanel;

	private: System::Windows::Forms::GroupBox^  groupBox1;


	private: System::Windows::Forms::ComboBox^  leftDriveComboBox;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::DataGridView^  rightGridView;

	private: System::Windows::Forms::ComboBox^  rightDriveComboBox;


	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::DataGridView^  leftGridView;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^  RsectorType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  RfileName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  RfileSize;











	private: System::Windows::Forms::DataGridViewTextBoxColumn^  sectorType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fileName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fileSize;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  leftFullPath;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  RfileType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  rightFileName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  rightFileSize;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  rightFullPath;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  createFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  moveToToolStripMenuItem;

	private: array<System::String^>^ driveList;
	private: void LoadDisks();
	private: void Initialize();
	private: void ClearAllDiskComboBox();
	private: void LoadPath(System::Windows::Forms::DataGridView^ panel, System::String^ path);





	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->leftGridView = (gcnew System::Windows::Forms::DataGridView());
			this->sectorType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fileName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fileSize = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->leftFullPath = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->leftDriveComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rightGridView = (gcnew System::Windows::Forms::DataGridView());
			this->RfileType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rightFileName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rightFileSize = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rightFullPath = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rightDriveComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->createFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->moveToToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leftGridView))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rightGridView))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->leftGridView);
			this->groupBox1->Controls->Add(this->leftDriveComboBox);
			this->groupBox1->Location = System::Drawing::Point(0, 52);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(324, 281);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Left panel";
			// 
			// leftGridView
			// 
			this->leftGridView->AllowUserToAddRows = false;
			this->leftGridView->AllowUserToDeleteRows = false;
			this->leftGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->leftGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->leftGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->sectorType,
					this->fileName, this->fileSize, this->leftFullPath
			});
			this->leftGridView->Location = System::Drawing::Point(12, 46);
			this->leftGridView->Name = L"leftGridView";
			this->leftGridView->ReadOnly = true;
			this->leftGridView->RowHeadersVisible = false;
			this->leftGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->leftGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->leftGridView->Size = System::Drawing::Size(305, 229);
			this->leftGridView->TabIndex = 1;
			this->leftGridView->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::leftGridView_CellClick);
			this->leftGridView->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::leftGridView_CellDoubleClick);
			this->leftGridView->Click += gcnew System::EventHandler(this, &MainForm::leftGridView_Click);
			// 
			// sectorType
			// 
			this->sectorType->FillWeight = 20;
			this->sectorType->HeaderText = L"*";
			this->sectorType->MinimumWidth = 20;
			this->sectorType->Name = L"sectorType";
			this->sectorType->ReadOnly = true;
			// 
			// fileName
			// 
			this->fileName->HeaderText = L"Name";
			this->fileName->Name = L"fileName";
			this->fileName->ReadOnly = true;
			// 
			// fileSize
			// 
			this->fileSize->HeaderText = L"Size";
			this->fileSize->Name = L"fileSize";
			this->fileSize->ReadOnly = true;
			// 
			// leftFullPath
			// 
			this->leftFullPath->HeaderText = L"FullPath";
			this->leftFullPath->Name = L"leftFullPath";
			this->leftFullPath->ReadOnly = true;
			this->leftFullPath->Visible = false;
			// 
			// leftDriveComboBox
			// 
			this->leftDriveComboBox->FormattingEnabled = true;
			this->leftDriveComboBox->Location = System::Drawing::Point(12, 19);
			this->leftDriveComboBox->Name = L"leftDriveComboBox";
			this->leftDriveComboBox->Size = System::Drawing::Size(305, 21);
			this->leftDriveComboBox->TabIndex = 0;
			this->leftDriveComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::leftDriveComboBox_SelectedIndexChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rightGridView);
			this->groupBox2->Controls->Add(this->rightDriveComboBox);
			this->groupBox2->Location = System::Drawing::Point(330, 52);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(334, 281);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Right panel";
			// 
			// rightGridView
			// 
			this->rightGridView->AllowUserToAddRows = false;
			this->rightGridView->AllowUserToDeleteRows = false;
			this->rightGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->rightGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->rightGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->RfileType,
					this->rightFileName, this->rightFileSize, this->rightFullPath
			});
			this->rightGridView->Location = System::Drawing::Point(6, 46);
			this->rightGridView->Name = L"rightGridView";
			this->rightGridView->ReadOnly = true;
			this->rightGridView->RowHeadersVisible = false;
			this->rightGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->rightGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->rightGridView->Size = System::Drawing::Size(322, 229);
			this->rightGridView->TabIndex = 1;
			this->rightGridView->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::rightGridView_CellClick);
			this->rightGridView->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::rightGridView_CellDoubleClick);
			// 
			// RfileType
			// 
			this->RfileType->FillWeight = 25;
			this->RfileType->HeaderText = L"*";
			this->RfileType->MinimumWidth = 25;
			this->RfileType->Name = L"RfileType";
			this->RfileType->ReadOnly = true;
			// 
			// rightFileName
			// 
			this->rightFileName->FillWeight = 130.9645F;
			this->rightFileName->HeaderText = L"Name";
			this->rightFileName->Name = L"rightFileName";
			this->rightFileName->ReadOnly = true;
			// 
			// rightFileSize
			// 
			this->rightFileSize->FillWeight = 130.9645F;
			this->rightFileSize->HeaderText = L"Size";
			this->rightFileSize->Name = L"rightFileSize";
			this->rightFileSize->ReadOnly = true;
			// 
			// rightFullPath
			// 
			this->rightFullPath->HeaderText = L"FullPath";
			this->rightFullPath->Name = L"rightFullPath";
			this->rightFullPath->ReadOnly = true;
			this->rightFullPath->Visible = false;
			// 
			// rightDriveComboBox
			// 
			this->rightDriveComboBox->FormattingEnabled = true;
			this->rightDriveComboBox->Location = System::Drawing::Point(6, 19);
			this->rightDriveComboBox->Name = L"rightDriveComboBox";
			this->rightDriveComboBox->Size = System::Drawing::Size(322, 21);
			this->rightDriveComboBox->TabIndex = 0;
			this->rightDriveComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::rightDriveComboBox_SelectedIndexChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->createFileToolStripMenuItem,
					this->deleteFileToolStripMenuItem, this->moveToToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(671, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// createFileToolStripMenuItem
			// 
			this->createFileToolStripMenuItem->Name = L"createFileToolStripMenuItem";
			this->createFileToolStripMenuItem->Size = System::Drawing::Size(74, 20);
			this->createFileToolStripMenuItem->Text = L"Create File";
			// 
			// deleteFileToolStripMenuItem
			// 
			this->deleteFileToolStripMenuItem->Name = L"deleteFileToolStripMenuItem";
			this->deleteFileToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->deleteFileToolStripMenuItem->Text = L"Delete File";
			this->deleteFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::deleteFileToolStripMenuItem_Click);
			// 
			// moveToToolStripMenuItem
			// 
			this->moveToToolStripMenuItem->Name = L"moveToToolStripMenuItem";
			this->moveToToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->moveToToolStripMenuItem->Text = L"Move To";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(671, 339);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MainForm";
			this->Text = L"MortalCommander";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leftGridView))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rightGridView))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void leftDriveComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		LoadPath(leftGridView, (System::String^)leftDriveComboBox->SelectedItem);
		
	}
private: System::Void rightDriveComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	LoadPath(rightGridView, (System::String^)rightDriveComboBox->SelectedItem);
}
private: System::Void leftGridView_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	
	if ((System::String^)leftGridView->CurrentRow->Cells[0]->Value == "#")
	{
		leftDriveComboBox->Text = (System::String^) leftGridView->CurrentRow->Cells[3]->Value;
		LoadPath(leftGridView, (System::String^)leftGridView->CurrentRow->Cells[3]->Value);
	} else
	{
		try
		{
			System::Diagnostics::Process::Start((System::String^)leftGridView->CurrentRow->Cells[3]->Value);
		}
		catch (System::Exception^ ex)
		{
			System::Windows::Forms::MessageBox::Show(ex->Message);
		}
		
	}
	
}
private: System::Void rightGridView_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if ((System::String^)rightGridView->CurrentRow->Cells[0]->Value == "#")
	{
		rightDriveComboBox->Text = (System::String^) rightGridView->CurrentRow->Cells[3]->Value;
		LoadPath(rightGridView, (System::String^)rightGridView->CurrentRow->Cells[3]->Value);
	}
	else
	{
		try
		{
			System::Diagnostics::Process::Start((System::String^)rightGridView->CurrentRow->Cells[3]->Value);
		}
		catch (System::Exception^ ex)
		{
			System::Windows::Forms::MessageBox::Show(ex->Message);
		}

	}
}
private: System::Void leftGridView_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void rightGridView_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	_activePanel = 2;
}
private: System::Void leftGridView_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	_activePanel = 1;
}
private: System::Void deleteFileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (_activePanel == 1)
	{
		ISectorObject^ obj;
		if ((System::String^)leftGridView->CurrentRow->Cells[0]->Value == "#")
		{
			obj = gcnew DirectoryObject((System::String^)leftGridView->CurrentRow->Cells[3]->Value);
		}
		if ((System::String^)leftGridView->CurrentRow->Cells[0]->Value == "-")
		{
			obj = gcnew FileObject((System::String^)leftGridView->CurrentRow->Cells[3]->Value);
		}
		obj->Delete();
		LoadPath(leftGridView,leftDriveComboBox->Text);
		return;
	}
	if (_activePanel == 2)
	{
		ISectorObject^ obj;
		if ((System::String^)rightGridView->CurrentRow->Cells[0]->Value == "#")
		{
			obj = gcnew DirectoryObject((System::String^)rightGridView->CurrentRow->Cells[3]->Value);
		}
		if ((System::String^)rightGridView->CurrentRow->Cells[0]->Value == "-")
		{
			obj = gcnew FileObject((System::String^)rightGridView->CurrentRow->Cells[3]->Value);
		}
		obj->Delete();
		LoadPath(rightGridView, rightDriveComboBox->Text);
		return;
	}
	System::Windows::Forms::MessageBox::Show("‘айл не выбран.");
}
};
}
