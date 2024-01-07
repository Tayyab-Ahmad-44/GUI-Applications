//---------------------------------------------------------------------------

#ifndef ServicesProviderH
#define ServicesProviderH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TserviceProviderForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label3;
	TCheckBox *locksCheckBox;
	TCheckBox *lightsCheckBox;
	TCheckBox *speakersCheckBox;
	TCheckBox *curtainsCheckBox;
	TCheckBox *heatersCheckBox;
	TCheckBox *camerasCheckBox;
	TButton *Button1;
	TLabel *Label1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TserviceProviderForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TserviceProviderForm *serviceProviderForm;
//---------------------------------------------------------------------------
#endif
