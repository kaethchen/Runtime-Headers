@interface ACSHResizeHandleView : ACSHView

@property (readonly, nonatomic) long long resizeType;

+ (void)initialize;
+ (double)handleSize;

- (BOOL)isFlipped;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;
- (void)viewWillMoveToWindow:(id)a0;
- (int)_cursor;
- (id)initWithSuperFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 resizeType:(long long)a1;

@end
