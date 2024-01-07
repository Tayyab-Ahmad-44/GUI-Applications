//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Details.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TuserDetailssForm *userDetailssForm;
//---------------------------------------------------------------------------
__fastcall TuserDetailssForm::TuserDetailssForm(TComponent* Owner)
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
void __fastcall TuserDetailssForm::Button2Click(TObject *Sender)
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

		nameLabel->Caption = (user->firstName + user->lastName).c_str();
		pnLabel->Caption = user->phoneNumber.c_str();
		cnicLabel->Caption = std::to_string(user->key).c_str();
		carLabel->Caption = (user->hasCar) ? "Yes" : "No";
		locLabel->Caption = user->location.c_str();
		lockLabel->Caption = (user->lights) ? "Yes" : "No";
		lightLabel->Caption = (user->thermostat) ? "Yes" : "No";
		speakerLabel->Caption = (user->security) ? "Yes" : "No";
		curtainLabel->Caption = (user->cameras) ? "Yes" : "No";
		heaterLabel->Caption = (user->assistant) ? "Yes" : "No";
		cameraLabel->Caption = (user->speakers) ? "Yes" : "No";
	 }

	 cnicEdit->Text = "";

}
//---------------------------------------------------------------------------
void __fastcall TuserDetailssForm::Button1Click(TObject *Sender)
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

	this->Close();
}
//---------------------------------------------------------------------------
