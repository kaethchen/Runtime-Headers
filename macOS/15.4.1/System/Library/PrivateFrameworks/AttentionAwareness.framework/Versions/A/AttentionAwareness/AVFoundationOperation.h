@class NSString, NSNotificationCenter, AVFoundationEngine, NSObject;
@protocol OS_dispatch_queue, PearlCameraInterfaceMessaging;

@interface AVFoundationOperation : NSObject <SamplingOperation, AVFoundationReceiving, AVFoundationUnitTestEventReceiving> {
    NSObject<OS_dispatch_queue> *_queue;
    id<PearlCameraInterfaceMessaging> _delegate;
    AVFoundationEngine *_AVFoundationEngine;
    double _timeout;
    BOOL _unitTest;
    BOOL _faceFound;
    struct { BOOL AWAttentionSamplerActivateAttentionDetection; BOOL AWAttentionSamplerActivateMotionDetection; BOOL AWAttentionSamplerActivatePersonDetection; } _currentOptions;
    int _operationState;
    int _deviceEvent;
    NSNotificationCenter *_notificationCenter;
    NSString *_identifier;
    BOOL _demoMode;
}

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)timeoutOccurred;
- (double)Timeout;
- (int)State;
- (void)startPresenceDetectOperation:(id /* block */)a0;
- (void)SessionDidStartRunningNotification:(id)a0;
- (void)SessionInterruptionEndedNotification:(id)a0;
- (void)SessionWasInterruptedNotification:(id)a0;
- (void)SessionDidStopRunningNotification:(id)a0;
- (void)SessionRuntimeErrorNotification:(id)a0;
- (id)unitTestSampler;
- (id)cancelActiveOperation:(id)a0;
- (BOOL)checkIfOptionsHaveChanged:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (BOOL)checkIfTimeoutHasChanged:(double)a0;
- (BOOL)createAVFoundationOperation;
- (id)createPresenceDetectOperationWithTimeout:(double)a0 options:(struct { BOOL x0; BOOL x1; BOOL x2; })a1;
- (void)fakeDataForDemoMode;
- (id)initWithQueue:(id)a0 forUnitTest:(BOOL)a1;
- (BOOL)isOperationActive;
- (int)operationBackend;
- (void)receiveMetadata:(id)a0 type:(id)a1;
- (void)receiveNotificationOfName:(id)a0 notification:(id)a1;
- (void)receiveStreamingEvent;
- (void)sendDeviceEvent:(int)a0;
- (void)sendDeviceState:(int)a0;
- (void)sendFaceDetectStateChangeMetadata:(struct AWFaceDetectMetadata { BOOL x0; double x1; double x2; double x3; unsigned long long x4; double x5; unsigned long long x6; unsigned long long x7; float x8[16]; unsigned long long x9; float x10; float x11; unsigned long long x12; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x13; })a0;
- (void)sendOperationEndReason:(int)a0;

@end
