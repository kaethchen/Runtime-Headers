@class NSColor, NSMutableArray, NSBezierPath;

@interface AUHistoryView : NSView {
    float historySeconds;
    unsigned int displayStyle;
    NSMutableArray *values;
    float minValue;
    float maxValue;
    NSBezierPath *graphPath;
}

@property BOOL displayOnBlack;
@property (retain) NSColor *graphFillColor;
@property (retain) NSColor *graphBorderColor;
@property (retain) NSColor *graphPeaksColor;
@property (retain) NSColor *graphLinesColor;
@property float refreshRate;

- (void)dealloc;
- (void)addValue:(float)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)setHistory:(float)a0;
- (void)setDisplayStyle:(unsigned int)a0;
- (double)lineLocationForIndex:(double)a0;
- (void)setGraphRange:(float)a0 max:(float)a1;
- (void)updateValuesArray:(float)a0;

@end
