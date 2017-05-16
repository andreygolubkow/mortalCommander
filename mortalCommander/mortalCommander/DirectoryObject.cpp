#include "DirectoryObject.h"
#include "FileObject.h"

DirectoryObject::DirectoryObject(System::String ^ directoryName)
{
	_directoryInfo = gcnew System::IO::DirectoryInfo(directoryName);
}

DirectoryObject::~DirectoryObject()
{

}

System::Double^ DirectoryObject::GetSize()
{
	auto nan = gcnew System::Double;
	nan = 0 / 0*1.0;
	return  nan;
}

System::String ^ DirectoryObject::GetName()
{
	return _directoryInfo->Name;
}

System::String ^ DirectoryObject::GetParentPath()
{
	return _directoryInfo->Parent == nullptr ? _directoryInfo->FullName : _directoryInfo->Parent->FullName;
}

System::DateTime DirectoryObject::GetCreateDate()
{
	return _directoryInfo->CreationTime;
}

void DirectoryObject::MoveTo(System::String ^ newPath)
{
	_directoryInfo->MoveTo(newPath);
}

void DirectoryObject::Delete()
{
	_directoryInfo->Delete();
}

System::Collections::Generic::List<ISectorObject^>^ DirectoryObject::GetFiles()
{
	System::Collections::Generic::List<ISectorObject^>^ sectorList = gcnew System::Collections::Generic::List<ISectorObject^>();
	try
	{
		for each (auto dir in _directoryInfo->GetDirectories())
		{
			sectorList->Add(gcnew DirectoryObject(dir->FullName));
		}
		for each (auto file in _directoryInfo->GetFiles())
		{
			sectorList->Add(gcnew FileObject(file->FullName));
		}
	}
	catch (System::Exception^ ex)
	{
		System::String^ message = ex->Message;
		System::Windows::Forms::MessageBox::Show(message);
	}
	
	return sectorList;
}

System::String^ DirectoryObject::GetFullPath()
{
	return _directoryInfo->FullName;
}

System::String^ DirectoryObject::GetStringLitera()
{
	return "#";
}
