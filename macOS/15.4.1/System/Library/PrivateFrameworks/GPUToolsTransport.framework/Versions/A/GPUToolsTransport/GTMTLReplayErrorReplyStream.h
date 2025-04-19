@protocol GTMTLReplayServiceObserver;

@interface GTMTLReplayErrorReplyStream : GTXPCDispatcher <GTMTLReplayServiceObserverXPCDispatcher> {
    id<GTMTLReplayServiceObserver> _observer;
}

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0;
- (void)notifyError_:(id)a0 replyConnection:(id)a1;

@end
