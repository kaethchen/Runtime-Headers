@class FigMetalAllocator;
@protocol MTLDevice;

@interface CMISmartStyleColorCubePoolV1 : NSObject {
    id<MTLDevice> _device;
    FigMetalAllocator *_allocator;
    unsigned long long _pixelFormat;
    unsigned long long _dimension;
    unsigned long long _counter;
}

+ (unsigned long long)requiredAllocatorSizeForCapacity:(unsigned long long)a0 pixelFormat:(unsigned long long)a1 dimension:(unsigned long long)a2 device:(id)a3;

- (void).cxx_destruct;
- (id)_newColorCubeTextureWithLabel:(id)a0;
- (int)configureForCapacity:(unsigned long long)a0 pixelFormat:(unsigned long long)a1 dimension:(unsigned long long)a2;
- (id)initWithDevice:(id)a0 andAllocator:(id)a1;
- (id)newColorCube;

@end
