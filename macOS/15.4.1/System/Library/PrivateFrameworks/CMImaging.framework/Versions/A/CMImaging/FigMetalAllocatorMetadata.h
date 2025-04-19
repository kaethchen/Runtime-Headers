@class FigMetalAllocator;

@interface FigMetalAllocatorMetadata : NSObject {
    int _refCount;
    unsigned long long _size;
    FigMetalAllocator *_allocator;
    long long _type;
}

- (void).cxx_destruct;
- (id)initWithFigMetalAllocator:(id)a0;

@end
