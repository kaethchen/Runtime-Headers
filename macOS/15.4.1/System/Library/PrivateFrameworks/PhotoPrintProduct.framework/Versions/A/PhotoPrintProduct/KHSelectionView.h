@protocol KHSelectionViewDelegate;

@interface KHSelectionView : UXView

@property (weak) id<KHSelectionViewDelegate> delegate;

- (id)description;
- (void).cxx_destruct;
- (void)layout;
- (void)beginGestureWithEvent:(id)a0;
- (void)endGestureWithEvent:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)magnifyWithEvent:(id)a0;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)addSelectionLayer:(id)a0;
- (void)removeAllSelectionLayers;

@end
