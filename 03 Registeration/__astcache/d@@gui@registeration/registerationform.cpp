﻿//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#pragma hdrstop

#include "RegisterationForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyRegisterationForm *MyRegisterationForm;
//---------------------------------------------------------------------------
__fastcall TMyRegisterationForm::TMyRegisterationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TMyRegisterationForm::saveButtonClick(TObject *Sender)
{
	fstream myFile;
	myFile.open("registeredUsers.txt", ios::app);

	nameEdit->Text = "";
	ageEdit->Text = "";
	usernameEdit->Text = "";
	passwordEdit->Text = "";

	if(nameEdit->Text == "" || ageEdit->Text == "" || usernameEdit->Text == "" || passwordEdit->Text == "")
	{
		messageLabel->Text = "Error: Fill All The Boxes";
	}
	else if(myFile.is_open())
	{
		AnsiString name = nameEdit->Text;
		AnsiString age = ageEdit->Text;
		AnsiString username = usernameEdit->Text;
		AnsiString password = passwordEdit->Text;

		myFile << name << "," << age << "," << username << "," << password << std::endl;

		myFile.close();

		this->Close();
	}
}
//---------------------------------------------------------------------------
