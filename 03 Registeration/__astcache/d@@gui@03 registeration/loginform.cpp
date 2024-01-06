//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#pragma hdrstop

using namespace std;

#include "LoginForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyLoginForm *MyLoginForm;
//---------------------------------------------------------------------------
__fastcall TMyLoginForm::TMyLoginForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


// For saving data in vector without ','
vector<string> parseCommaDelimitedString(string line)
{
	vector<string> result;
	stringstream s_stream(line);

	while(s_stream.good())
	{
		string str;
		getline(s_stream, str, ',');
		result.push_back(str);
	}

	return result;
}

const char* convertToCharPtr(AnsiString ansiString)
{
	return ansiString.c_str();
}

void __fastcall TMyLoginForm::loginButtonClick(TObject *Sender)
{
	if( !usernameEdit->Text.IsEmpty() && !passwordEdit->Text.IsEmpty())
	{
		int find = 0;
		fstream myFile;
		myFile.open("registeredUsers.txt", ios::in);

		if(myFile.is_open())
		{
			string line;

			while(getline(myFile, line) && find == 0)
			{
				vector<string> parsedLine = parseCommaDelimitedString(line);
				const char* username = parsedLine.at(2).c_str(); // Converting to constant string b/c parsed line is not constant

				if( strcmp(username, convertToCharPtr(usernameEdit->Text)) == 0 )
				{
					const char* password = parsedLine.at(3).c_str();

					if ( strcmp(password, convertToCharPtr(passwordEdit->Text)) == 0 )
					{
						messageLabel->Text = "Success!";
						find = 1;
					}
					else
					{
						messageLabel->Text = "Wrong Password!";
					}
				}
				else
				{
					messageLabel->Text = "Username Doesn't Exist!";
				}
			}
		}
	}
	else
	{
		messageLabel->Text = "Error: Fill all the boxes!";
	}

	usernameEdit->Text = "";
	passwordEdit->Text = "";
}
//---------------------------------------------------------------------------