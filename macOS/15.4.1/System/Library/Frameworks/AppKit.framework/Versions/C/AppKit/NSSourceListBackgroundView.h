@interface NSSourceListBackgroundView : NSView

- (id)initWithCoder:(id)a0;
- (id)_cuiOptions;
- (void)_setTrackingAreasDirty:(unsigned long long)a0;
- (long long)_trackingAreasDirty;
- (void)_windowChangedKeyState;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
