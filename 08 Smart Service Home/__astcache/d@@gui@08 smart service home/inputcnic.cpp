//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "InputCnic.h"
#include <fstream>
#include "myHeader.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TinputCnicForm *inputCnicForm;
//---------------------------------------------------------------------------
__fastcall TinputCnicForm::TinputCnicForm(TComponent* Owner)
	: TForm(Owner)
{
    cnic = INT16_MAX;
}
//---------------------------------------------------------------------------

void __fastcall TinputCnicForm::doneButtonClick(TObject *Sender)
{
	AnsiString cnicc = cnicEdit->Text;

	std::string c = AnsiString(cnicc).c_str();

	cnic = std::stoll(c);

    cnicEdit->Text = "";
//
	this->Close();
}
//---------------------------------------------------------------------------

