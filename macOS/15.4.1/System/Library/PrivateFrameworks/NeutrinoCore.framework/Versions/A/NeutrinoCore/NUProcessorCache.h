@class NSObject, NSString, NUColorSpace, NUPixelFormat, CIImage;
@protocol OS_dispatch_queue, MTLTexture, MTLEvent;

@interface NUProcessorCache : NSObject {
    NSObject<OS_dispatch_queue> *_textureCacheQueue;
    id<MTLTexture> _cachedTexture;
    id<MTLEvent> _textureCachedEvent;
}

@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (retain, nonatomic) NUPixelFormat *pixelFormat;
@property (readonly, nonatomic) CIImage *inputImage;
@property (readonly, nonatomic) CIImage *outputImage;

- (id)init;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0;
- (void)_render:(id)a0;

@end
