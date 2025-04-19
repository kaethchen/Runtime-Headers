@class QCImage, QCArray, NSAffineTransform, QCPatch, QCImageTextureBuffer;

@interface QCImagePort_Cache : NSObject {
    QCImage *_image;
    QCImageTextureBuffer *_texture;
    QCArray *_cachedTextures;
    struct { unsigned char bytes[16]; } _textureProviderMD5;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _textureBounds;
    NSAffineTransform *_textureTransformation;
    struct { BOOL useMatrix; unsigned char wasEnabled; int boundTexture; void *unused[4]; } _savedState;
    QCPatch *_patch;
}

- (void)dealloc;
- (id)image;
- (void)_clearCachedTextures;
- (id)_texture;
- (void)clearTexture;
- (id)initWithPatch:(id)a0;
- (void)setOnOpenGLContext:(id)a0 unit:(unsigned int)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 transformation:(id)a3 target:(unsigned int)a4 mipmappingLevels:(unsigned long long)a5 matrix:(double *)a6;
- (void)unsetOnOpenGLContext:(id)a0 unit:(unsigned int)a1;
- (void)updateWithImage:(id)a0;

@end
