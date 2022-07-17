//---------------------------------------------------------------------------

#ifndef RegistrationH
#define RegistrationH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Edit.hpp>
//---------------------------------------------------------------------------
class TRegistrationPage : public TForm
{
__published:	// IDE-managed Components
	TLabel *NameLabel;
	TEdit *NameInput;
	TLabel *EmailLabel;
	TEdit *EmailInput;
	TLabel *PasswordLabel;
	TEdit *PasswordInput;
	TButton *RegisterButton;
	TLabel *StatusLabel;
	void __fastcall RegisterButtonClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TRegistrationPage(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegistrationPage *RegistrationPage;
//---------------------------------------------------------------------------
#endif
