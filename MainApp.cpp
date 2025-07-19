//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainApp.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
int samples;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::ComboBox1Change(TObject *Sender)
{
	return ;
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Edit1Change(TObject *Sender)
{
	if(!Edit1->Text.Length()){
		samples = StrToInt(Edit1->Text);
	}
}
//---------------------------------------------------------------------------
