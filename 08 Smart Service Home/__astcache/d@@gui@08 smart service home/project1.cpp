//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("ServicesProvider.cpp", serviceProviderForm);
USEFORM("Unit1.cpp", mainForm);
USEFORM("Unit3.cpp", enteranceForm);
USEFORM("ReisterationForm.cpp", registerationForm);
USEFORM("Garage.cpp", garageForm);
USEFORM("InputCnic.cpp", inputCnicForm);
USEFORM("InputLocation.cpp", locationInputForm);
USEFORM("AllUsersRoomsForm.cpp", allRoomsForm);
USEFORM("Details.cpp", userDetailssForm);
USEFORM("Rooms.cpp", rooomsForm);
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
		Application->CreateForm(__classid(TinputCnicForm), &inputCnicForm);
		Application->CreateForm(__classid(TgarageForm), &garageForm);
		Application->CreateForm(__classid(TlocationInputForm), &locationInputForm);
		Application->CreateForm(__classid(TallRoomsForm), &allRoomsForm);
		Application->CreateForm(__classid(TuserDetailssForm), &userDetailssForm);
		Application->CreateForm(__classid(TrooomsForm), &rooomsForm);
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
