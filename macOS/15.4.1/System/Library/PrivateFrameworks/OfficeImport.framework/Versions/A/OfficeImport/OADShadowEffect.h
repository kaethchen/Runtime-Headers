@class OADColor;

@interface OADShadowEffect : OADEffect {
    OADColor *mColor;
    float mBlurRadius;
    float mDistance;
    float mAngle;
}

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)color;
- (id)initWithType:(int)a0;
- (void)setColor:(id)a0;
- (float)blurRadius;
- (void)setBlurRadius:(float)a0;
- (float)angle;
- (float)distance;
- (void)setAngle:(float)a0;
- (void)setDistance:(float)a0;
- (id)initWithShadowEffect:(id)a0 type:(int)a1;
- (void)setStyleColor:(id)a0;

@end
