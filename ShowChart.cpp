//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "MainApp.h"
#include "ShowChart.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TShowChartDialog *ShowChartDialog;
int samples = 10000;
//---------------------------------------------------------------------------
__fastcall TShowChartDialog::TShowChartDialog(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TShowChartDialog::showDiagram(TObject *Sender)
{
	Series1->Clear();
	if(Form5->samples < samples){
    	samples = Form5->samples;
	}
	for(int i = 0; i < Form5->samples; i++){
		Series1->Add(rand() % 100);
	}
}
//---------------------------------------------------------------------------
