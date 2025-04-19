@interface ZMWSplitScreenBorderView : ZMWView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _borderRect;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } borderRect;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borderRect;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)refresh;
- (id)initWithSuperlayer:(id)a0 connection:(unsigned int)a1;
- (void)setBorderRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
