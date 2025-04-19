@class NSView, NSVisualEffectView;

@interface CloudTabRowView : NSTableRowView {
    NSView *_separatorView;
    NSVisualEffectView *_backgroundVisualEffectView;
}

@property (nonatomic) BOOL shouldDrawSeparator;
@property (nonatomic) BOOL shouldUseVisualEffectViewBackground;

- (void).cxx_destruct;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawSeparatorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
