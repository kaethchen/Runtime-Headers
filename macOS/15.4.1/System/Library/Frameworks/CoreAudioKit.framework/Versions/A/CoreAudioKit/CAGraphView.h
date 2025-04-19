@class NSDictionary, NSString, NSColor;

@interface CAGraphView : NSView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mGraphFrame;
    BOOL enabled;
    struct CGPoint { double x; double y; } mEditPoint;
    BOOL mMouseDown;
    NSDictionary *xAxisStringAttributes;
    NSDictionary *yAxisStringAttributes;
    long long mNumVerticalGridlines;
    long long mNumHorizontalGridlines;
    BOOL mVerticalIsLogarithmic;
    BOOL mHorizontalIsLogarithmic;
    double leftMargin;
    double rightMargin;
    double topMargin;
    double bottomMargin;
    double minXValue;
    double minYValue;
    double maxXValue;
    double maxYValue;
    long long logBase;
    NSString *verticalAxisLabel;
    NSString *horizontalAxisLabel;
    NSString *verticalUnitsLabel;
    NSString *horizontalUnitsLabel;
    NSColor *horizontalGridColor;
    NSColor *verticalGridColor;
}

- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (void)layout;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (id)stringForValue:(double)a0;
- (void)setHorizontalAxisIsLogarithmic:(BOOL)a0;
- (void)drawXAxisGrid;
- (void)drawYAxisGrid;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })graphFrame;
- (double)locationForHorizontalValue:(double)a0;
- (double)locationForVerticalValue:(double)a0;
- (void)setHorizontalAxisLabel:(id)a0;
- (void)setHorizontalGridColor:(id)a0;
- (void)setHorizontalUnitsLabel:(id)a0;
- (void)setLogBase:(long long)a0;
- (void)setMarginLeft:(double)a0 bottom:(double)a1;
- (void)setNumHorizontalGridlines:(long long)a0;
- (void)setNumVerticalGridlines:(long long)a0;
- (void)setVerticalAxisIsLogarithmic:(BOOL)a0;
- (void)setVerticalAxisLabel:(id)a0;
- (void)setVerticalGridColor:(id)a0;
- (void)setVerticalUnitsLabel:(id)a0;
- (void)setXMin:(double)a0 max:(double)a1;
- (void)setYMin:(double)a0 max:(double)a1;
- (id)stringForHorizontalValue:(double)a0;
- (id)stringForVerticalValue:(double)a0;
- (void)updateGraphFrame;
- (double)valueAtHorizontalGridIndex:(double)a0;
- (double)valueAtVerticalGridIndex:(double)a0;

@end
