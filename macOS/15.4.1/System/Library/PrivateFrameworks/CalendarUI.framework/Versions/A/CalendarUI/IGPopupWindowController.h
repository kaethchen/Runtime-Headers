@class NSView;

@interface IGPopupWindowController : NSWindowController {
    NSView *_parentView;
    NSView *_containerView;
}

@property (retain) NSView *initialFirstResponder;

- (void).cxx_destruct;
- (void)setView:(id)a0;
- (id)initWithView:(id)a0;
- (id)attach;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForDeltaHeight:(double)a0;
- (void)openWithAnimation:(BOOL)a0;
- (void)prepareToPopupOnView:(id)a0 inView:(id)a1;
- (void)resetFrameFromViews;
- (long long)runAndAttach;
- (void)windowMouseDown:(id)a0;

@end
