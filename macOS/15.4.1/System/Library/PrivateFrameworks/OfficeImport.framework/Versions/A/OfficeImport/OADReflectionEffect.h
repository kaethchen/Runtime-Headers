@interface OADReflectionEffect : OADEffect {
    float mBlurRadius;
    float mStartOpacity;
    float mStartPosition;
    float mEndOpacity;
    float mEndPosition;
    float mDistance;
    float mDirection;
    float mFadeDirection;
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
- (float)blurRadius;
- (float)direction;
- (void)setBlurRadius:(float)a0;
- (void)setDirection:(float)a0;
- (float)distance;
- (void)setDistance:(float)a0;
- (void)setEndPosition:(float)a0;
- (float)endPosition;
- (float)startPosition;
- (BOOL)rotateWithShape;
- (float)endOpacity;
- (float)fadeDirection;
- (void)setEndOpacity:(float)a0;
- (void)setFadeDirection:(float)a0;
- (void)setRotateWithShape:(BOOL)a0;
- (void)setStartOpacity:(float)a0;
- (void)setStartPosition:(float)a0;
- (void)setStyleColor:(id)a0;
- (void)setXScale:(float)a0;
- (void)setXSkew:(float)a0;
- (void)setYScale:(float)a0;
- (void)setYSkew:(float)a0;
- (float)startOpacity;
- (float)xScale;
- (float)xSkew;
- (float)yScale;
- (float)ySkew;

@end
