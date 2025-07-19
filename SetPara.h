//---------------------------------------------------------------------------

#ifndef SetParaH
#define SetParaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TSetParaDialog : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *Edit1;
	TLabel *Label2;
	TEdit *Edit2;
	TButton *OKButton;
	TButton *CloseButton;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall OKButtonClick(TObject *Sender);
	void __fastcall CloseButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSetParaDialog(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSetParaDialog *SetParaDialog;
//---------------------------------------------------------------------------
#endif
