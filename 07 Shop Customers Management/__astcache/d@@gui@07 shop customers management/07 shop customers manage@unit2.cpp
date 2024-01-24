//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include <fstream>

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TAskingForProductsForm *AskingForProductsForm;
//---------------------------------------------------------------------------
__fastcall TAskingForProductsForm::TAskingForProductsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAskingForProductsForm::addInFileClick(TObject *Sender)
{
    fstream myFile;
    myFile.open("customersData.txt", ios::out | ios::trunc);

    if (myFile.is_open())
    {
        AnsiString products = productEdit->Text;

        // Check if writing to the file fails
        if (!myFile.fail())
		{
			myFile << products;

            myFile.close();

			productEdit->Text = "";


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
}

//---------------------------------------------------------------------------
