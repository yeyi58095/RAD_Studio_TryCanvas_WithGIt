object ShowChartDialog: TShowChartDialog
  Left = 0
  Top = 0
  Caption = 'ShowChartDialog'
  ClientHeight = 294
  ClientWidth = 563
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = showDiagram
  PixelsPerInch = 96
  TextHeight = 13
  object Chart1: TChart
    Left = 72
    Top = 8
    Width = 400
    Height = 250
    Title.Text.Strings = (
      'TChart')
    Chart3DPercent = 1
    TabOrder = 0
    DefaultCanvas = 'TGDIPlusCanvas'
    ColorPaletteIndex = 13
    object Series1: TBarSeries
      ConePercent = 30
      Marks.Visible = False
      BarStyle = bsCone
      BarWidthPercent = 1
      Dark3D = False
      MarksLocation = mlCenter
      MarksOnBar = True
      MultiBar = mbNone
      SideMargins = False
      Sides = 126
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Bar'
      YValues.Order = loNone
    end
  end
end
