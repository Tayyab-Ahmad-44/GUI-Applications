//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Garage.h"
//#include "myHeader.cpp"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TgarageForm *garageForm;
//---------------------------------------------------------------------------
__fastcall TgarageForm::TgarageForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TgarageForm::parkCarButtonClick(TObject *Sender)
{
	Home* h1 = mainForm->getHomeObj();
	h1->carParking();
}
//---------------------------------------------------------------------------
void __fastcall TgarageForm::takeOutCarButtonClick(TObject *Sender)
{
    Home* h1 = mainForm->getHomeObj();
	h1->takingCarOut();
}
//---------------------------------------------------------------------------
