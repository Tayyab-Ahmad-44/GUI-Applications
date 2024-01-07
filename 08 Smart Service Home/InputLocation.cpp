//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "InputLocation.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TlocationInputForm *locationInputForm;
//---------------------------------------------------------------------------
__fastcall TlocationInputForm::TlocationInputForm(TComponent* Owner)
	: TForm(Owner)
{
	location = "Not Enterend";
}
//---------------------------------------------------------------------------
void __fastcall TlocationInputForm::Button1Click(TObject *Sender)
{
	AnsiString loc = locationEdit->Text;

	location = AnsiString(loc).c_str();

    this->Close();
}
//---------------------------------------------------------------------------

