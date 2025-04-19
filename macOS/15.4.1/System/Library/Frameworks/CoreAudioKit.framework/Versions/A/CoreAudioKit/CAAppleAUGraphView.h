@class NSColor, CAAxisSettings;

@interface CAAppleAUGraphView : NSView

@property (retain) NSColor *graphFillColor;
@property (retain) NSColor *graphBorderColor;
@property (retain) NSColor *gridPointColor;
@property (retain) NSColor *gridPointSelectedColor;
@property (retain) NSColor *gridPointHighlightColor;
@property (retain) NSColor *guideColor;
@property (retain) NSColor *guideHighlightColor;
@property (retain) NSColor *widthAreaFillColor;
@property double leftMargin;
@property double rightMargin;
@property double topMargin;
@property double bottomMargin;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } graphFrame;
@property (readonly) double activeWidth;
@property double labelGap;
@property (readonly) CAAxisSettings *xAxisSettings;
@property (readonly) CAAxisSettings *yAxisSettings;

+ (id)userAccentColor;

- (void)dealloc;
- (void)cleanup;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)awakeFromNib;
- (void)drawFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidEndLiveResize;
- (id)stringForValue:(float)a0;
- (void)drawXAxisLabels;
- (void)drawYAxisLabels;
- (void)drawXAxisGrid;
- (void)drawYAxisGrid;
- (double)locationForXValue:(float)a0;
- (double)locationForYValue:(float)a0;
- (double)octaveWidthPixels;
- (id)stringForXValue:(float)a0;
- (id)stringForYValue:(float)a0;
- (void)updateGraphFrame;
- (float)valueAtXGridIndex:(float)a0;
- (float)valueAtYGridIndex:(float)a0;
- (float)valueForXLocation:(double)a0;
- (float)valueForYLocation:(double)a0;

@end
