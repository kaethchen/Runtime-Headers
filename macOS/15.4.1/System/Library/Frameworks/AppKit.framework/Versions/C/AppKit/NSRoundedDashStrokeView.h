@class NSColor;

@interface NSRoundedDashStrokeView : NSView

@property double cornerRadius;
@property double lineDash;
@property double strokeThickness;
@property (copy) NSColor *dashColor;
@property (copy) NSColor *innerDashColor;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
