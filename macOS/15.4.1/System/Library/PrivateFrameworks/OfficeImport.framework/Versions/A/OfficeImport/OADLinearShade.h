@interface OADLinearShade : OADShade {
    float mAngle;
    BOOL mIsAngleOverridden;
    BOOL mScaled;
    BOOL mIsScaledOverridden;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (float)angle;
- (void)setAngle:(float)a0;
- (id)initWithDefaults;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAngleOverridden;
- (BOOL)isAnythingOverridden;
- (BOOL)isScaledOverridden;
- (void)removeUnnecessaryOverrides;
- (BOOL)scaled;
- (void)setScaled:(BOOL)a0;

@end
