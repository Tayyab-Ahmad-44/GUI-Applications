//---------------------------------------------------------------------------

#ifndef DetailsH
#define DetailsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TuserDetailssForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
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
	TLabel *nameLabel;
	TLabel *speakerLabel;
	TLabel *lightLabel;
	TLabel *pnLabel;
	TLabel *cnicLabel;
	TLabel *carLabel;
	TLabel *locLabel;
	TLabel *curtainLabel;
	TLabel *heaterLabel;
	TLabel *cameraLabel;
	TLabel *lockLabel;
	TLabel *Label14;
	TEdit *cnicEdit;
	TButton *Button2;
	TButton *Button1;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TuserDetailssForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TuserDetailssForm *userDetailssForm;
//---------------------------------------------------------------------------
#endif
