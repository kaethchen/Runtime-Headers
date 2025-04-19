@class NSString;
@protocol VFXMaterialPropertyTextureProvider, MTLTexture;

@interface VFXMaterialPropertyTextureProviderSource : VFXTextureSource <VFXMaterialPropertyTextureProviderHelper> {
    id<MTLTexture> _texture;
    struct __CFXEngineContext { } *_engineContext;
    id<VFXMaterialPropertyTextureProvider> _textureProvider;
}

@property (retain, nonatomic) id<VFXMaterialPropertyTextureProvider> textureProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)connectToProxy:(struct __CFXImageProxy { } *)a0;
- (id)cachedTextureWithURL:(id)a0 token:(id *)a1;
- (id)cachedTextureWithURL:(id)a0 token:(id *)a1 didFallbackToDefaultTexture:(BOOL *)a2;
- (id)metalTextureWithEngineContext:(struct __CFXEngineContext { } *)a0 textureSampler:(struct __CFXTextureSampler { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; unsigned char x8; int x9; unsigned long long x10; } *)a1 nextFrameTime:(double *)a2 status:(struct { BOOL x0; BOOL x1; } *)a3;
- (void)renderWithEngineContext:(struct __CFXEngineContext { } *)a0 textureSampler:(struct __CFXTextureSampler { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; unsigned char x8; int x9; unsigned long long x10; } *)a1 nextFrameTime:(double *)a2;

@end
