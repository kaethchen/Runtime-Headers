@class NSString, NSObject;
@protocol OS_dispatch_queue, HMIVideoEncoderDelegate;

@interface HMIVideoEncoder : HMIVideoProcessingNode <HMFLogging>

@property struct OpaqueVTCompressionSession { } *session;
@property BOOL forceKeyFrameOnNextEncodedFrame;
@property (weak) id<HMIVideoEncoderDelegate> delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) NSString *logIdentifier;
@property (nonatomic) long long averageBitRate;
@property (nonatomic) double quality;
@property (nonatomic) long long maxKeyFrameIntervalDuration;
@property (nonatomic) struct HMIVideoEncoderDataRate { long long x0; long long x1; } dataRateLimit;
@property (nonatomic) long long expectedFrameRate;
@property (nonatomic) double expectedDuration;
@property (nonatomic) long long maxFrameDelayCount;
@property (readonly) unsigned long long numberOfDroppedFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)prepare;
- (void)_invalidate;
- (void)flush;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (int)_getFloat64Property:(struct __CFString { } *)a0 propertyValueOut:(double *)a1;
- (int)_getProperty:(struct __CFString { } *)a0 propertyValue:(const void **)a1;
- (int)_getSInt32Property:(struct __CFString { } *)a0 propertyValueOut:(int *)a1;
- (BOOL)_initSessionWithDimensions:(struct { int x0; int x1; })a0 codecType:(unsigned int)a1 useHardwareAcceleration:(BOOL)a2 error:(id *)a3;
- (void)_invalidateWithErr:(int)a0;
- (int)_setFloat64Property:(struct __CFString { } *)a0 propertyValue:(double)a1;
- (int)_setProperty:(struct __CFString { } *)a0 propertyValue:(void *)a1;
- (int)_setSInt32Property:(struct __CFString { } *)a0 propertyValue:(int)a1;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithDimensions:(struct { int x0; int x1; })a0 codecType:(unsigned int)a1 useHardwareAcceleration:(BOOL)a2 error:(id *)a3;

@end
