@interface VUIAVPlayerView : AVPlayerView

@property (nonatomic, getter=isSwipeInteractionEnabled) BOOL swipeInteractionEnabled;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollWheel:(id)a0;

@end
