//---------------------------------------------------------------------------

#ifndef UserDetailsH
#define UserDetailsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TuserDetailsForm : public TForm
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
	TLabel *Label14;
	TEdit *cnicEdit;
	TButton *Button2;
	void __fastcall Button2Click(TObject *Sender);
//	TLabel *nameLabel;
//	TLabel *speakerLabel;
//	TLabel *lightLabel;
//	TLabel *pnLabel;
//	TLabel *cnicLabel;
//	TLabel *carLabel;
//	TLabel *locLabel;
//	TLabel *curtainLabel;
//	TLabel *heaterLabel;
//	TLabel *cameraLabel;
//	TLabel *lockLabel;
private:	// User declarations
public:		// User declarations
	__fastcall TuserDetailsForm(TComponent* Owner);
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
};
//---------------------------------------------------------------------------
extern PACKAGE TuserDetailsForm *userDetailsForm;
//---------------------------------------------------------------------------
#endif
