#pragma once

namespace LCBCAdminSystem
{

ref class UserNameAndPassword
{
	public:
	UserNameAndPassword()
	{
		System::String^ Password = gcnew System::String("");
		System::String^ UserName = gcnew System::String("");
	}
	System::String^ Password;
	System::String^ UserName;
};

}