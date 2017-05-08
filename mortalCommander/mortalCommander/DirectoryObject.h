#pragma once
#include "ISectorObject.h"

ref class DirectoryObject : public ISectorObject
{
private:
	System::IO::FileInfo^ _fileInfo;

public:
	DirectoryObject(System::String^ fileName);
	~DirectoryObject();
	System::String^ GetName() override;
	System::DateTime GetCreateDate() override;
	void MoveTo(System::String^ newPath) override;
	void Delete() override;
	SectorObjectType GetObjectType() override;
};
