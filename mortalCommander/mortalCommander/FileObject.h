#pragma once
#include "ISectorObject.h"

ref class FileObject : public ISectorObject
{
private:
	System::IO::FileInfo^ _fileInfo;

public:
	FileObject(System::String^ fileName);
	~FileObject();
	System::String^ GetName() override;
	System::String^ GetExtension() ;
	System::DateTime GetCreateDate() override;
	void MoveTo(System::String^ newPath) override;
	void Delete() override;
	System::Double^ GetSize() override;
	System::String^ GetStringLitera() override;
	System::String^ GetFullPath() override;
};
