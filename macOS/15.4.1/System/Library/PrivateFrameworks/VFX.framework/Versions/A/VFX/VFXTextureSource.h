@interface VFXTextureSource : NSObject {
    id _mtlTextureCache;
    void /* unknown type, empty encoding */ _size;
}

- (void)dealloc;
- (void)setSize:(SEL)a0;
- (double)nextFrameTime;
- (void /* unknown type, empty encoding */)textureSize;
- (id)MTLTextureCache;
- (id)metalTextureWithEngineContext:(struct __CFXEngineContext { } *)a0 textureSampler:(struct __CFXTextureSampler { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; unsigned char x8; int x9; unsigned long long x10; } *)a1 nextFrameTime:(double *)a2 status:(struct { BOOL x0; BOOL x1; } *)a3;
- (void)renderWithEngineContext:(struct __CFXEngineContext { } *)a0 textureSampler:(struct __CFXTextureSampler { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; unsigned char x8; int x9; unsigned long long x10; } *)a1 nextFrameTime:(double *)a2;
- (void)setMTLTextureCache:(id)a0;
- (BOOL)shouldFlip;
- (BOOL)supportsMetal;

@end
