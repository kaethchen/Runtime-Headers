@interface IMKUICorneredPanelMask : IMKUIPanelMask

@property (nonatomic) double cornerRadius;

+ (id)maskWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;

- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;

@end
