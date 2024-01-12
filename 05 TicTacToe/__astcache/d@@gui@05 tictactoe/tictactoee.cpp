//---------------------------------------------------------------------------

#include <fmx.h>
#include <string>
#pragma hdrstop

#include "TicTacToee.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;

String currentSymbol = "x";
int countDraw = 0;
//---------------------------------------------------------------------------

bool TForm1:: CheckWinner()
{
// For Horizontal
	if( Button1->Text == Button2->Text && Button2->Text == Button3->Text )
		return true;
	if( Button4->Text == Button5->Text && Button5->Text == Button6->Text )
		return true;
	if( Button7->Text == Button8->Text && Button8->Text == Button9->Text )
		return true;

// For Vertical
	if( Button1->Text == Button4->Text && Button4->Text == Button7->Text )
		return true;
	if( Button2->Text == Button5->Text && Button5->Text == Button8->Text )
		return true;
	if( Button3->Text == Button6->Text && Button6->Text == Button9->Text )
		return true;

//For Diagonals
	if( Button1->Text == Button5->Text && Button5->Text == Button9->Text )
		return true;
	if( Button3->Text == Button5->Text && Button5->Text == Button7->Text )
		return true;

	return false;
}

void TForm1:: disableEnableButtons(bool trueFalse)
{
		Button1->Enabled = trueFalse;
		Button2->Enabled = trueFalse;
		Button3->Enabled = trueFalse;
		Button4->Enabled = trueFalse;
		Button5->Enabled = trueFalse;
		Button6->Enabled = trueFalse;
		Button7->Enabled = trueFalse;
		Button8->Enabled = trueFalse;
		Button9->Enabled = trueFalse;
}

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonClick(TObject *Sender)
{
	TButton* clickedButton = dynamic_cast<TButton*>(Sender);
	clickedButton->Text = currentSymbol;
	countDraw++;

	if(countDraw == 8)
		winLabel->Text = "Match Draw!";

	if( CheckWinner() )
	{
		winLabel->Text = "Player " + currentSymbol + " wins!";
		disableEnableButtons(false);
		return;
	}

	if( currentSymbol == "x" )
		currentSymbol = "o";
	else
		currentSymbol = "x";

	turnLabel->Text = currentSymbol;

	clickedButton->Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::retryButtonClick(TObject *Sender)
{
	disableEnableButtons(true);

	Button1->Text = " ";
	Button2->Text = "  ";
	Button3->Text = "   ";
	Button4->Text = "    ";
	Button5->Text = "     ";
	Button6->Text = "      ";
	Button7->Text = "       ";
	Button8->Text = "        ";
	Button9->Text = "         ";

	winLabel->Text = "";

    currentSymbol = "x";

}
//---------------------------------------------------------------------------

