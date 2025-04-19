@class NSString;

@interface MTLCountersCommandQueue : MTLToolsCommandQueue

@property (readonly, nonatomic) NSString *tracePath;

- (id)commandBuffer;
- (id)commandBufferWithDescriptor:(id)a0;
- (id)commandBufferWithUnretainedReferences;
- (id)initWithCommandQueue:(id)a0 device:(id)a1;

@end
