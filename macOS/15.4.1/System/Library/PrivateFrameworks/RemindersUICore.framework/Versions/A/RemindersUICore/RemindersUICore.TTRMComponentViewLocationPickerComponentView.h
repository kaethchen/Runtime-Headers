@interface RemindersUICore.TTRMComponentViewLocationPickerComponentView : NSView <NSTextFieldDelegate> {
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ locationTextField;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
