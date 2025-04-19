@interface NSTitlebarSeparatorView : NSView {
    long long _type;
}

@property long long type;

- (id)_cuiOptions;
- (int)_vibrancyBlendMode;
- (void)_windowChangedKeyState;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)ignoreHitTest;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (long long)layerContentsRedrawPolicy;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
