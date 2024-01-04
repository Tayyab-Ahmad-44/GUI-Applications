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

	if(myFile.is_open())
	{
		AnsiString products = productEdit->Text;

		myFile << products;

		myFile.close();

        this->Close();
    }
}
//---------------------------------------------------------------------------
