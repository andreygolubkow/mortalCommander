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

System::Double^ FileObject::GetSize()
{
	auto size = gcnew System::Double;
	size = _fileInfo->Length / 1024*1.0;
	return  size;
}

String^ FileObject::GetName()
{
	return _fileInfo->Name;
}

String^ FileObject::GetExtension()
{
	return _fileInfo->Extension;
}

String^ FileObject::GetFullPath()
{
	return _fileInfo->FullName;
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

System::String^ FileObject::GetStringLitera()
{
	return "-";
}









