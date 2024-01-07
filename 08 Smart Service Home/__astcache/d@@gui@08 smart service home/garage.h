//---------------------------------------------------------------------------

#ifndef GarageH
#define GarageH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TgarageForm : public TForm
{
__published:	// IDE-managed Components
	TImage *garageImage;
	TButton *parkCarButton;
	TButton *takeOutCarButton;
	TImage *carImage1;
	TImage *carImage2;
	void __fastcall parkCarButtonClick(TObject *Sender);
	void __fastcall takeOutCarButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TgarageForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TgarageForm *garageForm;
//---------------------------------------------------------------------------
#endif
