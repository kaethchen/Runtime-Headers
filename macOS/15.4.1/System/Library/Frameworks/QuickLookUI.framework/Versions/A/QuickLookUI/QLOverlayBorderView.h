@interface QLOverlayBorderView : NSView {
    BOOL _setup;
}

+ (id)overlayBorderColor;

- (unsigned int)_CAViewFlags;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)wantsUpdateLayer;
- (void)updateOverlayBorder;

@end
