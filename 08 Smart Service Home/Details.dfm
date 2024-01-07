object userDetailssForm: TuserDetailssForm
  Left = 392
  Top = 15
  Caption = 'userDetailssForm'
  ClientHeight = 636
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poDesigned
  TextHeight = 15
  object Label1: TLabel
    Left = 215
    Top = 64
    Width = 104
    Height = 25
    Caption = 'User Details'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 21
    Top = 104
    Width = 35
    Height = 15
    Caption = 'Name:'
  end
  object Label3: TLabel
    Left = 21
    Top = 144
    Width = 56
    Height = 15
    Caption = 'Phone No:'
  end
  object Label4: TLabel
    Left = 21
    Top = 184
    Width = 30
    Height = 15
    Caption = 'Cnic: '
  end
  object Label5: TLabel
    Left = 21
    Top = 219
    Width = 62
    Height = 15
    Caption = 'Having Car:'
  end
  object Label6: TLabel
    Left = 21
    Top = 264
    Width = 49
    Height = 15
    Caption = 'Location:'
  end
  object Label7: TLabel
    Left = 184
    Top = 304
    Width = 176
    Height = 25
    Caption = 'Subscribed Services'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label8: TLabel
    Left = 21
    Top = 344
    Width = 69
    Height = 15
    Caption = 'Smart Lights:'
  end
  object Label9: TLabel
    Left = 21
    Top = 384
    Width = 106
    Height = 15
    Caption = 'Thermostat Control:'
  end
  object Label10: TLabel
    Left = 21
    Top = 424
    Width = 79
    Height = 15
    Caption = 'Smart Security:'
  end
  object Label11: TLabel
    Left = 21
    Top = 464
    Width = 83
    Height = 15
    Caption = 'Smart Cameras:'
  end
  object Label12: TLabel
    Left = 21
    Top = 504
    Width = 81
    Height = 15
    Caption = 'Voice Assistant:'
  end
  object Label13: TLabel
    Left = 23
    Top = 544
    Width = 83
    Height = 15
    Caption = 'Smart Speakers:'
  end
  object nameLabel: TLabel
    Left = 136
    Top = 104
    Width = 3
    Height = 15
  end
  object speakerLabel: TLabel
    Left = 136
    Top = 424
    Width = 3
    Height = 15
  end
  object lightLabel: TLabel
    Left = 136
    Top = 384
    Width = 3
    Height = 15
  end
  object pnLabel: TLabel
    Left = 136
    Top = 141
    Width = 3
    Height = 15
  end
  object cnicLabel: TLabel
    Left = 136
    Top = 184
    Width = 20
    Height = 15
    Caption = 'hjhj'
  end
  object carLabel: TLabel
    Left = 136
    Top = 219
    Width = 3
    Height = 15
  end
  object locLabel: TLabel
    Left = 136
    Top = 264
    Width = 3
    Height = 15
  end
  object curtainLabel: TLabel
    Left = 136
    Top = 464
    Width = 3
    Height = 15
  end
  object heaterLabel: TLabel
    Left = 136
    Top = 504
    Width = 3
    Height = 15
  end
  object cameraLabel: TLabel
    Left = 136
    Top = 544
    Width = 3
    Height = 15
  end
  object lockLabel: TLabel
    Left = 136
    Top = 344
    Width = 3
    Height = 15
  end
  object Label14: TLabel
    Left = 66
    Top = 22
    Width = 92
    Height = 21
    Caption = 'Enter Cnic:'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Elephant'
    Font.Style = []
    ParentFont = False
  end
  object cnicEdit: TEdit
    Left = 184
    Top = 19
    Width = 153
    Height = 23
    TabOrder = 0
  end
  object Button2: TButton
    Left = 352
    Top = 18
    Width = 75
    Height = 25
    Caption = 'Search'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button1: TButton
    Left = 244
    Top = 579
    Width = 93
    Height = 33
    Caption = 'OK'
    TabOrder = 2
    OnClick = Button1Click
  end
end
