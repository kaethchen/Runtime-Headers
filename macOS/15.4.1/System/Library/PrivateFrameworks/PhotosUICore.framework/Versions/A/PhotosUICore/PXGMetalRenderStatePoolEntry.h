@class PXGEffectComponent, NSArray, PXGReusableMetalRenderState, PXGMetalRenderPassState, PXGMetalRenderStatePool, PXGMetalRenderTextureStore, NSString;
@protocol MTLDevice, MTLBuffer;

@interface PXGMetalRenderStatePoolEntry : NSObject <PXGMetalRenderState>

@property (readonly, nonatomic) PXGReusableMetalRenderState *renderState;
@property (readonly, weak, nonatomic) PXGMetalRenderStatePool *pool;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) struct { struct { void /* unknown type, empty encoding */ x0[4]; } x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; struct { void /* unknown type, empty encoding */ x0[4]; } x3; float x4; } *uniforms;
@property (nonatomic) struct { struct CGSize { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; double x4; unsigned long long x5; long long x6; double x7; } values;
@property (readonly, nonatomic) PXGEffectComponent *effectComponent;
@property (readonly, nonatomic) PXGMetalRenderPassState *currentRenderPassState;
@property (retain, nonatomic) NSArray *textures;
@property (retain, nonatomic) NSArray *captureSpriteTextures;
@property (readonly, nonatomic) PXGMetalRenderTextureStore *opaqueTextures;
@property (readonly, nonatomic) PXGMetalRenderTextureStore *translucentTextures;
@property (nonatomic) BOOL hasParsedRenderTextures;
@property (readonly, nonatomic) const struct { unsigned int x0; } *spriteEntities;
@property (readonly, nonatomic) const struct { float x0; float x1; float x2; } *spriteGeometries;
@property (readonly, nonatomic) const struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *spriteStyles;
@property (readonly, nonatomic) const struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *spriteInfos;
@property (readonly, nonatomic) const struct { struct { double x0; double x1; double x2; } x0; } *spriteOriginalGeometries;
@property (readonly, nonatomic) id<MTLBuffer> spriteEntitiesBuffer;
@property (readonly, nonatomic) id<MTLBuffer> spriteGeometriesBuffer;
@property (readonly, nonatomic) id<MTLBuffer> spriteStylesBuffer;
@property (readonly, nonatomic) id<MTLBuffer> spriteInfosBuffer;
@property (readonly, nonatomic) id<MTLBuffer> spriteOriginalGeometriesBuffer;
@property (readonly, nonatomic) id<MTLBuffer> resizableCapInsetsBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)keepAlive;
- (id)initWithReusableRenderState:(id)a0 pool:(id)a1;
- (void)prepareForRender:(long long)a0;
- (id)renderPassStateForSpriteCount:(long long)a0;
- (struct { float x0; float x1; float x2; float x3; } *)resizableCapInsetsBufferWithCount:(long long)a0;
- (struct { unsigned int x0; } *)spriteEntitiesBufferWithCount:(long long)a0;
- (struct { float x0; float x1; float x2; } *)spriteGeometriesBufferWithCount:(long long)a0;
- (struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)spriteInfosBufferWithCount:(long long)a0;
- (struct { struct { double x0; double x1; double x2; } x0; } *)spriteOriginalGeometriesBufferWithCount:(long long)a0;
- (struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)spriteStylesBufferWithCount:(long long)a0;

@end
