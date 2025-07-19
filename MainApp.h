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
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall Edit1Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
