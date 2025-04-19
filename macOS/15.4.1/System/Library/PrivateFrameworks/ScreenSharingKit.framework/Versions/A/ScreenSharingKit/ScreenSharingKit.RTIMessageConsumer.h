@interface ScreenSharingKit.RTIMessageConsumer : SwiftNativeNSObject <RTIInputSystemDelegate> {
    void /* unknown type, empty encoding */ screenContinuityRTIMachServiceIdentifier;
    void /* unknown type, empty encoding */ messageSender;
    void /* unknown type, empty encoding */ rtiService;
    void /* unknown type, empty encoding */ currentSessionInfo;
    void /* unknown type, empty encoding */ sessionActionStream;
    void /* unknown type, empty encoding */ sessionActionContinuation;
}

- (id)init;
- (void)inputSystemService:(id)a0 didCreateInputSession:(id)a1;
- (void)inputSystemService:(id)a0 inputSession:(id)a1 documentStateDidChange:(id)a2;
- (void)inputSystemService:(id)a0 inputSessionDidBegin:(id)a1;
- (void)inputSystemService:(id)a0 inputSessionDidDie:(id)a1;
- (void)inputSystemService:(id)a0 inputSessionDidEnd:(id)a1;
- (void)inputSystemService:(id)a0 inputSessionDidPause:(id)a1 withReason:(id)a2;
- (void)inputSystemService:(id)a0 inputSessionDidUnpause:(id)a1 withReason:(id)a2;

@end
