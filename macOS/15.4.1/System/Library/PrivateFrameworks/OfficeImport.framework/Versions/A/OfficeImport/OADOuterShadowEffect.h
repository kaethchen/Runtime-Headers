@interface OADOuterShadowEffect : OADShadowEffect {
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    BOOL mRotateWithShape;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)setAlignment:(int)a0;
- (int)alignment;
- (BOOL)rotateWithShape;
- (void)setRotateWithShape:(BOOL)a0;
- (void)setXScale:(float)a0;
- (void)setXSkew:(float)a0;
- (void)setYScale:(float)a0;
- (void)setYSkew:(float)a0;
- (float)xScale;
- (float)xSkew;
- (float)yScale;
- (float)ySkew;

@end
