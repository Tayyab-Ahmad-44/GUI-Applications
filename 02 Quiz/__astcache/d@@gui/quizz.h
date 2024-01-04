//---------------------------------------------------------------------------

#ifndef QuizzH
#define QuizzH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls3D.hpp>
#include <FMX.Layers3D.hpp>
#include <System.Math.Vectors.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *QuestionLabel;
	TRadioButton *Answer1RadioButton;
	TRadioButton *Answer2RadioButton;
	TRadioButton *Answer3RadioButton;
	TLabel *Label2;
	TButton *ConfirmButton;
	TLayer3D *Layer3D1;
	TLayer3D *Layer3D2;
	TSplitter3D *Splitter3D1;
	TLabel *PointsLabel;
	void __fastcall Answer1RadioButtonChange(TObject *Sender);
	void __fastcall Answer2RadioButtonChange(TObject *Sender);
	void __fastcall Answer3RadioButtonChange(TObject *Sender);
	void __fastcall ConfirmButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
