@protocol GTServiceProviderObserver;

@interface GTServiceProviderReplyStream : GTXPCDispatcher <GTServiceProviderObserverXPCDispatcher> {
    id<GTServiceProviderObserver> _observer;
}

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0;
- (void)notifyServiceListChanged_:(id)a0 replyConnection:(id)a1;

@end
