//---------------------------------------------------------------------------

#include <fmx.h>
#include <string>
#pragma hdrstop

#include "GuessNum.h"

using namespace std;

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------

bool numberEntered = false;
int hiddenNumber;
int attempts = 0;

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{}
//---------------------------------------------------------------------------


void __fastcall TForm1::confirmButtonClick(TObject *Sender)
{

	if(numberEntered == false)
	{
		numberEntered = true;

		textLabel->Text = "Guess It Now:";

		hiddenNumber = StrToInt(numberEdit->Text);

        numberEdit->Text = "";
	}
	else
	{
		int enteredNumber = StrToInt(numberEdit->Text);

		if( hiddenNumber > enteredNumber )
		{
			attempts++;
			countLabel->Text = attempts;
			messageLabel->Text = "Enter A High Number!";
			numberEdit->Text = "";
		}
		else if( hiddenNumber < enteredNumber )
		{
			attempts++;
			countLabel->Text = attempts;
			messageLabel->Text = "Enter A Low Number!";
			numberEdit->Text = "";
		}
		else
		{
			messageLabel->Text = "You Won! Congratulations...";
            confirmButton->Enabled = false;
        }
	}
}
//---------------------------------------------------------------------------

