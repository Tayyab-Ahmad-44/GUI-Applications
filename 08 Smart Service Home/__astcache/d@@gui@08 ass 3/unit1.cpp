//---------------------------------------------------------------------------

#include <vcl.h>
#include <string>
#include <string.h>
#include <algorithm>
#include <fstream>

#pragma hdrstop

#include "Unit1.h"
#include "Garage.h"
#include "Unit3.h"
#include "ReisterationForm.h"
#include "ServicesProvider.h"
#include "UserDetails.h"
#include "InputCnic.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

using namespace std;

TmainForm *mainForm;

//---------------------------------------------------------------------------
__fastcall TmainForm::TmainForm(TComponent* Owner)
	: TForm(Owner)
{
	 h1 =  new Home();
}
//---------------------------------------------------------------------------
void __fastcall TmainForm::garageLabelClick(TObject *Sender)
{
	garageForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TmainForm::mainDoorLabelClick(TObject *Sender)
{
	enteranceForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TmainForm::newUserButtonClick(TObject *Sender)
{
	h1->newUser();
}
//---------------------------------------------------------------------------

void __fastcall TmainForm::userDetailsButtonClick(TObject *Sender)
{
	h1->userInfo();
}
//---------------------------------------------------------------------------


void __fastcall TmainForm::userLocationButtonClick(TObject *Sender)
{
	h1->userLocation();
}
