@interface _NSFullScreenUnbufferedWindow : _NSBorderlessLayerTreeProjectionWindow

- (id)_createContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_ignoreForFullScreenTransition;
- (void)_setWindowTag;
- (BOOL)canEnterFullScreenMode;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 screen:(id)a1;
- (void)invalidateRestorableState;

@end
