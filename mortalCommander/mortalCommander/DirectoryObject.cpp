#include "DirectoryObject.h"

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

System::Collections::Generic::List<ISectorObject^> GetFiles()
{
	
}

SectorObjectType DirectoryObject::GetObjectType()
{
	return SectorObjectType::Directory;
}
