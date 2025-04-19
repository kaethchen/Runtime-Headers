@interface OADPresetShadowEffect : OADShadowEffect {
    int mPresetShadowType;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)equivalentOuterShadowEffect;
- (int)presetShadowType;
- (void)setPresetShadowType:(int)a0;

@end
