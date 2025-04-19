@interface MTLMotionEstimatorCapabilitiesInternal : MTLMotionEstimatorCapabilities {
    struct MTLMotionEstimatorCapabilitiesPrivate { unsigned long long maxTextureWidth; unsigned long long maxTextureHeight; unsigned long long macroBlockWidth; unsigned long long macroBlockHeight; unsigned long long regionWidth; unsigned long long regionHeight; unsigned long long precisionNumerator; unsigned long long precisionDenominator; unsigned long long minTextureWidth; unsigned long long minTextureHeight; } _private;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)macroBlockWidth;
- (unsigned long long)maxTextureWidth;
- (unsigned long long)minTextureWidth;
- (struct MTLMotionEstimatorCapabilitiesPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; } *)descriptorPrivate;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)macroBlockHeight;
- (unsigned long long)maxTextureHeight;
- (unsigned long long)minTextureHeight;
- (unsigned long long)regionHeight;
- (unsigned long long)regionWidth;
- (unsigned long long)precisionDenominator;
- (unsigned long long)precisionNumerator;

@end
