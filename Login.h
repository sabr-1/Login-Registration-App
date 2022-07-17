//---------------------------------------------------------------------------

#ifndef LoginH
#define LoginH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TLoginPage : public TForm
{
__published:	// IDE-managed Components
	TLabel *EmailLabel;
	TLabel *PasswordLabel;
	TEdit *PasswordInput;
	TEdit *EmailInput;
	TButton *LoginButton;
	TLabel *StatusLabel;
	void __fastcall LoginButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLoginPage(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLoginPage *LoginPage;
//---------------------------------------------------------------------------
#endif
