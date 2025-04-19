@class PXGEffectComponent, NSArray, NSString, PXGMetalRenderPassState, PXGMetalRenderTextureStore, NSMutableIndexSet;
@protocol MTLDevice, MTLBuffer;

@interface PXGReusableMetalRenderState : NSObject <PXGMetalRenderState> {
    struct { struct { void /* unknown type, empty encoding */ columns[4]; } viewMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } viewProjectionMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } billboardMatrix; void /* unknown type, empty encoding */ renderOrigin; float screenScale; } _uniforms;
    NSMutableIndexSet *_renderedFrameIds;
}

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) struct { struct { void /* unknown type, empty encoding */ x0[4]; } x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; struct { void /* unknown type, empty encoding */ x0[4]; } x3; float x4; } *uniforms;
@property (nonatomic) struct { struct CGSize { double width; double height; } renderSize; struct CGPoint { double x; double y; } renderOrigin; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } renderBoundsInPoints; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRectInRenderCoordinates; double offscreenEffectScale; unsigned long long colorPixelFormat; long long sampleCount; double screenScale; } values;
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

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithDevice:(id)a0;
- (void)keepAlive;
- (id)_resizedBufferIfNeeded:(id)a0 neededLength:(long long)a1;
- (void)prepareForRender:(long long)a0;
- (id)renderPassStateForSpriteCount:(long long)a0;
- (struct { float x0; float x1; float x2; float x3; } *)resizableCapInsetsBufferWithCount:(long long)a0;
- (struct { unsigned int x0; } *)spriteEntitiesBufferWithCount:(long long)a0;
- (struct { float x0; float x1; float x2; } *)spriteGeometriesBufferWithCount:(long long)a0;
- (struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)spriteInfosBufferWithCount:(long long)a0;
- (struct { struct { double x0; double x1; double x2; } x0; } *)spriteOriginalGeometriesBufferWithCount:(long long)a0;
- (struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)spriteStylesBufferWithCount:(long long)a0;

@end
