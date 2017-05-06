#pragma once
#include <string>
#include "FileObjectTypeEnum.h"

class ISectorObject
{
	public:
		virtual	std::string GetLiteral();
		virtual std::string GetName();
		virtual std::string GetExtension();
		virtual std::string GetCreateDate();
		virtual std::string SetName();
		virtual void Delete();
		virtual FileObjectType GetObjectType();
};
