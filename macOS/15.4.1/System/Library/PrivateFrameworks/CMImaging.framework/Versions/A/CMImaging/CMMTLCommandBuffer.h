@class CMMTLCommandQueue, NSMutableDictionary, NSDictionary, NSString, NSError, NSMutableString, InterceptConfig;
@protocol MTLDeadlineProfile, MTLDevice, MTLLogContainer, MTLCommandBuffer, MTLBuffer, MTLCommandQueue;

@interface CMMTLCommandBuffer : NSObject <MTLCommandBufferSPI> {
    NSMutableString *_cmLabel;
    CMMTLCommandQueue *_cmCommandQueue;
    id<MTLCommandBuffer> _commandBuffer;
    BOOL _unretained;
}

@property (retain, nonatomic) InterceptConfig *interceptConfig;
@property (readonly, nonatomic, getter=getListIndex) unsigned long long listIndex;
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (readonly, nonatomic) NSMutableDictionary *userDictionary;
@property (readonly) double kernelStartTime;
@property (readonly) double kernelEndTime;
@property (readonly) double GPUStartTime;
@property (readonly) double GPUEndTime;
@property (readonly) unsigned long long globalTraceObjectID;
@property (retain) id<MTLBuffer> privateData;
@property unsigned long long privateDataOffset;
@property (retain) id<MTLBuffer> privateLoggingBuffer;
@property (nonatomic) BOOL sharedIndirectionTable;
@property (readonly, retain) id<MTLDeadlineProfile> deadlineProfile;
@property (readonly) id<MTLDevice> device;
@property (readonly) id<MTLCommandQueue> commandQueue;
@property (readonly) BOOL retainedReferences;
@property (readonly) unsigned long long errorOptions;
@property (copy) NSString *label;
@property (readonly) id<MTLLogContainer> logs;
@property (readonly) unsigned long long status;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)commit;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;
- (id)initWithCMMTLCommandQueue:(id)a0 unretained:(BOOL)a1;

@end
