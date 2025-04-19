@class NSString;

@interface MTLLegacySVCommandQueue : MTLToolsCommandQueue {
    struct LegacySVDeviceOptions { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; } *_deviceOptions;
}

@property (readonly, nonatomic) NSString *tracePath;

- (id)commandBuffer;
- (id)commandBufferWithDescriptor:(id)a0;
- (id)commandBufferWithUnretainedReferences;
- (id)initWithCommandQueue:(id)a0 device:(id)a1;

@end
