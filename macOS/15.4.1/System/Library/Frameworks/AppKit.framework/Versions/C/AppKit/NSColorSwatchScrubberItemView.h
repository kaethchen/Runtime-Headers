@class NSColor, NSRoundedRectView, NSColorDisplayView;

@interface NSColorSwatchScrubberItemView : NSScrubberItemView {
    NSColorDisplayView *_colorView;
    NSRoundedRectView *_roundedRectView;
}

@property BOOL isLeftmostItem;
@property BOOL isRightmostItem;
@property (copy) NSColor *color;
@property BOOL forceOutline;

+ (id)keyPathsForValuesInvalidatingLayout;

- (void)dealloc;
- (void)prepareForReuse;
- (void)layout;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
