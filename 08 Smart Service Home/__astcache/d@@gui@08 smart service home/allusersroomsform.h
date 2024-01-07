//---------------------------------------------------------------------------

#ifndef AllUsersRoomsFormH
#define AllUsersRoomsFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TallRoomsForm : public TForm
{
__published:	// IDE-managed Components
	TImage *allRoomsImage;
	TLabel *Label1;
	TEdit *cnicEdit;
	TButton *searchButton;
	void __fastcall searchButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TallRoomsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TallRoomsForm *allRoomsForm;
//---------------------------------------------------------------------------
#endif
