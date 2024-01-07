object serviceProviderForm: TserviceProviderForm
  Left = 407
  Top = 148
  Caption = 'Smart Services'
  ClientHeight = 404
  ClientWidth = 409
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poDesigned
  TextHeight = 15
  object Label3: TLabel
    Left = 141
    Top = 24
    Width = 131
    Height = 25
    Caption = 'Smart Services'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label1: TLabel
    Left = 40
    Top = 72
    Width = 193
    Height = 15
    Caption = 'Check the one you wanna subscribe:'
  end
  object locksCheckBox: TCheckBox
    Left = 40
    Top = 112
    Width = 97
    Height = 17
    Caption = 'Smart Lights'
    TabOrder = 0
  end
  object lightsCheckBox: TCheckBox
    Left = 40
    Top = 152
    Width = 169
    Height = 17
    Caption = 'Smart Thermostat Control'
    TabOrder = 1
  end
  object speakersCheckBox: TCheckBox
    Left = 40
    Top = 192
    Width = 105
    Height = 17
    Caption = 'Smart Security'
    TabOrder = 2
  end
  object curtainsCheckBox: TCheckBox
    Left = 40
    Top = 232
    Width = 105
    Height = 17
    Caption = 'Smart Cameras'
    TabOrder = 3
  end
  object heatersCheckBox: TCheckBox
    Left = 40
    Top = 272
    Width = 105
    Height = 17
    Caption = 'Voice Assistant'
    TabOrder = 4
  end
  object camerasCheckBox: TCheckBox
    Left = 40
    Top = 312
    Width = 105
    Height = 17
    Caption = 'Smart Speakers'
    TabOrder = 5
  end
  object Button1: TButton
    Left = 166
    Top = 352
    Width = 91
    Height = 41
    Caption = 'Done'
    TabOrder = 6
    OnClick = Button1Click
  end
end
