#include "MainForm.h"
#include "DirectoryObject.h"
#include "FileObject.h"

void mortalCommander::MainForm::LoadDisks()
{
	
	driveList = System::Environment::GetLogicalDrives();

	for each (auto item in driveList)
	{
		leftDriveComboBox->Items->Add(item);
	}
	for each (auto item in driveList)
	{
		rightDriveComboBox->Items->Add(item);
	}
}



void mortalCommander::MainForm::Initialize()
{
	ClearAllDiskComboBox();
	LoadDisks();
}

void mortalCommander::MainForm::ClearAllDiskComboBox()
{
	
	leftDriveComboBox->Items->Clear();
	rightDriveComboBox->Items->Clear();
	
}

void mortalCommander::MainForm::LoadPath(System::Windows::Forms::DataGridView^ panel, System::String^ path)
{
	DirectoryObject^ dir = gcnew DirectoryObject(path);
	panel->Rows->Clear();
	auto row = gcnew DataGridViewRow();
	row->CreateCells(panel);
	row->SetValues("#", "..", 0, dir->GetParentPath());
	panel->Rows->Add(row);
	for each (auto item in dir->GetFiles())
	{
		auto row = gcnew DataGridViewRow();
		row->CreateCells(panel);
		row->SetValues(item->GetStringLitera(),item->GetName(),item->GetSize(),item->GetFullPath());
		panel->Rows->Add(row);
	}
}