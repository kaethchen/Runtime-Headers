@protocol GTMTLDiagnosticsServiceObserver;

@interface GTMTLDiagnosticsServiceReplyStream : GTXPCDispatcher <GTMTLDiagnosticsServiceObserverXPCDispatcher> {
    id<GTMTLDiagnosticsServiceObserver> _observer;
}

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0;
- (void)notifyCommandBufferIssue_:(id)a0 replyConnection:(id)a1;
- (void)notifyDiagnosticsIssue_:(id)a0 replyConnection:(id)a1;

@end
