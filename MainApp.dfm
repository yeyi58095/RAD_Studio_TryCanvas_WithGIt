object Form5: TForm5
  Left = 0
  Top = 0
  Caption = 'Form5'
  ClientHeight = 277
  ClientWidth = 478
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 40
    Top = 24
    Width = 17
    Height = 13
    Caption = 'R.V'
  end
  object Label2: TLabel
    Left = 40
    Top = 57
    Width = 39
    Height = 13
    Caption = 'Samples'
  end
  object ComboBox1: TComboBox
    Left = 80
    Top = 21
    Width = 145
    Height = 21
    TabOrder = 0
    Text = 'ComboBox1'
    OnChange = ComboBox1Change
    Items.Strings = (
      'Uniform'
      'Exponential'
      'Normal')
  end
  object Edit1: TEdit
    Left = 104
    Top = 54
    Width = 121
    Height = 21
    TabOrder = 1
    Text = '0'
    OnChange = Edit1Change
  end
  object DebugBox: TListBox
    Left = 40
    Top = 96
    Width = 73
    Height = 57
    ItemHeight = 13
    TabOrder = 2
  end
  object RunButton: TButton
    Left = 56
    Top = 208
    Width = 75
    Height = 25
    Caption = 'Run'
    TabOrder = 3
    OnClick = RunButtonClick
  end
end
