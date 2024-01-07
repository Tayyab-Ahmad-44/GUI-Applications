//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream>
#pragma hdrstop

#include "Unit3.h"
#include "AllUsersRoomsForm.h"
#include "Rooms.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TenteranceForm *enteranceForm;
//---------------------------------------------------------------------------
__fastcall TenteranceForm::TenteranceForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TenteranceForm::usersRoomButtonClick(TObject *Sender)
{
    allRoomsForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TenteranceForm::guestRoomButtonClick(TObject *Sender)
{
	fstream myFile;

	myFile.open("userData.txt", std::ios::out | std::ios::trunc);
	myFile << "9999";
	myFile.close();
	rooomsForm->ShowModal();
}
//---------------------------------------------------------------------------

