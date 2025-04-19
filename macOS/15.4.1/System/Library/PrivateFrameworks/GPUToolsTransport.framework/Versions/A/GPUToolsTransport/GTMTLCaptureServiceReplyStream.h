@protocol GTMTLCaptureServiceObserver;

@interface GTMTLCaptureServiceReplyStream : GTXPCDispatcher <GTMTLCaptureServiceObserverXPCDispatcher> {
    id<GTMTLCaptureServiceObserver> _observer;
}

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0;
- (void)notifyCaptureObjectsChanged_:(id)a0 replyConnection:(id)a1;
- (void)notifyCaptureProgress_:(id)a0 replyConnection:(id)a1;
- (void)notifyCaptureRequest_:(id)a0 replyConnection:(id)a1;
- (void)notifyUnsupportedFenum_:(id)a0 replyConnection:(id)a1;

@end
