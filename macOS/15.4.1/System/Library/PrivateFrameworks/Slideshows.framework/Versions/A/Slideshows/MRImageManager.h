@class MRContext, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface MRImageManager : NSObject {
    NSMutableDictionary *mTextures;
    NSMutableSet *mAvailableTextures;
    NSMutableSet *mRecyclableTextures;
    NSOperationQueue *mImageCacheQueue;
    NSString *mOptimizedPicturesFolderPath;
    NSMutableDictionary *_assetMasters;
}

@property (readonly) MRContext *baseContext;
@property (readonly) struct _CGLContextObject { } *imageGLContext;
@property (readonly) struct _CGLPixelFormatObject { } *cglPixelFormat;

+ (void)initialize;
+ (void)cleanupPictureCache;

- (void)dealloc;
- (void)recycleTexture:(id)a0;
- (struct CGImage { } *)CGImageWithData:(id)a0 withOriginalSize:(struct CGSize { double x0; double x1; })a1 forSize:(struct CGSize { double x0; double x1; })a2 orientation:(char *)a3;
- (struct CGImage { } *)CGImageWithPath:(id)a0 withOriginalSize:(struct CGSize { double x0; double x1; })a1 forSize:(struct CGSize { double x0; double x1; })a2 orientation:(char *)a3;
- (struct __IOSurface { } *)IOSurfaceWithMoviePath:(id)a0 withOriginalSize:(struct CGSize { double x0; double x1; })a1 forSize:(struct CGSize { double x0; double x1; })a2 atTime:(double)a3 orientation:(char *)a4;
- (id)_textureWithSize:(struct { unsigned int x0; unsigned int x1; })a0 isFBO:(BOOL)a1 options:(const struct { int x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a2;
- (struct CGImage { } *)CGImageWithMoviePath:(id)a0 withOriginalSize:(struct CGSize { double x0; double x1; })a1 forSize:(struct CGSize { double x0; double x1; })a2 atTime:(double)a3 orientation:(char *)a4;
- (struct __IOSurface { } *)IOSurfaceWithData:(id)a0 withOriginalSize:(struct CGSize { double x0; double x1; })a1 forSize:(struct CGSize { double x0; double x1; })a2 orientation:(char *)a3;
- (struct __IOSurface { } *)IOSurfaceWithPath:(id)a0 withOriginalSize:(struct CGSize { double x0; double x1; })a1 forSize:(struct CGSize { double x0; double x1; })a2 orientation:(char *)a3;
- (void)purgeResources:(BOOL)a0;
- (id)_lockedMasterForAssetAtPath:(id)a0 withOptions:(id)a1;
- (id)fboTextureWithSize:(struct { unsigned int x0; unsigned int x1; })a0;
- (id)initWithBaseContext:(id)a0;
- (id)retainedByUserImageWithCGContext:(struct CGContext { } *)a0;
- (id)retainedByUserImageWithSize:(struct CGSize { double x0; double x1; })a0 andColor:(const float *)a1;
- (id)retainedByUserPlayerForAssetAtPath:(id)a0 size:(struct CGSize { double x0; double x1; })a1 andOptions:(id)a2;
- (id)retainedByUserThumbnailForAssetAtPath:(id)a0;
- (id)textureWithSize:(struct { unsigned int x0; unsigned int x1; })a0 options:(const struct { int x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a1;

@end
