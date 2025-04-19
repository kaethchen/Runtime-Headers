@class NSColor, NSBackgroundColorView;

@interface NSTableDeleteScanLineView : NSView {
    NSBackgroundColorView *_topLineView;
    NSBackgroundColorView *_bottomLineView;
}

@property (copy) NSColor *deleteLineColor;

- (void)dealloc;
- (id)deleteLineColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDeleteLineColor:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
