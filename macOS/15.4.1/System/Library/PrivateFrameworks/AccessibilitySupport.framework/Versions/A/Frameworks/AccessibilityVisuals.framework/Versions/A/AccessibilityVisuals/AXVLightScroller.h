@interface AXVLightScroller : NSScroller

+ (BOOL)isCompatibleWithOverlayScrollers;

- (void)fadeOut;
- (void)drawKnob;
- (void)drawKnobSlotInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 highlight:(BOOL)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)knobStyle;
- (void)setFloatValue:(float)a0;

@end
