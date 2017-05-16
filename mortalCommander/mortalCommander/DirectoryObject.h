#pragma once
#include "ISectorObject.h"

ref class DirectoryObject : public ISectorObject
{
private:
	System::IO::DirectoryInfo^ _directoryInfo;
public:
	DirectoryObject(System::String^ fileName);
	~DirectoryObject();
	System::String^ GetName() override;
	System::DateTime GetCreateDate() override;
	void MoveTo(System::String^ newPath) override;
	void Delete() override;
	System::Collections::Generic::List<ISectorObject^>^ GetFiles();
	System::String^ GetStringLitera() override;
	System::Double^ GetSize() override;
	System::String^ GetFullPath() override;
	System::String^ GetParentPath();

};
