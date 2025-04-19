@class NSAttributedString;

@interface EQKitStringBox : EQKitBox {
    BOOL _dimensionsValid;
    double _height;
    double _depth;
    double _width;
    struct CGColor { } *_cgColor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _erasableBounds;
}

@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) struct __CTLine { } *line;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (double)depth;
- (double)height;
- (double)width;
- (struct CGColor { } *)color;
- (BOOL)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })erasableBounds;
- (id)initWithAttributedString:(id)a0 cgColor:(struct CGColor { } *)a1;
- (void)p_cacheDimensions;
- (double)positionOfCharacterAtIndex:(unsigned long long)a0;
- (void)renderIntoContext:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)p_appendEntryToSpec:(void *)a0 run:(struct __CTRun { } *)a1 glyphRange:(struct { long long x0; long long x1; })a2 offset:(struct CGPoint { double x0; double x1; })a3;
- (void)p_ensureDimensionsAreValid;

@end
