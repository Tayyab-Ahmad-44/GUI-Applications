//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>

#include "myHeader.cpp"
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TmainForm : public TForm
{
__published:	// IDE-managed Components
	TImage *homeImage;
	TButton *newUserButton;
	TButton *userDetailsButton;
	TButton *userLocationButton;
	TPanel *Panel1;
	TPanel *Panel2;
	void __fastcall newUserButtonClick(TObject *Sender);
	void __fastcall userDetailsButtonClick(TObject *Sender);
	void __fastcall userLocationButtonClick(TObject *Sender);
	void __fastcall Panel1Click(TObject *Sender);
	void __fastcall Panel2Click(TObject *Sender);
private:	// User declarations
	Home* h1;
public:		// User declarations
	__fastcall TmainForm(TComponent* Owner);
	Home* getHomeObj()
	{
		return h1;
	}

//	void setBools(long long cnic, bool &lights, bool &thermostat, bool &security, bool &cameras, bool &assistant, bool &speakers)
//	{
//		User* user = h1->users[cnic];
//		lights = user->lights;
//		thermostat = user->thermostat;
//		security = user->security;
//		cameras = user->cameras;
//		assistant = user->assistant;
//		speakers = user->speakers;
//	}
//	void setBools(long long cnic)
//	{
//		User* user = h1->users[cnic];
//		bool lights = user->lights;
////		thermostat = user->thermostat;
////		security = user->security;
////		cameras = user->cameras;
////		assistant = user->assistant;
////		speakers = user->speakers;
//	}
};
//---------------------------------------------------------------------------
extern PACKAGE TmainForm *mainForm;
//---------------------------------------------------------------------------
#endif
