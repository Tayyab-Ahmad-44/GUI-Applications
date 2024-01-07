﻿//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TgarageForm : public TForm
{
__published:	// IDE-managed Components
	TImage *garageImage;
	TButton *parkCarButton;
	TButton *takeOutCarButton;
private:	// User declarations
public:		// User declarations
	__fastcall TgarageForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TgarageForm *garageForm;
//---------------------------------------------------------------------------
#endif
