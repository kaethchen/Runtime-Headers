@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CDPDCircleStateObserver : NSObject <CDPDXPCEventListener> {
    int _circleChangeToken;
    BOOL _isObserving;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableArray *_circleObservers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)registerListener:(id)a0;
- (void)stopObservingCircleStatusChange;
- (const char *)_notificationName;
- (void)_sendCircleStatusChangedForContext:(id)a0;
- (void)_sendCircleViewStatusChangedForContext:(id)a0;
- (void)eventReceived:(const char *)a0 eventValue:(unsigned long long)a1;
- (void)observeChangeToState:(unsigned long long)a0 circleProxy:(id)a1 handler:(id /* block */)a2;
- (void)observeCircleStateWithCircleProxy:(id)a0 changeHandler:(id /* block */)a1;

@end
