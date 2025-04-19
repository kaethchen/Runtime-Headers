@class NSSet, NSString, ACAccountStore, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGAccountsAdapter : NSObject {
    NSSet *_usernamesCache;
    ACAccountStore *_accountStore;
    NSString *_cachedPrimaryICloudAccount;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSObject<OS_dispatch_source> *_updateSource;
    BOOL _updateTimerIsSet;
    NSObject<OS_dispatch_queue> *_updateTimerQueue;
    NSObject<OS_dispatch_source> *_updateTimerSource;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setUpdateTimerWithDelaySeconds:(unsigned long long)a0;
- (void)refreshCacheFromAccountsService;
- (void)accountsStoreDidChange:(id)a0;
- (void)cancelUpdateTimer;
- (BOOL)hasCalendarAccount:(id)a0;
- (id)primaryICloudCalendarAccount;
- (BOOL)readCachedAccounts;
- (void)registerNotificationObserver;
- (void)removeNotificationObserver;
- (id)serverIdentifierForAccount:(id)a0;
- (void)setCachedAccounts;

@end
