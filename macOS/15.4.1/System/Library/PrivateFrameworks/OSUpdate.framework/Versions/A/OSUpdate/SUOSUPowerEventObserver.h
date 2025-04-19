@class NSObject;
@protocol OS_dispatch_queue;

@interface SUOSUPowerEventObserver : NSObject {
    struct IONotificationPort { } *_pmPortRef;
    unsigned int _pmNotifier;
    unsigned int _pmConnect;
    NSObject<OS_dispatch_queue> *_powerEventQueue;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handlePowerNotificationWithService:(unsigned int)a0 messageType:(unsigned int)a1 messageArgument:(void *)a2;

@end
