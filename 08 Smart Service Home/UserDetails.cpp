//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <fstream>
#include "UserDetails.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TuserDetailsForm *userDetailsForm;
//---------------------------------------------------------------------------
__fastcall TuserDetailsForm::TuserDetailsForm(TComponent* Owner)
	: TForm(Owner)
{
	nameLabel->Caption = "";
	pnLabel->Caption = "";
	cnicLabel->Caption = "";
	carLabel->Caption = "";
	locLabel->Caption = "";
	lockLabel->Caption = "";
	lightLabel->Caption = "";
	speakerLabel->Caption = "";
	curtainLabel->Caption = "";
	heaterLabel->Caption = "";
	cameraLabel->Caption = "";
}
//---------------------------------------------------------------------------

void __fastcall TuserDetailsForm::Button2Click(TObject *Sender)
{
	Home *home = mainForm->getHomeObj();

	long long cnic = cnic = std::stoll(AnsiString(cnicEdit->Text).c_str());

    auto it = home->users.find(cnic);
	if (it == home->users.end())
	{
		ShowMessage("User with CNIC: " + cnicEdit->Text + " not found");
	}
	else
	{
	User *user = it->second;
//	if(home->users.find(cnic) == home->users.end())
//		ShowMessage("User with Cnic: " + cnicEdit->Text + " not found");
//	 else
//	 {
//		User *user = home->users[cnic];

		nameLabel->Caption = (user->firstName + user->lastName).c_str();
		pnLabel->Caption = user->phoneNumber.c_str();
		cnicLabel->Caption = std::to_string(user->key).c_str();
		carLabel->Caption = (std::to_string(user->hasCar)).c_str();
		locLabel->Caption = user->location.c_str();
		lockLabel->Caption = (std::to_string(user->lights)).c_str();
		lightLabel->Caption = (std::to_string(user->thermostat)).c_str();
		speakerLabel->Caption = (std::to_string(user->security)).c_str();
		curtainLabel->Caption = (std::to_string(user->cameras)).c_str();
		heaterLabel->Caption = (std::to_string(user->assistant)).c_str();
		cameraLabel->Caption = (std::to_string(user->speakers)).c_str();
	 }
}
//---------------------------------------------------------------------------

