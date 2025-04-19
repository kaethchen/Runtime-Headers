@class NSColor;

@interface UIRTDrawFocusView : NSView {
    double _width;
    double _opacity;
    NSColor *_color;
    int _kind;
    BOOL _isPreview;
}

+ (void)initialize;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setKind:(int)a0;
- (void)setStrokeColor:(id)a0;
- (void)setStrokeWidth:(double)a0;
- (void)bind:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)strokeColor;
- (double)strokeWidth;
- (void)setIsPreview:(BOOL)a0;
- (void)setStrokeOpacity:(double)a0;
- (double)strokeOpacity;

@end
