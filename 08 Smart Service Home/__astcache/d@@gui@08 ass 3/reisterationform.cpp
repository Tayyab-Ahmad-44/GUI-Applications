﻿//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream>

#pragma hdrstop

#include "ReisterationForm.h"
#include "ServicesProvider.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TregisterationForm *registerationForm;
//---------------------------------------------------------------------------
__fastcall TregisterationForm::TregisterationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TregisterationForm::doneButtonClick(TObject *Sender)
{
    fstream myFile;
	myFile.open("userData.txt", ios::out | ios::trunc);

	if (myFile.is_open())
	{
		AnsiString fNn = fN_Edit->Text;
		AnsiString lNn = lN_Edit->Text;
		AnsiString pNn = pN_Edit->Text;
		AnsiString cnicc = cnic_Edit->Text;
		AnsiString hasCarr = hasCar_Edit->Text;

		fN =  AnsiString(fN_Edit->Text).c_str();
		lN =  AnsiString(lN_Edit->Text).c_str();
		pN =  AnsiString(pN_Edit->Text).c_str();
		cnic =  AnsiString(cnic_Edit->Text).c_str();
		hasCar =  AnsiString(hasCar_Edit->Text).c_str();

		this->Close();
	}
}
//---------------------------------------------------------------------------
