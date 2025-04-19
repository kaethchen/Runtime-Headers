@interface AppKit.RotarySingleLineLabel : NSView {
    void /* unknown type, empty encoding */ attributedStrings;
    void /* unknown type, empty encoding */ defaultAttributes;
    void /* unknown type, empty encoding */ _attributedStrings;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ attributedStringRotarySequenceIterator;
    void /* unknown type, empty encoding */ becomeKeyWindowObserver;
    void /* unknown type, empty encoding */ resignKeyWindowObserver;
    void /* unknown type, empty encoding */ didCommonInit;
}

@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (nonatomic, readonly) double firstBaselineOffsetFromTop;
@property (nonatomic) BOOL hidden;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isHidden;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;

@end
