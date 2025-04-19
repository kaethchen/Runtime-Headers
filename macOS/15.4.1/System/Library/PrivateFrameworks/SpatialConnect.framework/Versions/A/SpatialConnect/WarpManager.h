@class Warp, MipGenPolyphase;
@protocol MTLLibrary, MTLDevice, MTLTexture;

@interface WarpManager : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLLibrary> library;
@property (retain, nonatomic) Warp *warp;
@property (retain, nonatomic) MipGenPolyphase *mipGen;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } mipGenLock;
@property (nonatomic) struct __IOSurfaceAccelerator { } *msr;
@property (nonatomic) struct _WarpStaticParameters { int warpMode; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } inputSize; float rateMaxSize; float rateMax; float rateMin; float rateFalloffPower; int atlasPaddingWidth; BOOL atlasTranspose; BOOL valid; } staticParams;
@property (retain, nonatomic) id<MTLTexture> cachedMipTexture;
@property (nonatomic) BOOL forceCenterWarp;
@property (nonatomic) BOOL showRate;
@property (nonatomic) BOOL disableWarp;
@property (nonatomic) BOOL disableTranspose;
@property (nonatomic) unsigned long long overrideWarpedPixelCount;
@property (nonatomic) int overrideWarpMode;

+ (int)decodeWarpData:(id)a0 intoStaticParam:(struct _WarpStaticParameters { int x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; float x2; float x3; float x4; float x5; int x6; BOOL x7; BOOL x8; } *)a1 dynamicParam:(struct _WarpDynamicParameters { float x0; float x1; float x2; } *)a2 timestamp:(unsigned long long *)a3;
+ (id)encodeStaticParams:(struct _WarpStaticParameters { int x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; float x2; float x3; float x4; float x5; int x6; BOOL x7; BOOL x8; })a0 dynamicParams:(struct _WarpDynamicParameters { float x0; float x1; float x2; })a1 timestamp:(unsigned long long)a2;

- (id)init;
- (void).cxx_destruct;
- (id)_createIntermediateMipTextureOfSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (BOOL)_isCachedMipTextureEqualForFormat:(unsigned long long)a0 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (id)_scaleIOSurface:(struct __IOSurface { } *)a0 intoIOSurface:(struct __IOSurface { } *)a1;
- (void)_updateStaticParamsWithWarpMode:(int)a0 inputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 outputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (BOOL)maxWarpedSizeForSourceSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 withWarpMode:(int)a1 forTargetWarpedPixelCount:(struct { int x0; union { unsigned long long x0; } x1; })a2 resultEncoderSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a3;
- (id)warpAtPoint:(SEL)a0 withConfiguration:(struct sc_foveation_data_display_configuration_s { unsigned short x0; unsigned short x1; id x2; struct CGSRegionObject *x3; })a1 warpMode:(int)a2 sourceTexture:(id)a3 targetTexture:(id)a4 timestamp:(unsigned long long)a5;
- (id)warpMapWithStaticParams:(struct _WarpStaticParameters { int x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; float x2; float x3; float x4; float x5; int x6; BOOL x7; BOOL x8; })a0 dynamicParams:(struct _WarpDynamicParameters { float x0; float x1; float x2; })a1 roiOut:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } *)a2;

@end
