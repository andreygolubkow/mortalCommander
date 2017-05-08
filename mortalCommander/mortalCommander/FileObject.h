#pragma once
#include "ISectorObject.h"

ref class FileObject : public ISectorObject
{
private:
	System::IO::FileInfo^ _fileInfo;

public:
	FileObject(String^ fileName);
	~FileObject();
	String^ GetLiteral();
	String^ GetName();
	String^ GetExtension();
	String^ GetCreateDate();
	void SetName(String^ name);
	void Delete();
	SectorObjectType GetObjectType();
};
