@interface EQKitVSpace : EQKitBox

@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double depth;
@property (readonly, nonatomic) double layoutHeight;
@property (readonly, nonatomic) double layoutDepth;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithHeight:(double)a0 depth:(double)a1;

@end
