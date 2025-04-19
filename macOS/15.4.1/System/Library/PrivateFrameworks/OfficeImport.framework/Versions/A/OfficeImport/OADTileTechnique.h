@interface OADTileTechnique : OADImageFillTechnique {
    float mOffsetX;
    BOOL mIsOffsetXOverridden;
    float mOffsetY;
    BOOL mIsOffsetYOverridden;
    float mScaleX;
    BOOL mIsScaleXOverridden;
    float mScaleY;
    BOOL mIsScaleYOverridden;
    int mFlipMode;
    BOOL mIsFlipModeOverridden;
    int mAlignment;
    BOOL mIsAlignmentOverridden;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setAlignment:(int)a0;
- (int)alignment;
- (id)initWithDefaults;
- (float)offsetY;
- (float)offsetX;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (int)flipMode;
- (BOOL)isAlignmentOverridden;
- (BOOL)isAnythingOverridden;
- (BOOL)isFlipModeOverridden;
- (BOOL)isOffsetXOverridden;
- (BOOL)isOffsetYOverridden;
- (BOOL)isScaleXOverridden;
- (BOOL)isScaleYOverridden;
- (void)removeUnnecessaryOverrides;
- (float)scaleX;
- (float)scaleY;
- (void)setFlipMode:(int)a0;
- (void)setOffsetX:(float)a0;
- (void)setOffsetY:(float)a0;
- (void)setScaleX:(float)a0;
- (void)setScaleY:(float)a0;

@end
