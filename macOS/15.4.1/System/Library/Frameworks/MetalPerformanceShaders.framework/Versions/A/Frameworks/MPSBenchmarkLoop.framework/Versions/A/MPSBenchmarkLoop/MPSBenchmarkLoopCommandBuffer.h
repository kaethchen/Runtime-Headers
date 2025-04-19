@class MPSWorkloadInfoCapture;

@interface MPSBenchmarkLoopCommandBuffer : MPSCommandBuffer

@property (nonatomic) MPSWorkloadInfoCapture *currentWorkloadCapture;

- (void)dealloc;
- (id)blitCommandEncoder;
- (id)computeCommandEncoder;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)a0;
- (id)initWithCommandBuffer:(id)a0;

@end
