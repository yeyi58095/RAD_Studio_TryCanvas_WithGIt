//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "MainApp.h"
#include "ShowChart.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TShowChartDialog *ShowChartDialog;
//---------------------------------------------------------------------------
__fastcall TShowChartDialog::TShowChartDialog(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
