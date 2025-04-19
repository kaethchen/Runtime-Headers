@interface _TtCO6AppKit14IntelligenceUI8TextView : NSTextView {
    void /* unknown type, empty encoding */ suppressesAdaptiveImageGlyph;
}

@property (nonatomic, readonly) BOOL supportsAdaptiveImageGlyph;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_scrollRectToVisible:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 fromView:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)mouseDown:(id)a0;
- (void)paste:(id)a0;

@end
