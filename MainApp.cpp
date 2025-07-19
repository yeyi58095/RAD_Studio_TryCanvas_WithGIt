//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "SetPara.h"
#include "MainApp.h"
#include "ShowChart.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
int samples;
double para1, para2;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::ComboBox1Change(TObject *Sender)
{
	SetParaDialog->Show();
	return ;
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Edit1Change(TObject *Sender)
{
	if(Edit1->Text.Length() != 0){
		samples = StrToInt(Edit1->Text);

		DebugBox->Items->Clear();
		DebugBox->Items->Add(samples);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm5::updatePara(double p1, double p2){
	para1 = p1;
	para2 = p2;
	DebugBox->Items->Clear();
	DebugBox->Items->Add(FloatToStr(para1));
	DebugBox->Items->Add(FloatToStr(para2));
}
void __fastcall TForm5::RunButtonClick(TObject *Sender)
{
 ShowChartDialog->Show();
}
//---------------------------------------------------------------------------

