@class NSUserDefaults, _ATXGlobals, NSObject, _PASLock;
@protocol OS_dispatch_queue;

@interface ATXAppPredictionBlacklist : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id _blacklistNotificationToken;
    NSUserDefaults *_userDefaults;
    _ATXGlobals *_globals;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_createBlacklistFromPreferencesDisabledApps;
- (void)_listenForUpdates;
- (void)_performMigrationsIfNeeded;
- (void)_resetBlacklistWithSet:(id)a0;
- (void)_updateBlacklist;
- (void)_updateBlacklistFromGlobalsBlacklistedApps;
- (void)deregisterPrefsChangeHandlerWithToken:(int)a0;
- (id)disabledBundleIds;
- (id)initWithUserDefaults:(id)a0 globals:(id)a1;
- (int)registerPrefsChangeHandler:(id /* block */)a0;

@end
