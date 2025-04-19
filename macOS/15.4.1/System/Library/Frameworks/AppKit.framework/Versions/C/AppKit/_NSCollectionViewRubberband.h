@class NSColor;

@interface _NSCollectionViewRubberband : NSView {
    NSColor *_frameColor;
    NSColor *_fillColor;
}

- (void)dealloc;
- (id)_preferredAppearance;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrameColor:(id)a0 fillColor:(id)a1;
- (BOOL)isOpaque;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
