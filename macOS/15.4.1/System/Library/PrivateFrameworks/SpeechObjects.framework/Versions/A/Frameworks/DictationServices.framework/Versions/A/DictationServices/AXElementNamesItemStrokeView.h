@class NSColor, NSBezierPath;

@interface AXElementNamesItemStrokeView : NSView

@property (retain, nonatomic) NSBezierPath *path;
@property (retain, nonatomic) NSColor *color;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
