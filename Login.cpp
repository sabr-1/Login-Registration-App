//---------------------------------------------------------------------------

#include <fmx.h>
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#pragma hdrstop

#include "Login.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
std::vector<std::string> userData(std::string l){
	std::vector<std::string> user;
	std::string s="";
	for(int i=0;i<l.size();i++){
		if(l[i]!=','){
			s.push_back(l[i]);


		}else{
			user.push_back(s);
			s="";

		}
		if(i==l.size()-1){
			user.push_back(s);

		}

	}
	return user;
}

const char* convertToChar(AnsiString s){
	return s.c_str();

}
TLoginPage *LoginPage;
//---------------------------------------------------------------------------
__fastcall TLoginPage::TLoginPage(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TLoginPage::LoginButtonClick(TObject *Sender)
{

			  if(EmailInput->Text=="" || PasswordInput->Text==""){
                     StatusLabel->Text="All Fields are Mandatory";
					 return;
			  }

			  fstream dataFile;
			  dataFile.open("Data.txt",ios::in);
			  if (dataFile.is_open()) {
				  std::string line;
				  bool isUserFound=false;
				  while(getline(dataFile,line) && isUserFound==false){

				  std::vector<std::string> user=userData(line);

				  if(!std::strcmp(user[1].c_str(),convertToChar(EmailInput->Text))) {

						isUserFound=true;


						if(!std::strcmp(user[2].c_str(),convertToChar(PasswordInput->Text)) ){
						StatusLabel->Text="Login Successful";

						} else{
							StatusLabel->Text="Wrong Password";

						}
					}
				  }

				  if(isUserFound==false){
					StatusLabel->Text="Enter Correct Credentials";
				  }

				  dataFile.close();


			  }

}
//---------------------------------------------------------------------------

