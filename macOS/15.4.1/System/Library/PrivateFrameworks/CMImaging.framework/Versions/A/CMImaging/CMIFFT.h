@interface CMIFFT : NSObject

+ (id)CMIFFT1DTransform:(id)a0 figMetalContext:(id)a1 width:(unsigned int)a2 layout:(long long)a3 precision:(long long)a4;
+ (id)CMIFFT2DTransform:(id)a0 figMetalContext:(id)a1 width:(unsigned int)a2 height:(unsigned int)a3 layout:(long long)a4 precision:(long long)a5;
+ (id)CMIFFT1DTransformBatched:(id)a0 figMetalContext:(id)a1 width:(unsigned int)a2 layout:(long long)a3 precision:(long long)a4 batchSize:(unsigned int)a5;

@end
