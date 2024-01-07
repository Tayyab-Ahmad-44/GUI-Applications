object inputCnicForm: TinputCnicForm
  Left = 480
  Top = 281
  Caption = 'inputCnicForm'
  ClientHeight = 130
  ClientWidth = 362
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poDesigned
  TextHeight = 15
  object Label1: TLabel
    Left = 40
    Top = 48
    Width = 57
    Height = 15
    Caption = 'Enter Cnic:'
  end
  object cnicEdit: TEdit
    Left = 120
    Top = 45
    Width = 145
    Height = 23
    TabOrder = 0
  end
  object doneButton: TButton
    Left = 152
    Top = 86
    Width = 75
    Height = 25
    Caption = 'Done'
    TabOrder = 1
    OnClick = doneButtonClick
  end
end
