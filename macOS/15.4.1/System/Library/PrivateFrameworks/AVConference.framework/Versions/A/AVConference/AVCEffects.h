@class AVConferenceXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface AVCEffects : NSObject {
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_avConferenceEffectsQueue;
    BOOL _isEffectsApplied;
    BOOL _isFaceMeshTrackingEnabled;
}

@property (nonatomic) id delegate;
@property (nonatomic) int mode;
@property (nonatomic) int effectType;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)avcVideoFrameDidRelease:(id)a0;
- (void)deregisterBlocksForNotifications;
- (void)encodeProcessedVideoFrame:(id)a0;
- (BOOL)enqueueSampleBuffer:(struct __CVBuffer { } *)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)registerBlocksForNotifications;
- (BOOL)setupRemoteReceiverQueueWithSenderQueue:(id)a0;

@end
