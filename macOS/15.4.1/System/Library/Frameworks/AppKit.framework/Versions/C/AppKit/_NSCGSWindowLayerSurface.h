@class CAContext, NSCGSWindow;

@interface _NSCGSWindowLayerSurface : NSCGSWindowLayerSurface {
    NSCGSWindow *_window;
    unsigned int _surfaceID;
    CAContext *_context;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    struct CGColorSpace { } *_colorSpace;
    double _scale;
    unsigned char _opaque : 1;
}

- (void)dealloc;
- (id)window;
- (double)scale;
- (void)setScale:(double)a0;
- (id)initWithWindow:(id)a0;
- (void)setDisplayMask:(unsigned int)a0;
- (struct CGColorSpace { } *)colorSpace;
- (unsigned int)displayMask;
- (unsigned int)displayNumber;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)isOpaque;
- (id)layer;
- (void)setColorSpace:(struct CGColorSpace { } *)a0;
- (void)setDisplayNumber:(unsigned int)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLayer:(id)a0;
- (void)setOpaque:(BOOL)a0;
- (unsigned int)surfaceID;

@end
