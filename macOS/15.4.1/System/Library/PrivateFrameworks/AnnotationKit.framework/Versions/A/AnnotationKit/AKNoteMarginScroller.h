@interface AKNoteMarginScroller : NSScroller

@property (nonatomic) double minScrollDimension;
@property (nonatomic) long long orientation;

+ (BOOL)isCompatibleWithOverlayScrollers;
+ (id)scrollerWithOrientation:(long long)a0;

- (void)drawKnobSlotInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 highlight:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPart:(unsigned long long)a0;
- (void)setScrollerStyle:(long long)a0;

@end
