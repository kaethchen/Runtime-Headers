@class MTLRenderPassDescriptor, PXGPixelBufferPool, NSString, NSObject, NSColor;
@protocol MTLDevice, PXGMetalRenderDestinationDelegate, MTLTexture, OS_dispatch_queue;

@interface PXGPixelBufferMetalRenderDestination : NSObject <PXGMetalRenderDestination> {
    struct __CVMetalTextureCache { } *_textureCache;
    struct __CVBuffer { } *_cvMetalTexture;
    struct __CVBuffer { } *_pixelBuffer;
    PXGPixelBufferPool *_pixelBufferPool;
    struct CGSize { double width; double height; } _poolPixelSize;
    unsigned int _poolPixelFormatType;
}

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLTexture> renderTexture;
@property (retain, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, nonatomic) unsigned int pixelBufferFormatType;
@property (nonatomic) struct CGColorSpace { } *destinationColorSpace;
@property (nonatomic) struct CGSize { double width; double height; } renderSize;
@property (copy, nonatomic) PXGPixelBufferPool *pixelBufferPool;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSColor *backgroundColor;
@property (copy, nonatomic) id /* block */ renderCompletionBlock;
@property (readonly, nonatomic) BOOL enablePoolRelease;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } renderBoundsInPoints;
@property (readonly, nonatomic) long long sampleCount;
@property (readonly, nonatomic) unsigned long long colorPixelFormat;
@property (readonly, nonatomic) struct { double red; double green; double blue; double alpha; } clearColor;
@property (readonly, nonatomic) unsigned long long depthStencilPixelFormat;
@property (weak, nonatomic) id<PXGMetalRenderDestinationDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue;
@property (readonly, nonatomic) id<MTLTexture> depthStencilTexture;
@property (readonly, nonatomic) BOOL canSetColorSpace;
@property (nonatomic) struct CGColorSpace { } *colorspace;
@property (readonly, nonatomic) unsigned long long destinationColorSpaceName;
@property (nonatomic) BOOL lowMemoryMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double currentDynamicRangeHeadroom;
@property (readonly, nonatomic) double maximumDynamicRangeHeadroom;

- (void)dealloc;
- (void).cxx_destruct;
- (void)releaseCachedResources;
- (void)_createRenderPassDescriptor;
- (void)_createResourceForRenderingFrame;
- (void)_invalidateDepthStencilTexture;
- (void)_invalidatePixelBufferPool;
- (void)_releaseResourcesForRenderingFrame;
- (void)_updatePixelBufferProperties;
- (id)initWithLayoutQueue:(id)a0 pixelBufferPool:(id)a1 scale:(double)a2 enablePoolRelease:(BOOL)a3;
- (void)notifyDidCompleteRenderForFrameID:(long long)a0;
- (void)renderImmediately;
- (void)setNeedsRender;

@end
