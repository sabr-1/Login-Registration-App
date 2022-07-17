//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "App.h"
#include "Login.h"
#include "Registration.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMain *Main;
//---------------------------------------------------------------------------
__fastcall TMain::TMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMain::LoginButtonClick(TObject *Sender)
{
	LoginPage->Show();
	LoginPage->EmailInput->Text="";
	LoginPage->PasswordInput->Text="";
	LoginPage->StatusLabel->Text="";

}
//---------------------------------------------------------------------------
void __fastcall TMain::RegistrationButtonClick(TObject *Sender)
{
	RegistrationPage->Show();
	RegistrationPage->NameInput->Text="" ;
	RegistrationPage->EmailInput->Text="";
	RegistrationPage->PasswordInput->Text=""  ;
    RegistrationPage->StatusLabel->Text="";

}
//---------------------------------------------------------------------------
