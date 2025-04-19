@interface VFXTextureOffscreenRenderingSource : VFXTextureSource {
    BOOL _usesIOSurface;
    struct CGSize { double width; double height; } _framebufferSize;
    struct __CFXFramebuffer { } *_framebuffer;
}

- (void /* unknown type, empty encoding */)textureSize;
- (void)_buildMipmaps:(struct __CFXEngineContext { } *)a0;

@end
