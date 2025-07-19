object SetParaDialog: TSetParaDialog
  Left = 0
  Top = 0
  Caption = 'SetParaDialog'
  ClientHeight = 294
  ClientWidth = 563
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 32
    Top = 43
    Width = 41
    Height = 18
    Caption = 'Label1'
  end
  object Label2: TLabel
    Left = 224
    Top = 43
    Width = 33
    Height = 18
    Caption = 'Label2'
  end
  object Edit1: TEdit
    Left = 79
    Top = 40
    Width = 121
    Height = 21
    TabOrder = 0
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 288
    Top = 40
    Width = 121
    Height = 21
    TabOrder = 1
    Text = 'Edit2'
  end
  object OKButton: TButton
    Left = 432
    Top = 24
    Width = 75
    Height = 25
    Caption = 'OKButton'
    TabOrder = 2
    OnClick = OKButtonClick
  end
  object CloseButton: TButton
    Left = 432
    Top = 55
    Width = 75
    Height = 25
    Caption = 'CloseButton'
    TabOrder = 3
    OnClick = CloseButtonClick
  end
end
