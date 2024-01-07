//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Rooms.h"
#include "Unit1.h"
#include <fstream>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TrooomsForm *rooomsForm;

//---------------------------------------------------------------------------
__fastcall TrooomsForm::TrooomsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TrooomsForm::FormShow(TObject *Sender)
{
	fstream myFile;
	myFile.open("userData.txt", std::ios::in);

	long long cnic;

	myFile >> cnic;

	myFile.close();

	Home *home = mainForm->getHomeObj();

	User *user = home->users[cnic];

	if(cnic == 9999)
        nameLabel->Caption = "Guest Room";
	else
		nameLabel->Caption = (AnsiString(user->firstName.c_str()) + "'s Room");

	if(!user->lights)
		lightImage->Visible = true;
	else
		lightImage->Visible = false;

	if(!user->thermostat)
		thermostatImage->Visible = true;
	else
		thermostatImage->Visible = false;

	if(!user->security)
		securityImage->Visible = true;
	else
		securityImage->Visible = false;

	if(!user->cameras)
		camerasImage->Visible = true;
	else
		camerasImage->Visible = false;

	if(!user->assistant)
		assistantImage->Visible = true;
	else
		assistantImage->Visible = false;

	if(!user->speakers)
		speakersImage->Visible = true;
	else
		speakersImage->Visible = false;
}


