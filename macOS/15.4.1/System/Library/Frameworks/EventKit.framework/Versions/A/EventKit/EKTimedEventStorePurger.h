@class EKEventStore, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EKTimedEventStorePurger : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double internalTimeout;
@property (copy, nonatomic) id /* block */ internalCreationBlock;
@property (copy, nonatomic) id /* block */ internalChangedBlock;
@property (nonatomic) BOOL ignoreLowLevelDatabaseChangedNotifications;
@property (nonatomic) BOOL internalPurgingAllowed;
@property (retain, nonatomic) EKEventStore *internalStore;
@property (copy, nonatomic) id /* block */ creationBlock;
@property (copy, nonatomic) id /* block */ changedBlock;
@property (nonatomic) BOOL purgingAllowed;
@property (nonatomic) double timeout;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_eventStoreChangedNotification:(id)a0;
- (void)_resetIdleTimer;
- (void)_uninstallTimer;
- (void)_addPersistentNotificationObservers;
- (void)_databaseChangedExternally;
- (void)_fireChangedBlock;
- (void)_removePersistentNotificationObservers;
- (void)_removeTransientEventStoreChangeObserver;
- (id)acquireCachedEventStoreOrCreate:(BOOL)a0;

@end
