@class NSString;

@interface MTLSamplerDescriptorInternal : MTLSamplerDescriptor {
    struct MTLSamplerDescriptorPrivate { union { struct { unsigned char minFilter : 2; unsigned char magFilter : 2; unsigned char mipFilter : 2; unsigned char sAddressMode : 3; unsigned char tAddressMode : 3; unsigned char rAddressMode : 3; unsigned char normalizedCoords : 1; unsigned char borderColor : 2; unsigned char lodAverage : 1; unsigned char compareFunction : 3; unsigned char supportArgumentBuffers : 1; unsigned char reductionMode : 2; unsigned char forceResourceIndex : 1; unsigned char forceSeamsOnCubemapFiltering : 1; } ; unsigned int miscHash; } ; union { unsigned int lodMinClampHash; float lodMinClamp; } ; union { unsigned int lodMaxClampHash; float lodMaxClamp; } ; union { unsigned int lodBiasHash; float lodBias; } ; unsigned long long maxAnisotropy; NSString *label; unsigned long long resourceIndex; unsigned int customBorderColorValue[4]; unsigned long long pixelFormat; } _private;
}

@property (nonatomic) unsigned long long borderColorSPI;
@property (nonatomic) unsigned int customBorderColorValue_0;
@property (nonatomic) unsigned int customBorderColorValue_1;
@property (nonatomic) unsigned int customBorderColorValue_2;
@property (nonatomic) unsigned int customBorderColorValue_3;
@property (nonatomic) unsigned long long reductionMode;
@property (nonatomic) BOOL forceSeamsOnCubemapFiltering;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)compareFunction;
- (void)setPixelFormat:(unsigned long long)a0;
- (unsigned long long)borderColor;
- (const struct MTLSamplerDescriptorPrivate { union { struct { unsigned char x0 : 2; unsigned char x1 : 2; unsigned char x2 : 2; unsigned char x3 : 3; unsigned char x4 : 3; unsigned char x5 : 3; unsigned char x6 : 1; unsigned char x7 : 2; unsigned char x8 : 1; unsigned char x9 : 3; unsigned char x10 : 1; unsigned char x11 : 2; unsigned char x12 : 1; unsigned char x13 : 1; } x0; unsigned int x1; } x0; union { unsigned int x0; float x1; } x1; union { unsigned int x0; float x1; } x2; union { unsigned int x0; float x1; } x3; unsigned long long x4; id x5; unsigned long long x6; unsigned int x7[4]; unsigned long long x8; } *)descriptorPrivate;
- (id)formattedDescription:(unsigned long long)a0;
- (id)label;
- (BOOL)lodAverage;
- (float)lodMaxClamp;
- (float)lodMinClamp;
- (unsigned long long)magFilter;
- (unsigned long long)maxAnisotropy;
- (unsigned long long)minFilter;
- (unsigned long long)mipFilter;
- (BOOL)normalizedCoordinates;
- (unsigned long long)pixelFormat;
- (unsigned long long)rAddressMode;
- (unsigned long long)resourceIndex;
- (unsigned long long)sAddressMode;
- (void)setForceResourceIndex:(BOOL)a0;
- (void)setLabel:(id)a0;
- (void)setResourceIndex:(unsigned long long)a0;
- (BOOL)supportArgumentBuffers;
- (unsigned long long)tAddressMode;
- (void)setMagFilter:(unsigned long long)a0;
- (void)setMinFilter:(unsigned long long)a0;
- (void)setNormalizedCoordinates:(BOOL)a0;
- (void)setSAddressMode:(unsigned long long)a0;
- (void)setTAddressMode:(unsigned long long)a0;
- (void)setBorderColor:(unsigned long long)a0;
- (void)setMaxAnisotropy:(unsigned long long)a0;
- (void)setMipFilter:(unsigned long long)a0;
- (float)lodBias;
- (void)setLodMinClamp:(float)a0;
- (void)setLodMaxClamp:(float)a0;
- (BOOL)forceResourceIndex;
- (void)setCompareFunction:(unsigned long long)a0;
- (void)setLodAverage:(BOOL)a0;
- (void)setLodBias:(float)a0;
- (void)setRAddressMode:(unsigned long long)a0;
- (void)setSupportArgumentBuffers:(BOOL)a0;

@end
