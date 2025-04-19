@interface EQKitVSpace : EQKitBox {
    double _height;
    double _depth;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (double)depth;
- (double)height;
- (BOOL)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithHeight:(double)a0 depth:(double)a1;
- (double)layoutDepth;
- (double)layoutHeight;

@end
