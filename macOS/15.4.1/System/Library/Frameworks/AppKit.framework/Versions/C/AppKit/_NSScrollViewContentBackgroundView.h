@class NSColor, NSVisualEffectView;

@interface _NSScrollViewContentBackgroundView : NSView {
    NSColor *_backgroundColor;
    NSVisualEffectView *_visualEffectView;
}

@property (retain) NSColor *backgroundColor;

- (void)dealloc;
- (void)layout;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
