//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Unit3.cpp", enteranceForm);
USEFORM("UserDetails.cpp", userDetailsForm);
USEFORM("ReisterationForm.cpp", registerationForm);
USEFORM("ServicesProvider.cpp", serviceProviderForm);
USEFORM("Unit1.cpp", mainForm);
USEFORM("InputCnic.cpp", inputCnicForm);
USEFORM("Garage.cpp", garageForm);
USEFORM("InputLocation.cpp", locationInputForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TmainForm), &mainForm);
		Application->CreateForm(__classid(TenteranceForm), &enteranceForm);
		Application->CreateForm(__classid(TserviceProviderForm), &serviceProviderForm);
		Application->CreateForm(__classid(TregisterationForm), &registerationForm);
		Application->CreateForm(__classid(TuserDetailsForm), &userDetailsForm);
		Application->CreateForm(__classid(TinputCnicForm), &inputCnicForm);
		Application->CreateForm(__classid(TgarageForm), &garageForm);
		Application->CreateForm(__classid(TlocationInputForm), &locationInputForm);
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
