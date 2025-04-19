@interface CalculateUI.PlatformView : NSView <NSUserInterfaceValidations> {
    void /* unknown type, empty encoding */ handleKeypress;
    void /* unknown type, empty encoding */ handlePasteboard;
    void /* unknown type, empty encoding */ allowHighPrecision;
    void /* unknown type, empty encoding */ isFocusable;
}

@property (nonatomic, readonly) BOOL acceptsFirstResponder;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)copy:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)paste:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;

@end
