@interface ScreenSharingKit.MediaTransportVideoStream : NSObject <AVCScreenCaptureDelegate, AVCVideoStreamDelegate, AVCRemoteVideoClientDelegate> {
    void /* unknown type, empty encoding */ currentState;
    void /* unknown type, empty encoding */ remoteVideoClient;
    void /* unknown type, empty encoding */ isNegotiationComplete;
    void /* unknown type, empty encoding */ negotiator;
    void /* unknown type, empty encoding */ clientActivated;
    void /* unknown type, empty encoding */ stateContinuation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_screenCapture;
    void /* unknown type, empty encoding */ videoStream;
    void /* unknown type, empty encoding */ videoStreamDelegateContinuation;
    void /* unknown type, empty encoding */ rapportStream;
    void /* unknown type, empty encoding */ currentSession;
    void /* unknown type, empty encoding */ role;
    void /* unknown type, empty encoding */ sessionID;
    void /* unknown type, empty encoding */ streamDidStopContinuation;
}

- (id)init;
- (void).cxx_destruct;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)streamDidRTCPTimeOut:(id)a0;
- (void)streamDidServerDie:(id)a0;
- (void)streamDidStop:(id)a0;
- (void)remoteVideoClientDidReceiveFirstFrame:(id)a0;
- (void)screenCapture:(id)a0 didStart:(BOOL)a1 withError:(id)a2;
- (void)screenCapture:(id)a0 didStop:(BOOL)a1 withError:(id)a2;
- (void)screenCapture:(id)a0 didUpdateAttributes:(id)a1 error:(id)a2;
- (void)serverDidDisconnect:(id)a0;

@end
