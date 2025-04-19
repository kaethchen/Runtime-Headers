@interface _NSTouchBarCustomizationPreviewDebugCursorView : NSView

@property struct CGPoint { double x; double y; } cursorPoint;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isFlipped;

@end
