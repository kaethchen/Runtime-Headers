@class PXGUniform;

@interface PXGUniformAlias : PXGUniform

@property (readonly, nonatomic) PXGUniform *original;
@property (readonly, nonatomic) long long index;

- (id)description;
- (id)name;
- (float)floatValue;
- (const void *)bytes;
- (void).cxx_destruct;
- (struct CGImage { } *)image;
- (long long)bytesLength;
- (id)cachedTexture;
- (void /* unknown type, empty encoding */)float2Value;
- (void /* unknown type, empty encoding */)float3Value;
- (void /* unknown type, empty encoding */)float4Value;
- (id)initWithName:(id)a0 type:(unsigned long long)a1;
- (id /* block */)textureProvider;
- (id)initWithIndex:(long long)a0 aliasing:(id)a1;
- (BOOL)isEquivalentToUniform:(id)a0;
- (void)setCachedTexture:(id)a0;

@end
