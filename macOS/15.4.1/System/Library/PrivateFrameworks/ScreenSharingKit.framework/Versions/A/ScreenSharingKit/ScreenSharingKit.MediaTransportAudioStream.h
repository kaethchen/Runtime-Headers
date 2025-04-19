@interface ScreenSharingKit.MediaTransportAudioStream : NSObject <AVCAudioStreamDelegate> {
    void /* unknown type, empty encoding */ streamType;
    void /* unknown type, empty encoding */ currentState;
    void /* unknown type, empty encoding */ audioStream;
    void /* unknown type, empty encoding */ audioStreamDelegateContinuation;
    void /* unknown type, empty encoding */ isNegotiationComplete;
    void /* unknown type, empty encoding */ negotiator;
    void /* unknown type, empty encoding */ clientActivated;
    void /* unknown type, empty encoding */ stateContinuation;
    void /* unknown type, empty encoding */ rapportStream;
    void /* unknown type, empty encoding */ currentSession;
    void /* unknown type, empty encoding */ role;
    void /* unknown type, empty encoding */ sessionID;
    void /* unknown type, empty encoding */ isRunInProcess;
    void /* unknown type, empty encoding */ streamDidStopContinuation;
}

- (id)init;
- (void).cxx_destruct;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)streamDidRTCPTimeOut:(id)a0;
- (void)streamDidStop:(id)a0;

@end
