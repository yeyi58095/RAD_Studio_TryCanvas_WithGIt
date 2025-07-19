//---------------------------------------------------------------------------

#ifndef ShowChartH
#define ShowChartH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <VCLTee.Chart.hpp>
#include <VCLTee.Series.hpp>
#include <VclTee.TeeGDIPlus.hpp>
#include <VCLTee.TeEngine.hpp>
#include <VCLTee.TeeProcs.hpp>
//---------------------------------------------------------------------------
class TShowChartDialog : public TForm
{
__published:	// IDE-managed Components
	TChart *Chart1;
	TBarSeries *Series1;
	void __fastcall showDiagram(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TShowChartDialog(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TShowChartDialog *ShowChartDialog;
//---------------------------------------------------------------------------
#endif
