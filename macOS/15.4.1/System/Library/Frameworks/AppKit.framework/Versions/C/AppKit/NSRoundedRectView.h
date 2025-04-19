@class NSColor;

@interface NSRoundedRectView : NSView

@property (copy) NSColor *strokeColor;
@property (copy) NSColor *fillColor;
@property double strokeWidth;
@property double cornerRadius;

+ (id)viewWithFillColor:(id)a0 cornerRadius:(double)a1;
+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)viewWithStrokeColor:(id)a0 strokeWidth:(double)a1 cornerRadius:(double)a2;
+ (id)viewWithStrokeColor:(id)a0 strokeWidth:(double)a1 fillColor:(id)a2 cornerRadius:(double)a3;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithStrokeColor:(id)a0 strokeWidth:(double)a1 fillColor:(id)a2 cornerRadius:(double)a3;

@end
