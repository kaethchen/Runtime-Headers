@class NSObject, NSMutableDictionary, NSMutableSet, NSMutableArray, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface AXSupportDefaultsObserver : NSObject {
    NSUserDefaults *_axDomain;
    NSMutableSet *_observedPrefs;
    NSMutableArray *_actions;
    NSMutableDictionary *_actionLastNotifications;
    NSObject<OS_dispatch_queue> *_lastNotificationsQueue;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)startObservingPreference:(struct __CFString { } *)a0 andBroadcastDarwinNotification:(struct __CFString { } *)a1 postGlobally:(BOOL)a2;
- (void)startObservingPreference:(struct __CFString { } *)a0 andPerformBlock:(id /* block */)a1;

@end
