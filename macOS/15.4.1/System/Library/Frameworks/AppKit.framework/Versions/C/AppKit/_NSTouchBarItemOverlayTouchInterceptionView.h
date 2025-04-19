@interface _NSTouchBarItemOverlayTouchInterceptionView : NSView {
    id /* block */ _touchInterceptor;
}

@property BOOL strictInterception;
@property (copy) id /* block */ touchInterceptor;

- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;

@end
