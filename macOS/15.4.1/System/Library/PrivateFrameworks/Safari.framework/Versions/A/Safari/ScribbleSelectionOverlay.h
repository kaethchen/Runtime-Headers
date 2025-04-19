@class BackdropView, NSView;

@interface ScribbleSelectionOverlay : NSButton {
    BackdropView *_blurView;
    NSView *_borderView;
}

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)fadeIn;
- (void)_fadeToOpacity:(double)a0 withCompletion:(id /* block */)a1;
- (void)fadeOutWithCompletion:(id /* block */)a0;

@end
