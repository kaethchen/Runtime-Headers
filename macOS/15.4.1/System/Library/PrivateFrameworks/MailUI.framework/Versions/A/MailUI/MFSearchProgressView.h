@interface MFSearchProgressView : NSView

@property (nonatomic, getter=isAnimating) BOOL animating;

- (void)invalidateLayout;
- (void)setAnimating:(BOOL)a0 fade:(BOOL)a1;

@end
