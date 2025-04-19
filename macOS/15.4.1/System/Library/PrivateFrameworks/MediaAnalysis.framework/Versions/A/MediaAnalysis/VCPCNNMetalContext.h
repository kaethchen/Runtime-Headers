@protocol MTLCommandQueue, MTLDevice, MTLCommandBuffer;

@interface VCPCNNMetalContext : NSObject

@property (retain) id<MTLDevice> device;
@property (retain) id<MTLCommandQueue> commandQueue;
@property (retain) id<MTLCommandBuffer> commandBuffer;

+ (id)sharedCommandQueue;
+ (BOOL)supportGPU;
+ (BOOL)supportVectorForward;

- (void).cxx_destruct;
- (int)execute;
- (id)initNewContext:(BOOL)a0;

@end
