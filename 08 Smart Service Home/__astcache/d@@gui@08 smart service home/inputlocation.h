//---------------------------------------------------------------------------

#ifndef InputLocationH
#define InputLocationH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TlocationInputForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *locationEdit;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
	std::string location;
public:		// User declarations
	__fastcall TlocationInputForm(TComponent* Owner);
	std::string getLocation()
	{
		return location;
	}
};
//---------------------------------------------------------------------------
extern PACKAGE TlocationInputForm *locationInputForm;
//---------------------------------------------------------------------------
#endif
