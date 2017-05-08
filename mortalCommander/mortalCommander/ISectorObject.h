#pragma once
#include "SectorObjectTypeEnum.h"


ref class  ISectorObject
{
	public: 
		virtual System::String^ GetName() = 0;
		virtual System::DateTime GetCreateDate() = 0;
		virtual void MoveTo(System::String^ newPath) = 0;
		virtual void Delete() = 0;
		virtual SectorObjectType GetObjectType() = 0;
};
