@class NSColor;

@interface NSBackgroundColorView : NSView {
    NSColor *_backgroundColor;
}

@property (copy) NSColor *backgroundColor;

- (void)dealloc;
- (id)_preferredAppearance;
- (void)_setTrackingAreasDirty:(unsigned long long)a0;
- (long long)_trackingAreasDirty;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
