@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TLContentProtectionStateObserver : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMutableDictionary *_blocksScheduledForProtectedContentUnlockedEvent;
    long long _contentProtectionStatus;
    long long _unlockedSinceBootStatus;
}

@property (class, readonly) TLContentProtectionStateObserver *sharedContentProtectionStateObserver;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (void)_loadContentProtectionStatusIfNeeded;
- (void)_loadUnlockedSinceBootStatusIfNeeded;
- (id)_performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (long long)_queryCurrentUnlockedSinceBootStatus;
- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (id)performBlockAfterProtectedContentUnlocked:(id /* block */)a0;

@end
