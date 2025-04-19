@class NSColor, NSBezierPath, NSDictionary;

@interface CACustomToolTipView : NSView {
    NSBezierPath *tooltipPath;
    NSDictionary *strips;
    float minWidth;
}

@property unsigned int cornerRadius;
@property struct CGSize { double width; double height; } arrowSize;
@property (retain) NSColor *backgroundColor;
@property (retain) NSColor *frameColor;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)addStripHelper:(id)a0 parameter:(unsigned int)a1;
- (void)addToolTipPopupStripForParameter:(unsigned int)a0 label:(id)a1 minValue:(float)a2 maxValue:(float)a3 stringValues:(id)a4;
- (void)addToolTipStripForParameter:(unsigned int)a0 label:(id)a1 minValue:(float)a2 maxValue:(float)a3 unitLabel:(id)a4;
- (void)addToolTipStripForParameter:(unsigned int)a0 label:(id)a1 minValue:(float)a2 maxValue:(float)a3 unitLabel:(id)a4 editable:(BOOL)a5;
- (void)parameterStripSizeChanged:(id)a0;
- (void)redrawBackground;
- (void)repositionStrips;
- (void)setLabel:(id)a0 parameter:(unsigned int)a1;
- (void)updateParameter:(unsigned int)a0 value:(float)a1;

@end
