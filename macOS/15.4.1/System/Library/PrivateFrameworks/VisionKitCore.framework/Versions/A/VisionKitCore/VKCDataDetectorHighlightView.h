@class NSBezierPath, CAShapeLayer;

@interface VKCDataDetectorHighlightView : VKPlatformView

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) NSBezierPath *path;
@property (nonatomic) BOOL hideDashedLine;

+ (id)highlightColor;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToSuperview;
- (BOOL)wantsDefaultClipping;
- (void)configureDashPatternForPath:(id)a0;

@end
