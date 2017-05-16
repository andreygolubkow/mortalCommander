#pragma once
#include "SectorObjectTypeEnum.h"


ref class  ISectorObject
{
	public: 
		virtual System::String^ GetName() = 0;
		virtual System::DateTime GetCreateDate() = 0;
		virtual void MoveTo(System::String^ newPath) = 0;
		virtual void Delete() = 0;
		virtual System::String^ GetStringLitera() = 0;
		virtual System::Double^ GetSize() = 0;
		virtual System::String^ GetFullPath() = 0;
};
