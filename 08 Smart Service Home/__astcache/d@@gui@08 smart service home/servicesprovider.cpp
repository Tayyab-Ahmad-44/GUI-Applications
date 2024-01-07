//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream>

#pragma hdrstop

#include "ServicesProvider.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TserviceProviderForm *serviceProviderForm;
//---------------------------------------------------------------------------
__fastcall TserviceProviderForm::TserviceProviderForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TserviceProviderForm::Button1Click(TObject *Sender)
{
	fstream myFile;
	myFile.open("userData.txt", std::ios::out | std::ios::trunc);

	if (myFile.is_open())
    {
		AnsiString checkLocks = (locksCheckBox->Checked) ? "1" : "0";
		AnsiString checkLights = (lightsCheckBox->Checked) ? "1" : "0";
		AnsiString checkSpeakers = (speakersCheckBox->Checked) ? "1" : "0";
		AnsiString checkCurtains = (curtainsCheckBox->Checked) ? "1" : "0";
		AnsiString checkHeating = (heatersCheckBox->Checked) ? "1" : "0";
		AnsiString checkCameras = (camerasCheckBox->Checked) ? "1" : "0";

        // Check if writing to the file fails
        if (!myFile.fail())
		{
			myFile << checkLocks << std::endl;
			myFile << checkLights << std::endl;
			myFile << checkSpeakers << std::endl;
			myFile << checkCurtains << std::endl;
			myFile << checkHeating << std::endl;
			myFile << checkCameras << std::endl;


            myFile.close();

			locksCheckBox->Checked = false;
			lightsCheckBox->Checked = false;
			speakersCheckBox->Checked = false;
			curtainsCheckBox->Checked = false;
			heatersCheckBox->Checked = false;
			camerasCheckBox->Checked = false;

            this->Close();
        }
        else
		{
            ShowMessage("Error writing to the file.");
        }
    }
    else
    {
        ShowMessage("Error opening the file.");
	}
    this->Close();
}
//---------------------------------------------------------------------------

