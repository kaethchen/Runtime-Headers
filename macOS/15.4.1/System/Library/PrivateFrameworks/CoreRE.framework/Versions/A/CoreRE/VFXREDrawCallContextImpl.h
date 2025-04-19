@class NSString;
@protocol VFXStencilInfo, VFXRERenderTargetInfo;

@interface VFXREDrawCallContextImpl : NSObject <VFXREDrawCallContext>

@property (nonatomic) struct TextureTableCollection { union { struct { struct TextureSource *x0; struct TextureSource *x1; struct TextureSource *x2; struct TextureSource *x3; struct TextureSource *x4; struct TextureSource *x5; struct TextureSource *x6; struct TextureSource *x7; struct TextureSource *x8; struct TextureSource *x9; struct TextureSource *x10; struct TextureSource *x11; } x0; struct TextureSource *x1[12]; } x0; } *_textureTable;
@property (nonatomic) void *_bufferTable;
@property (nonatomic) void *_samplerTable;
@property (nonatomic) void *_constantTable;
@property (nonatomic) const void *_viewports;
@property (nonatomic) const struct RenderTargetInfo { struct RenderPipelineDescriptorData { unsigned int x0; int x1[8]; int x2; int x3; } x0; BOOL x1; unsigned int x2; } *_renderTargetInfo;
@property (nonatomic) const void *_dynamicFunctionConstants;
@property (nonatomic) struct PatchHandler { struct Allocator *x0; struct PatchHandlerImpl *x1; } *_patchHandler;
@property (nonatomic) struct StencilInfo { struct StencilStateInfo { struct StencilTestInfo { BOOL enabled; unsigned char readMask; unsigned char writeMask; unsigned char compareFunc; unsigned char failOp; unsigned char depthFailOp; unsigned char depthStencilPassOp; char _padding; } frontFace; struct StencilTestInfo { BOOL enabled; unsigned char readMask; unsigned char writeMask; unsigned char compareFunc; unsigned char failOp; unsigned char depthFailOp; unsigned char depthStencilPassOp; char _padding; } backFace; } state; unsigned char referenceValue; } _stencilInfo;
@property (nonatomic) float _fadeOpacity;
@property (nonatomic) BOOL _isDrawingBlur;
@property (nonatomic) BOOL _isDepthOnly;
@property (nonatomic) unsigned char _stateOverride;
@property (nonatomic) struct MeshStats { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; int *x23; int *x24; int *x25; unsigned char x26; } *_meshStats;
@property (readonly, nonatomic) BOOL isDrawingDepthOnly;
@property (readonly, nonatomic) BOOL isDrawingBlur;
@property (readonly, nonatomic) id<VFXRERenderTargetInfo> renderTargetInfo;
@property (readonly, nonatomic) id<VFXStencilInfo> stencilInfo;
@property (readonly, nonatomic) BOOL useDitherFade;
@property (readonly, nonatomic) BOOL enableClipping;
@property (readonly, nonatomic) BOOL renderForBlur;
@property (readonly, nonatomic) BOOL enableBreakthrough;
@property (readonly, nonatomic) BOOL enableNearFieldVignetting;
@property (readonly, nonatomic) int portalClippingMode;
@property (readonly, nonatomic) float fadeOpacity;
@property (readonly, nonatomic) BOOL depthOnly;
@property (nonatomic) long long statsVertexCount;
@property (nonatomic) long long statsPrimitiveCount;
@property (nonatomic) long long statsDrawcallCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (id)buffer:(int)a0 :(id)a1 :(long long *)a2 :(long long *)a3;
- (const char *)constantData:(int)a0;
- (BOOL)constantOffsetAndSize:(int)a0 :(id)a1 :(long long *)a2 :(long long *)a3;
- (id)sampler:(int)a0 :(id)a1;
- (float)sceneFadeOpacity;
- (void)setLateLatchingPatchHandler:(id /* block */)a0;
- (id)texture:(int)a0 :(id)a1;
- (void)viewports:(const void **)a0 :(long long *)a1;

@end
