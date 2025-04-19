@class NSString, SCNMTLRenderContext;
@protocol MTLRenderCommandEncoder, MTLCommandBuffer, MTLTexture;

@interface SCNMTLRenderContextSceneRendererMainPassCustomPostProcessHelper : NSObject <_SCNSceneRendererMainPassCustomPostProcessHelper> {
    struct __C3DEngineContext { } *_engineContext;
    SCNMTLRenderContext *_renderContext;
    struct MainPassCustomPostProcessPass { void /* function */ **x0; struct Pass *x1; struct __C3DEngineContext *x2; struct RenderGraph *x3; struct PassDescriptor { int x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned int x5; BOOL x6; struct PassIODescriptor *x7; struct PassIODescriptor *x8; unsigned short x9; unsigned short x10; } x4; struct PassResource { struct RefCountedResource **x0; struct RefCountedResource **x1; unsigned short x2; unsigned short x3; } x5; unsigned int x6; struct Parameters { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; BOOL x7; BOOL x8; BOOL x9; void /* unknown type, empty encoding */ x10[6]; unsigned int x11; } x7; BOOL x8; unsigned long long x9; BOOL x10; struct MainPassCustomPostProcessPassResource *x11; } *_currentPass;
}

@property (readonly, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (readonly, nonatomic) id<MTLRenderCommandEncoder> renderCommandEncoder;
@property (readonly, nonatomic) id<MTLTexture> destinationTexture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawSceneBackgroundUsingEncoder:(id)a0 commandBuffer:(id)a1 renderPassDescriptor:(id)a2;
- (id)mainPassColorTextureAtIndex:(unsigned long long)a0;
- (void)setCurrrentPass:(struct MainPassCustomPostProcessPass { void /* function */ **x0; struct Pass *x1; struct __C3DEngineContext *x2; struct RenderGraph *x3; struct PassDescriptor { int x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned int x5; BOOL x6; struct PassIODescriptor *x7; struct PassIODescriptor *x8; unsigned short x9; unsigned short x10; } x4; struct PassResource { struct RefCountedResource **x0; struct RefCountedResource **x1; unsigned short x2; unsigned short x3; } x5; unsigned int x6; struct Parameters { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; BOOL x7; BOOL x8; BOOL x9; void /* unknown type, empty encoding */ x10[6]; unsigned int x11; } x7; BOOL x8; unsigned long long x9; BOOL x10; struct MainPassCustomPostProcessPassResource *x11; } *)a0;

@end
