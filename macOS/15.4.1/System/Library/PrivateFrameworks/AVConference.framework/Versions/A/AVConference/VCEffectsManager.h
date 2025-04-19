@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCEffectsManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    BOOL _effectsRegistered;
    int _lastEffectsType;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _loggingLock;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastPrintTimestamp;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastReceivedTimestamp;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastSentTimestamp;
    int _consecutiveDroppedFrameCount;
    int _sentFrameCount;
    int _receivedFrameCount;
    int _droppedFrameCount;
    int _failedFrameCount;
    BOOL _forceDisableEffectsHealthCheck;
    struct __CVBuffer { } *_lastReceivedPixelBuffer;
    struct __CVBuffer { } *_lastReceivedDepthBuffer;
    int _thermalPressureLevel;
}

@property (nonatomic) id delegate;
@property (retain) NSMutableArray *effectsArray;
@property (readonly, nonatomic) struct opaqueVCRemoteImageQueue { } *senderQueue;
@property (retain, nonatomic) id reportingAgent;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)updateThermalLevel:(int)a0;
- (BOOL)createAllocators;
- (void)effectsRegistered:(BOOL)a0;
- (void)encodeProcessedPixelBuffer:(struct __CVBuffer { } *)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 imageData:(id)a2 processTime:(id)a3;
- (void)flushRemoteQueue;
- (BOOL)initializeReceiveQueue:(id)a0 error:(id *)a1;
- (BOOL)isFaceMeshTrackingEnabled;
- (void)registerBlocksForService;
- (void)releaseAllocators;
- (void)resetEffectsLogging;
- (void)setLastEffectsType:(int)a0;
- (void)setLastEffectsType:(int)a0 shouldReport:(BOOL)a1;
- (void)tearDownRemoteQueues;

@end
