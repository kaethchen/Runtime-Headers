@class IKGLTextCacheFragHandler;
@protocol IKTextDriver;

@interface IKGLTextGenerator : NSObject {
    struct CGContext { } *_offscreenBuffer;
    id<IKTextDriver> _textDriver;
    IKGLTextCacheFragHandler *_cache;
    struct CGSize { double width; double height; } _cacheSize;
}

- (void)dealloc;
- (void)finalize;
- (id)generateTexts:(id)a0 withAttributes:(id)a1 subpixelAntialiasing:(BOOL)a2 atIndex:(int)a3;
- (id)initWithCacheSize:(struct CGSize { double x0; double x1; })a0 scaleFactor:(double)a1;

@end
