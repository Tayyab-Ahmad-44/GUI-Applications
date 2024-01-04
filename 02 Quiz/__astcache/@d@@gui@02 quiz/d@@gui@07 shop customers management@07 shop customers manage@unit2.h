//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TAskingForProductsForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *askingProductsLabel;
	TEdit *productEdit;
	TButton *addInFile;
	void __fastcall addInFileClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAskingForProductsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAskingForProductsForm *AskingForProductsForm;
//---------------------------------------------------------------------------
#endif
