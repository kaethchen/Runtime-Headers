@class NSView;

@interface IGPopupWindow : NSWindow {
    NSView *_controlView;
    BOOL _hasCloseBox;
}

+ (id)popupWindowWithView:(id)a0;

- (void).cxx_destruct;
- (void)setView:(id)a0;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeKeyWindow;
- (BOOL)hasCloseBox;
- (BOOL)hasShadow;
- (id)initWithView:(id)a0;
- (void)orderOut:(id)a0;
- (void)hideControlView;
- (void)setHasCloseBox:(BOOL)a0;
- (void)showControlView;

@end
