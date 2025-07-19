//---------------------------------------------------------------------------

#ifndef MainAppH
#define MainAppH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TComboBox *ComboBox1;
	TLabel *Label2;
	TEdit *Edit1;
	TListBox *DebugBox;
	TButton *RunButton;
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall Edit1Change(TObject *Sender);
	void __fastcall RunButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	int samples;
	double para1, para2;
	__fastcall TForm5(TComponent* Owner);
	void __fastcall updatePara(double p1, double p2);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
