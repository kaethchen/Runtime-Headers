@interface CoreCDPUI.MacOSWrappedPinEntryView : NSView {
    void /* unknown type, empty encoding */ secret;
    void /* unknown type, empty encoding */ maxLength;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, readonly) BOOL acceptsFirstResponder;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;

@end
