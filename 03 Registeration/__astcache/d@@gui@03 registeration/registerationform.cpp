//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#pragma hdrstop

using namespace std;

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

	if( !nameEdit->Text.IsEmpty() && !ageEdit->Text.IsEmpty() && !usernameEdit->Text.IsEmpty() && !passwordEdit->Text.IsEmpty() )
	{
		if(myFile.is_open())
		{
			AnsiString name = nameEdit->Text;
			AnsiString age = ageEdit->Text;
			AnsiString username = usernameEdit->Text;
			AnsiString password = passwordEdit->Text;

			myFile << name << "," << age << "," << username << "," << password << endl;

			myFile.close();

			nameEdit->Text = "";
			ageEdit->Text = "";
			usernameEdit->Text = "";
			passwordEdit->Text = "";
			messageLabel->Text = "";

			this->Close();
		}
	}
	else
	{
		messageLabel->Text = "Error: Fill All The Above Boxes For Registeration!";
    }
}
//---------------------------------------------------------------------------
