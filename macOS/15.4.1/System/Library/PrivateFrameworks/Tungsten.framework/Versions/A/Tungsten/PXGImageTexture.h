@interface PXGImageTexture : PXGBaseTexture {
    struct CGImage { } *_sourceCGImage;
    struct __CVBuffer { } *_sourceCVPixelBuffer;
}

@property (nonatomic) struct CGImage { } *sourceCGImage;
@property (nonatomic) struct __CVBuffer { } *sourceCVPixelBuffer;
@property (retain, nonatomic) id cacheKey;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ orientationTransform;
@property (readonly, nonatomic) float alpha;

+ (id)_sharedCIContext;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct CGImage { } *)imageRepresentation;
- (id)copyWithOrientationTransform:(SEL)a0 alpha:(float)a1;
- (void)getTextureInfos:(struct { float x0; } *)a0 forSpriteIndexes:(const unsigned int *)a1 geometries:(const struct { struct { double x0; double x1; double x2; } x0; } *)a2 spriteStyles:(const struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a3 spriteInfos:(const struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a4 screenScale:(double)a5 count:(unsigned int)a6;

@end
