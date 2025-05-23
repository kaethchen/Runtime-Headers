@class MTLRenderPassDescriptor, NSString, _MTLCommandBuffer, NSMutableArray;
@protocol MTLDevice, MTLCommandBuffer, MTLFence, MTLCommandQueue;

@interface _MTLParallelRenderCommandEncoder : _MTLObjectWithLabel <MTLParallelRenderCommandEncoder> {
    id<MTLCommandQueue> _queue;
    unsigned long long _labelTraceID;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    unsigned long long _commandBuffersSize;
    unsigned long long _commandBuffersCount;
    id *_commandBuffers;
    BOOL _retainedReferences;
    BOOL _StatEnabled;
    unsigned long long _numThisEncoder;
    unsigned long long _StatOptions;
    unsigned long long _StatLocations;
    unsigned long long _numRequestedCounters;
    id<MTLFence> _progressFence;
    BOOL _needsFrameworkAssistedErrorTracking;
    NSMutableArray *_debugSignposts;
}

@property (readonly) unsigned long long globalTraceObjectID;
@property unsigned long long numThisCommand;
@property (readonly, nonatomic, getter=getType) unsigned long long type;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)pushDebugGroup:(id)a0;
- (id)commandBuffer;
- (void)endEncoding;
- (id)endEncodingAndRetrieveProgramAddressTable;
- (id)formattedDescription:(unsigned long long)a0;
- (void)insertDebugSignpost:(id)a0;
- (BOOL)isMemorylessRender;
- (void)popDebugGroup;
- (id)renderCommandEncoder;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a0 capacity:(unsigned long long)a1;
- (void)setColorStoreAction:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setColorStoreActionOptions:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setDepthStoreAction:(unsigned long long)a0;
- (void)setDepthStoreActionOptions:(unsigned long long)a0;
- (void)setStencilStoreAction:(unsigned long long)a0;
- (void)setStencilStoreActionOptions:(unsigned long long)a0;
- (id)_renderCommandEncoderCommon;
- (unsigned long long)getDriverUniqueID;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;
- (void)initializeEnhancedCommandBufferErrors;
- (void)preEndEncoding;

@end
