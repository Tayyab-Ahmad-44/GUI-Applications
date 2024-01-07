object locationInputForm: TlocationInputForm
  Left = 509
  Top = 251
  Caption = 'Input Location'
  ClientHeight = 179
  ClientWidth = 322
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poDesigned
  TextHeight = 15
  object Label1: TLabel
    Left = 80
    Top = 24
    Width = 134
    Height = 25
    Caption = 'Enter Location:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object locationEdit: TEdit
    Left = 56
    Top = 69
    Width = 185
    Height = 23
    TabOrder = 0
  end
  object Button1: TButton
    Left = 104
    Top = 112
    Width = 75
    Height = 33
    Caption = 'Done'
    TabOrder = 1
    OnClick = Button1Click
  end
end
