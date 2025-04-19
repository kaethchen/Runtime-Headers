@interface ToolbarDownloadsButtonProgressBar : NSView

@property (nonatomic) float progress;
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate;

- (id)accessibilityIdentifier;
- (id)accessibilityRole;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isAccessibilityElement;
- (void)_drawThreePatchesImage:(id)a0 operation:(unsigned long long)a1;

@end
