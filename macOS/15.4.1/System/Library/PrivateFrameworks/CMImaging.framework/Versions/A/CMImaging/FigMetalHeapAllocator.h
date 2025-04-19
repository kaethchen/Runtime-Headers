@class FigMetalUtils, NSString;
@protocol MTLHeap;

@interface FigMetalHeapAllocator : NSObject <FigMetalAllocatorImpl> {
    id<MTLHeap> _heap;
    NSString *_label;
    BOOL _enforceImmediateDealloc;
}

@property (readonly, nonatomic) unsigned long long alignment;
@property (readonly, nonatomic) unsigned long long memSize;
@property (readonly, nonatomic) FigMetalUtils *utils;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (void)purgeResources;
- (int)setupWithDescriptor:(id)a0;
- (id)newBufferWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (void)_releaseHeapEnforcingImmediateDealloc:(BOOL)a0;
- (unsigned long long)bufferOffset:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; })getSizeAndAlignForBufferDescriptor:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; })getSizeAndAlignForDescriptor:(id)a0;
- (BOOL)hasCreatedBuffer:(id)a0;
- (BOOL)hasCreatedTexture:(id)a0;
- (id)initWithMetalUtils:(id)a0;
- (unsigned long long)textureOffset:(id)a0;

@end
