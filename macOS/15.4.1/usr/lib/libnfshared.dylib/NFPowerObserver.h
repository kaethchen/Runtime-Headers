@class NSObject;
@protocol OS_dispatch_queue, NFPowerObserverDelegate;

@interface NFPowerObserver : NSObject {
    id<NFPowerObserverDelegate> _delegate;
    unsigned int _powerNotificationConnection;
    struct IONotificationPort { } *_powerNotificationPort;
    unsigned int _powerNotificationNotifier;
    NSObject<OS_dispatch_queue> *_workQueue;
    void *_sleepMessageArgument;
}

@property (readonly) BOOL willSleep;

- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)a0;
- (void)_powerNotificationMessage:(unsigned int)a0 argument:(void *)a1;
- (void)allowSleep;
- (BOOL)registerForEvents;
- (void)unregisterForEvents;

@end
