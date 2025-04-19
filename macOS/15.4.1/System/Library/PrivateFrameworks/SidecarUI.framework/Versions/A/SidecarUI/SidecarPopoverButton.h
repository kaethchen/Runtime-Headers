@class NSView;

@interface SidecarPopoverButton : NSButton {
    NSView *_highlightView;
}

- (void).cxx_destruct;
- (void)layout;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
