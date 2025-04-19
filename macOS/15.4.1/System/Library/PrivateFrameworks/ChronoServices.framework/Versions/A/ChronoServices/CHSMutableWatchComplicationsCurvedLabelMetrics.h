@class BSColor, CHSBezierPath;

@interface CHSMutableWatchComplicationsCurvedLabelMetrics : CHSWatchComplicationsCurvedLabelMetrics

@property (nonatomic) struct CGPoint { double x0; double x1; } circleCenter;
@property (nonatomic) double circleRadius;
@property (nonatomic) double maximumAngularWidth;
@property (nonatomic) double centerAngle;
@property (retain, nonatomic) CHSBezierPath *bezierPath;
@property (nonatomic) BOOL interior;
@property (nonatomic) double tracking;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) BSColor *textColor;
@property (nonatomic) unsigned long long accessoryPlacement;
@property (nonatomic) double accessoryPadding;
@property (nonatomic) struct CGSize { double x0; double x1; } accessoryMaxSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFontSize:(double)a0;
- (void)setTextColor:(id)a0;
- (void)setTracking:(double)a0;
- (void)setCenterAngle:(double)a0;
- (void)setAccessoryMaxSize:(struct CGSize { double x0; double x1; })a0;
- (void)setAccessoryPadding:(double)a0;
- (void)setAccessoryPlacement:(unsigned long long)a0;
- (void)setBezierPath:(id)a0;
- (void)setCircleCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setCircleRadius:(double)a0;
- (void)setInterior:(BOOL)a0;
- (void)setMaximumAngularWidth:(double)a0;

@end
