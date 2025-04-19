@interface ConversationKit.ScreenSharingViewModel : ConversationKit.ScreenSharingBaseViewModel <CNKScreenSharingStateObserving> {
    void /* unknown type, empty encoding */ screenSharingStateMonitor;
}

- (void)screenSharingStateMonitor:(id)a0 didChangeClientCursorAvailable:(BOOL)a1;
- (void)screenSharingStateMonitor:(id)a0 didUpdateScreenSharingBroadcastingState:(BOOL)a1;
- (void)screenSharingStateMonitor:(id)a0 didUpdateScreenSharingState:(BOOL)a1;
- (void)screenSharingStateMonitorDidUpdateScreenInfoForParticipant:(id)a0;

@end
