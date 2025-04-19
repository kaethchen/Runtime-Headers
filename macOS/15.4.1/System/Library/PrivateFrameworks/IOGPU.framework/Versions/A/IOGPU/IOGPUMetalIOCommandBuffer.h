@class NSMutableArray, NSObject, IOGPUMetalIOCommandQueue, IOGPUMetalCommandBuffer, IOGPUMetalDeviceShmem, IOGPUMetalCommandEncoder, IOGPUMetalDevice;
@protocol OS_dispatch_group, MTLDevice, MTLCommandBuffer, MTLBlitCommandEncoder;

@interface IOGPUMetalIOCommandBuffer : _MTLIOCommandBuffer {
    IOGPUMetalDevice<MTLDevice> *_device;
    IOGPUMetalIOCommandQueue *_queue;
    IOGPUMetalDeviceShmem *_ioKernelCommandShmem;
    char *_ioKernelCommandShmemStart;
    char *_ioKernelCommandShmemCurrent;
    char *_ioKernelCommandShmemEnd;
    struct IOGPUIOKernelCommandListHeader { unsigned int x0; unsigned int x1; } *_commandListHeader;
    IOGPUMetalCommandBuffer<MTLCommandBuffer> *_gpuCommandBuffer;
    IOGPUMetalCommandEncoder<MTLBlitCommandEncoder> *_gpuBlitEncoder;
    NSMutableArray *_stagingBuffers;
    NSObject<OS_dispatch_group> *_ioCompletionGroup;
    _Atomic unsigned int _notificationCount;
    unsigned int _lastBarrierNotificationCount;
    unsigned int _commandBufferID;
    unsigned long long _globalTraceObjectID;
    BOOL _hasFollowOnGPUWork;
    BOOL _committed;
    BOOL _tryCancel;
    struct vector<IOGPUIOCommandQueueCommandBufferCallbackBlock, std::allocator<IOGPUIOCommandQueueCommandBufferCallbackBlock>> { union { } *__begin_; union { } *__end_; struct __compressed_pair<IOGPUIOCommandQueueCommandBufferCallbackBlock *, std::allocator<IOGPUIOCommandQueueCommandBufferCallbackBlock>> { union { } *__value_; } __end_cap_; } _commandCallbackBlocks;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)enqueue;
- (void)barrier;
- (void)addBarrier;
- (void)commit;
- (void)encodeSignalEvent:(id)a0 value:(unsigned long long)a1;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1;
- (unsigned long long)globalTraceObjectID;
- (BOOL)isCommitted;
- (void)loadBuffer:(id)a0 offset:(unsigned long long)a1 size:(unsigned long long)a2 handle:(id)a3 handleOffset:(unsigned long long)a4;
- (void)loadBuffer:(id)a0 offset:(unsigned long long)a1 size:(unsigned long long)a2 sourceHandle:(id)a3 sourceHandleOffset:(unsigned long long)a4;
- (void)loadBytes:(void *)a0 size:(unsigned long long)a1 sourceHandle:(id)a2 sourceHandleOffset:(unsigned long long)a3;
- (void)loadTexture:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 bytesPerRow:(unsigned long long)a4 bytesPerImage:(unsigned long long)a5 dstOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a6 handle:(id)a7 handleOffset:(unsigned long long)a8;
- (void)loadTexture:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 sourceBytesPerRow:(unsigned long long)a4 sourceBytesPerImage:(unsigned long long)a5 destinationOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a6 sourceHandle:(id)a7 sourceHandleOffset:(unsigned long long)a8;
- (void)setLabel:(id)a0;
- (void)signalEvent:(id)a0 value:(unsigned long long)a1;
- (void)tryCancel;
- (void)waitForEvent:(id)a0 value:(unsigned long long)a1;
- (id)initWithQueue:(id)a0;
- (void)didCompleteWithStatus:(long long)a0;
- (void)growKernelCommandBuffer:(unsigned int)a0;
- (id)initWithQueue:(id)a0 resourceList:(id)a1 retained:(BOOL)a2;
- (BOOL)hasFollowOnWork;
- (void)barrierComplete:(long long)a0;
- (void)completeCommandCallbackBlocks;
- (void)createCommandList;
- (void *)getCommandBufferBytes:(unsigned int)a0;
- (BOOL)validateNotificationCount;

@end
