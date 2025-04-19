@class NSString, NSDictionary, BWVideoFormat, BWMemoryPool;

@interface BWOnDemandPixelBufferAllocator : NSObject <BWPixelBufferProvider> {
    BWVideoFormat *_videoFormat;
    NSDictionary *_pixelBufferAttributes;
    BWMemoryPool *_memoryPool;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int pixelFormat;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) struct { int x0; int x1; } dimensions;
@property (readonly, nonatomic) unsigned long long sliceCount;
@property (readonly, nonatomic) BOOL usesMemoryPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)onDemandAllocatorWithDimensions:(struct { int x0; int x1; })a0 pixelFormat:(unsigned int)a1 name:(id)a2 memoryPool:(id)a3;

- (void)dealloc;
- (struct __CVBuffer { } *)newPixelBuffer;
- (void)flushToMinimumCapacity:(unsigned long long)a0;
- (id)initWithVideoFormat:(id)a0 name:(id)a1 memoryPool:(id)a2 additionalPixelBufferAttributes:(id)a3;

@end
