#pragma once
#include <string>
#include "SectorObjectTypeEnum.h"

//
ref class  ISectorObject
{
	public:
		virtual	String^ GetLiteral();
		virtual String^ GetName();
		virtual String^ GetExtension();
		virtual String^ GetCreateDate();
		virtual void SetName(String^ name);
		virtual void Delete();
		virtual SectorObjectType GetObjectType();
};
