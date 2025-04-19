@interface QLFocusBackgroundLayer : CALayer

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } focusFrame;

- (id)init;
- (void)drawInContext:(struct CGContext { } *)a0;

@end
