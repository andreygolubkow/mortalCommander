#include "DirectoryObject.h"
#include "FileObject.h"

DirectoryObject::DirectoryObject(System::String ^ directoryName)
{
	_directoryInfo = gcnew System::IO::DirectoryInfo(directoryName);
}

DirectoryObject::~DirectoryObject()
{

}

System::String ^ DirectoryObject::GetName()
{
	return _directoryInfo->Name;
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
	for each (auto dir in _directoryInfo->GetDirectories())
	{
		sectorList->Add(gcnew DirectoryObject(dir->FullName));
	}
	for each (auto file in _directoryInfo->GetFiles())
	{
		sectorList->Add(gcnew FileObject(file->FullName));
	}
	return sectorList;
}

SectorObjectType DirectoryObject::GetObjectType()
{
	return SectorObjectType::Directory;
}
