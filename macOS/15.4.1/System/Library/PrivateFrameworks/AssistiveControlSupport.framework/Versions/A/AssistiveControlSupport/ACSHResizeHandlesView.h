@class NSArray;

@interface ACSHResizeHandlesView : ACSHView

@property (retain, nonatomic) NSArray *_resizeHandles;

+ (void)initialize;
+ (double)handleSize;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;
- (void)suspendTracking;
- (void)initView;
- (long long)resizeTypeForView:(id)a0;
- (void)resumeTracking;

@end
