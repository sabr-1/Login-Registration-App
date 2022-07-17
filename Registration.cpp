//---------------------------------------------------------------------------

#include <fmx.h>
#include<fstream>
#pragma hdrstop

#include "Registration.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TRegistrationPage *RegistrationPage;
//---------------------------------------------------------------------------
__fastcall TRegistrationPage::TRegistrationPage(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TRegistrationPage::RegisterButtonClick(TObject *Sender)
{
			AnsiString name=NameInput->Text;
			AnsiString email=EmailInput->Text;
			AnsiString password=PasswordInput->Text;
			if(name=="" || email=="" || password==""){
				StatusLabel->Text="All Fields are Mandatory!";
			}   else{

                    fstream dataFile;
					dataFile.open("Data.txt",ios::app);
					if(dataFile.is_open()){
								dataFile<<name<<","<<email<<","<<password<<"\n";
								dataFile.close();
								NameInput->Text="";
								EmailInput->Text="";
								PasswordInput->Text="";
								StatusLabel->Text="User Successfully Registered";


			}
			}




			return;
}
//---------------------------------------------------------------------------

