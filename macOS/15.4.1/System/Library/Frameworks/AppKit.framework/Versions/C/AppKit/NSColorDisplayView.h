@class NSColor, CALayer;

@interface NSColorDisplayView : NSView {
    CALayer *_diagonalLayer;
    CALayer *_transparentColorLayer;
    CALayer *_colorLayer;
}

@property (copy) NSColor *color;

+ (BOOL)clipsToBounds;
+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)dealloc;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLayer:(id)a0;
- (void)updateLayer;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
