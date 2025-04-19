@interface NSMutableAffineTransform : NSObject

+ (void)initialize;

- (float)scale;
- (void)setScale:(float)a0;
- (void)bind:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (id)affineTransform;
- (float)angle;
- (void)setAngle:(float)a0;
- (float)stretch;
- (void)setStretch:(float)a0;
- (void)changeAffineTransform:(id)a0;
- (void)setSkew:(float)a0;
- (void)setTX:(float)a0;
- (void)setTY:(float)a0;
- (float)skew;
- (float)tX;
- (float)tY;

@end
