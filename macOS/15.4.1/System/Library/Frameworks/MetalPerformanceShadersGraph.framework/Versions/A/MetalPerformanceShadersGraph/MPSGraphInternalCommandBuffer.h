@class MPSGraphExecutableExecutionDescriptor, MPSCommandBuffer;

@interface MPSGraphInternalCommandBuffer : MPSCommandBuffer {
    MPSCommandBuffer *_original;
    MPSGraphExecutableExecutionDescriptor *_executableExecutionDescriptor;
    unsigned int _commandBufferIndex;
}

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)commit;
- (void)commitAndContinue;
- (struct MPSCommandBufferDescriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; })mpsCommandBufferDescriptor;
- (id)initWithMPSCommandBuffer:(id)a0 executableExecutionDescriptor:(id)a1;

@end
