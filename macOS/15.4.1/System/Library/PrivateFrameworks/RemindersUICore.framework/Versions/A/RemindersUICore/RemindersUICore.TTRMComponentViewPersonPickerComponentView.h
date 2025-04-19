@interface RemindersUICore.TTRMComponentViewPersonPickerComponentView : NSView <CNContactPickerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ picker;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ personPickerButton;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)personPickerAction:(id)a0;

@end
