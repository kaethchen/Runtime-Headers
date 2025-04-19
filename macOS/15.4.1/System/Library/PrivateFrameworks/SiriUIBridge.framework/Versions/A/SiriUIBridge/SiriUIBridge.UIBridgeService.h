@interface SiriUIBridge.UIBridgeService : NSObject <AFUIBridgeService, SUIBUIBridgeServiceProtocol, AFBridgeConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ uiBridgeListener;
    void /* unknown type, empty encoding */ serviceHelper;
    void /* unknown type, empty encoding */ messagePublisher;
    void /* unknown type, empty encoding */ uiSessionProcessor;
    void /* unknown type, empty encoding */ uiBridgeConnectionListener;
}

- (id)init;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)preheat;
- (void)siriDismissed;
- (void)stopAttendingWithReason:(unsigned long long)a0;
- (void)siriPrompted;
- (void)siriWillPrompt;
- (void)startAttending;
- (void)notifyTypingStartedWith:(id)a0;
- (void)startAttendingWithReason:(unsigned long long)a0 deviceId:(id)a1;
- (void)stopAttendingForReason:(unsigned long long)a0;

@end
