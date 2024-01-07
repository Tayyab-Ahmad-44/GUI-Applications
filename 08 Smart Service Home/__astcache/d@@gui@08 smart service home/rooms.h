//---------------------------------------------------------------------------

#ifndef RoomsH
#define RoomsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TrooomsForm : public TForm
{
__published:	// IDE-managed Components
	TImage *roomImage;
	TImage *camerasImage;
	TImage *assistantImage;
	TImage *speakersImage;
	TImage *lightImage;
	TImage *thermostatImage;
	TImage *securityImage;
	TLabel *Label1;
	TLabel *Label3;
	TLabel *Label2;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TLabel *Label17;
	TLabel *nameLabel;
	void __fastcall FormShow(TObject *Sender);
//	void __fastcall Label17Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TrooomsForm(TComponent* Owner);
	void __fastcall Label17Click(TObject *Sender);
};
//---------------------------------------------------------------------------
extern PACKAGE TrooomsForm *rooomsForm;
//---------------------------------------------------------------------------
#endif
