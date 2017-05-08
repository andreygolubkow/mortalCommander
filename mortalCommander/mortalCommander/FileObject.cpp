#include "FileObject.h"

using namespace System;
using namespace System::IO;

FileObject::FileObject(String^ fileName)
{
	_fileInfo = gcnew System::IO::FileInfo(fileName);
}

FileObject::~FileObject()
{
	
}

String^ FileObject::GetName()
{
	return _fileInfo->Name;
}

String^ FileObject::GetExtension()
{
	return _fileInfo->Extension;
}

DateTime FileObject::GetCreateDate()
{
	return _fileInfo->CreationTime;
}

void FileObject::MoveTo(String^ newPath)
{
	_fileInfo->MoveTo(newPath);
}

void FileObject::Delete()
{
	_fileInfo->Delete();
}

SectorObjectType FileObject::GetObjectType() 
{
	return SectorObjectType::File;
}









