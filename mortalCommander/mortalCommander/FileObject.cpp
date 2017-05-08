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

String^ FileObject::GetLiteral()
{
	
}

String^ FileObject::GetName()
{

}

String^ FileObject::GetExtension()
{

}

String^ FileObject::GetCreateDate()
{

}

String^ FileObject::SetName()
{
	_fileInfo
}

void FileObject::Delete()
{
	_fileInfo->Delete();
}

SectorObjectType FileObject::GetObjectType()
{
	return SectorObjectType::File;
}









