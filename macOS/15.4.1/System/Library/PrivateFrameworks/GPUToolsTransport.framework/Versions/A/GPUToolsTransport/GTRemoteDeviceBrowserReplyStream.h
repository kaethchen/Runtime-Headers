@protocol GTRemoteDeviceBrowserObserver;

@interface GTRemoteDeviceBrowserReplyStream : GTXPCDispatcher <GTRemoteDeviceBrowserObserverXPCDispatcher> {
    id<GTRemoteDeviceBrowserObserver> _observer;
}

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0;
- (void)notifyDeviceListChanged_:(id)a0 replyConnection:(id)a1;

@end
