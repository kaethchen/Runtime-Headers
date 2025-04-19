@interface EQKitRule : EQKitBox {
    double _height;
    double _depth;
    double _width;
    struct CGColor { } *_cgColor;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (double)depth;
- (double)height;
- (double)width;
- (struct CGColor { } *)color;
- (BOOL)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithHeight:(double)a0 depth:(double)a1 width:(double)a2 cgColor:(struct CGColor { } *)a3;
- (void)renderIntoContext:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1;

@end
