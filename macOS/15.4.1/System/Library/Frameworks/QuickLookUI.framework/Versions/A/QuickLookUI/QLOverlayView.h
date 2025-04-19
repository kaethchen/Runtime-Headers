@class QLPreviewOverlayController;

@interface QLOverlayView : NSView {
    BOOL _hasBackground;
}

@property (weak) QLPreviewOverlayController *delegate;
@property BOOL hasBackground;

- (void).cxx_destruct;
- (unsigned int)_CAViewFlags;
- (id)accessibilityChildren;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)allowsVibrancy;
- (void)mouseDown:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)updateBackground;

@end
