@class NSColor, NSArray, NSBezierPath, NSDictionary, CUINamedVectorGlyph;

@interface NSSymbolImageRep : NSImageRep {
    struct _NSSymbolImageRepGeometry { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } alignmentRect; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageRect; double scaleFactor; BOOL needsHorizontalFlip; } _geometry;
    CUINamedVectorGlyph *_vectorGlyph;
    NSArray *_colors;
    long long _renderingStyle;
    NSDictionary *_namedColorOverrides;
    NSColor *_debugBackgroundColor;
    struct CGImage { } *_img;
}

@property (readonly, nonatomic, getter=isTintedMonochrome) BOOL tintedMonochrome;
@property (readonly, nonatomic) long long renderingStyle;
@property (readonly, copy) NSBezierPath *outlinePath;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (struct CGImage { } *)_newRBLayerBasedCGImage;
- (unsigned int)_rbSymbolRenderingMode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRect;
- (void)configureSymbolLayer:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2 baseColor:(id)a3;
- (BOOL)draw;
- (BOOL)inheritsGeometryFromImage;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 geometry:(struct _NSSymbolImageRepGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; double x2; BOOL x3; })a1 vectorGlyph:(id)a2 colors:(id)a3 renderingStyle:(long long)a4 namedColorOverrides:(id)a5 debugBackgroundColor:(id)a6;
- (BOOL)isTemplate;
- (id)vectorGlyph;

@end
