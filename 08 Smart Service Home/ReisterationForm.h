//---------------------------------------------------------------------------

#ifndef ReisterationFormH
#define ReisterationFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

using namespace std;
//---------------------------------------------------------------------------
class TregisterationForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label7;
	TLabel *Label5;
	TEdit *fN_Edit;
	TEdit *lN_Edit;
	TEdit *pN_Edit;
	TEdit *cnic_Edit;
	TButton *doneButton;
	TEdit *hasCar_Edit;
	void __fastcall doneButtonClick(TObject *Sender);
private:	// User declarations
	string fN;
	string lN;
	string pN;
	string cnic;
	string hasCar;
public:
	string getFn()
	{
		return fN;
	}
	string getLn()
	{
		return lN;
	}
	string getPn()
	{
		return pN;
	}
	string getCnic()
	{
		return cnic;
	}
	string getCar()
	{
		return hasCar;
	}
		// User declarations
	__fastcall TregisterationForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TregisterationForm *registerationForm;
//---------------------------------------------------------------------------
#endif
