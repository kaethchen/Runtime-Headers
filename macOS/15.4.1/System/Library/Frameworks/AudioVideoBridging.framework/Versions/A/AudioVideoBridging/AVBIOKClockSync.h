@class IOKConnection, NSString, NSPointerArray, TSClock, IOKNotificationPort, NSObject, IOKService;
@protocol OS_dispatch_queue;

@interface AVBIOKClockSync : NSObject <TSClockClient> {
    NSPointerArray *_avbClocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _avbClocksLock;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    BOOL _onlyTimeSync;
    TSClock *_tsClock;
    int _lastLockState;
    IOKConnection *_connection;
    IOKService *_service;
    IOKNotificationPort *_notificationPort;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serviceLock;
    unsigned long long _referenceCount;
}

@property (readonly, nonatomic) unsigned long long clockIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)connection;
- (id)service;
- (void)_handleNotification:(int)a0 withArgs:(unsigned long long *)a1 ofCount:(unsigned int)a2;
- (void)addReference;
- (BOOL)deregisterAsyncCallback;
- (void)didChangeClockMasterForClock:(id)a0;
- (void)didChangeLockStateTo:(int)a0 forClock:(id)a1;
- (void)didResetClock:(id)a0;
- (void)finalizeNotifications;
- (id)initWithClockIdentifier:(unsigned long long)a0 pid:(int)a1;
- (BOOL)registerAsyncCallback;
- (unsigned long long)releaseReference;
- (void)removeAVBClock:(id)a0;
- (void)addAVBClock:(id)a0;

@end
