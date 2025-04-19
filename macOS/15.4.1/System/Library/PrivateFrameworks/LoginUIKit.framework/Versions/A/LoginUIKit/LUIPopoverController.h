@class LUIPopoverViewController, NSView, NSPopover;

@interface LUIPopoverController : LUIController {
    NSPopover *_popover;
    LUIPopoverViewController *_viewController;
    NSView *_positioningView;
    unsigned long long _preferredEdge;
}

+ (id)controllerWithStyle:(int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (int)type;
- (id)initWithStyle:(int)a0;
- (id)viewController;
- (void)_displaysDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_positioningRectForView:(id)a0 forPreferredEdge:(unsigned long long)a1;
- (void)setUIEnabled:(BOOL)a0;
- (void)showRelativeToView:(id)a0 preferredEdge:(unsigned long long)a1;

@end
