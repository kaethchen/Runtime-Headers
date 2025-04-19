@class NSView, NSPopover;

@interface NSViewControllerPopoverTransition : NSViewControllerPresentationAnimatorObject {
    NSPopover *_popover;
    BOOL _isClosing;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _positioningRect;
    NSView *_positioningView;
    unsigned long long _preferredEdge;
    long long _behavior;
    BOOL _hasFullSizeContent;
}

- (void)dealloc;
- (void)_windowDidClose:(id)a0;
- (void)animateDismissalOfViewController:(id)a0 fromViewController:(id)a1;
- (void)animatePresentationOfViewController:(id)a0 fromViewController:(id)a1;
- (id)initWithPositioningRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 preferredEdge:(unsigned long long)a2 behavior:(long long)a3 hasFullSizeContent:(BOOL)a4;

@end
