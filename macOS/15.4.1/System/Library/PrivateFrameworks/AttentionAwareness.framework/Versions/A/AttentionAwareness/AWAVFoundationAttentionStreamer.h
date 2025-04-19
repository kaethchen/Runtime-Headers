@class AVFoundationEngine, NSString, NSObject;
@protocol OS_dispatch_queue, AWUnitTestSampler, AVFoundationUnitTestStreamerCreating;

@interface AWAVFoundationAttentionStreamer : NSObject <StreamingOperation, AVFoundationReceiving> {
    id /* block */ _callbackBlock;
    id /* block */ _notificationBlock;
    struct { BOOL AWAttentionStreamerActivateEyeRelief; BOOL AWAttentionStreamerActivateAttentionDetection; BOOL AWAttentionStreamerActivatePersonDetection; } _currentOptions;
    BOOL _attentionStreamerRunning;
    BOOL _unitTest;
    NSObject<OS_dispatch_queue> *_queue;
    AVFoundationEngine *_AVFoundationEngine;
    int _attentionAwareFeaturesEnabledNotification;
    BOOL _isAttentionAwareFeaturesEnabled;
    int _displayNotifyToken;
    BOOL _displayOn;
    BOOL _smartCoverClosed;
    id<AVFoundationUnitTestStreamerCreating> _unitTester;
    id<AWUnitTestSampler> _unitTestController;
    NSString *_identifier;
}

- (void).cxx_destruct;
- (void)sendNotification:(unsigned long long)a0;
- (void)setNotificationHandler:(id /* block */)a0;
- (BOOL)attentionStreamerRunning;
- (id)cancelEventStream;
- (struct { BOOL x0; BOOL x1; BOOL x2; })getStreamerOptions;
- (BOOL)getStreamingSessionAndStartRunning:(id /* block */)a0;
- (id)initForUnitTest:(BOOL)a0 queue:(id)a1;
- (void)receiveMetadata:(id)a0 type:(id)a1;
- (void)receiveNotificationOfName:(id)a0 notification:(id)a1;
- (void)stopStreaming;
- (id)streamEventWithBlock:(id /* block */)a0 options:(struct { BOOL x0; BOOL x1; BOOL x2; })a1 operationStartFailedBlock:(id /* block */)a2;

@end
