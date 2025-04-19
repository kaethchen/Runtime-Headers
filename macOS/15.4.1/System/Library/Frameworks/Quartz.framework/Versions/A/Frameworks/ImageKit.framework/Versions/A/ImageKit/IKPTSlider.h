@interface IKPTSlider : NSSlider {
    id _delegate;
}

+ (Class)cellClass;

- (void)dealloc;
- (void)finalize;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;

@end
