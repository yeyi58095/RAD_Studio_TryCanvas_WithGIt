//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "MainApp.h"
#include "SetPara.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSetParaDialog *SetParaDialog;
//---------------------------------------------------------------------------
__fastcall TSetParaDialog::TSetParaDialog(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TSetParaDialog::FormShow(TObject *Sender)
{
	OKButton->Caption= "OK";
	CloseButton->Caption = "Close";
	Edit1->Text = 0;
	Edit2->Text = 1;
 	switch(Form5->ComboBox1->ItemIndex){ // 因為會用到另外一個視窗 (Form5)的內容，因此要在上面 #include "Unit5.h"
		case 0:
			Label2->Visible = true;
			Edit2->Visible = true;
			Label1->Caption = "Start";
			Label2->Caption = "End";
			break;
		case 1:
			Label1->Caption = "lambda";
			Label2->Visible = false;
			Edit2->Visible = false;
			break;

		case 2:
			Label2->Visible = true;
			Edit2->Visible = true;
			Label1->Caption = "mean";
			Label2->Caption = "variance";
			break;
		default:
			break;
	}
}

//---------------------------------------------------------------------------
void __fastcall TSetParaDialog::OKButtonClick(TObject *Sender)
{
	Form5->updatePara(
		StrToFloat(Edit1->Text),
		StrToFloat(Edit2->Text)
	);
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TSetParaDialog::CloseButtonClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
