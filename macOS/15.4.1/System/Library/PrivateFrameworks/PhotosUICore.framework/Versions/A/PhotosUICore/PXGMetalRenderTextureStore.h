@interface PXGMetalRenderTextureStore : NSObject {
    struct { id x0; id x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; float x3; int x4; unsigned char x5; BOOL x6; BOOL x7; BOOL x8; } *_textures;
    long long _count;
    long long _capacity;
    BOOL _sorted;
}

- (void)dealloc;
- (id)init;
- (void)addTexture:(struct { id x0; id x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; float x3; int x4; unsigned char x5; BOOL x6; BOOL x7; BOOL x8; })a0;
- (void)_sortIfNeeded;
- (void)drawWithOrder:(unsigned long long)a0 enumerationBlock:(id /* block */)a1;
- (void)prepareForRender;
- (void)removeAllTextures;

@end
