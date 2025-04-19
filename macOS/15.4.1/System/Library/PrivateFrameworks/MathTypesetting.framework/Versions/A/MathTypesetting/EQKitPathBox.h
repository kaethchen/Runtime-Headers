@interface EQKitPathBox : EQKitBox {
    BOOL _dimensionsValid;
    BOOL _erasableBoundsValid;
    double _height;
    double _depth;
    double _width;
    struct CGColor { } *_cgColor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _erasableBounds;
}

@property (readonly, nonatomic) double paddingLeft;
@property (readonly, nonatomic) double paddingRight;
@property (readonly, nonatomic) struct CGPath { } *cgPath;
@property (readonly, nonatomic) int drawingMode;
@property (readonly, nonatomic) double lineWidth;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (double)depth;
- (double)height;
- (double)width;
- (struct CGColor { } *)color;
- (BOOL)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })erasableBounds;
- (id)initWithCGPath:(struct CGPath { } *)a0 height:(double)a1 cgColor:(struct CGColor { } *)a2;
- (id)initWithCGPath:(struct CGPath { } *)a0 height:(double)a1 cgColor:(struct CGColor { } *)a2 drawingMode:(int)a3 lineWidth:(double)a4;
- (id)initWithCGPath:(struct CGPath { } *)a0 height:(double)a1 paddingLeft:(double)a2 paddingRight:(double)a3 cgColor:(struct CGColor { } *)a4;
- (id)initWithCGPath:(struct CGPath { } *)a0 height:(double)a1 paddingLeft:(double)a2 paddingRight:(double)a3 cgColor:(struct CGColor { } *)a4 drawingMode:(int)a5 lineWidth:(double)a6;
- (void)p_cacheDimensions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_cacheErasableBounds;
- (void)renderIntoContext:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (void)p_ensureDimensionsAreValid;

@end
