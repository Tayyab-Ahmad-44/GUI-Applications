//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("MainForm.cpp", MyMainForm);
USEFORM("LoginForm.cpp", MyLoginForm);
USEFORM("RegisterationForm.cpp", MyRegisterationForm);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TMyMainForm), &MyMainForm);
		Application->CreateForm(__classid(TMyLoginForm), &MyLoginForm);
		Application->CreateForm(__classid(TMyRegisterationForm), &MyRegisterationForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
