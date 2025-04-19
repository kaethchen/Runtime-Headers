@class IKGLTextCacheFragHandler;

@interface IKGLTextSizeCache : NSObject {
    IKGLTextCacheFragHandler *_cacheFragHandler;
    struct CGSize { double width; double height; } _size;
    unsigned int _textureID;
    int _rectCount;
    double _scaleFactor;
}

- (void)dealloc;
- (void)finalize;
- (void)cleanup;
- (BOOL)isEmpty;
- (id)cacheFragHandler;
- (BOOL)canStoreTextWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)createTexture;
- (id)initWithTextureSize:(struct CGSize { double x0; double x1; })a0 textHeight:(int)a1 scaleFactor:(double)a2;
- (void)removeText:(id)a0;
- (void)storeText:(id)a0;

@end
