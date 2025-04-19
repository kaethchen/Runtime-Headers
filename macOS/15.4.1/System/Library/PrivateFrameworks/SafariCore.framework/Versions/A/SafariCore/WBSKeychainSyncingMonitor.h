@class NSString, OTClique, NSObject, ACAccount;
@protocol OS_dispatch_queue;

@interface WBSKeychainSyncingMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_keychainStatusFetchingQueue;
    NSObject<OS_dispatch_queue> *_synchronousGetterQueue;
    OTClique *_keychainClique;
    unsigned long long _cachedKeychainSyncSettingValue;
    ACAccount *_primaryAppleAccount;
    NSString *_primaryAppleAccountAltDSID;
}

@property (class, readonly, nonatomic) WBSKeychainSyncingMonitor *sharedMonitor;

@property (readonly, nonatomic) unsigned long long keychainSyncSettingValue;
@property (readonly, nonatomic) BOOL isKeychainSyncEnabled;
@property (readonly, nonatomic) BOOL canKeychainSyncBeEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchKeychainSyncingStatus;
- (void)_keychainSyncingStatusMayHaveChanged;
- (void)_primaryAppleAccountDidChange;
- (void)_updateAccountOnInternalQueue:(id)a0;
- (void)_updateKeychainClique;
- (void)performTaskOnceKeychainSyncValueHasBeenFetchedOnQueue:(id)a0 task:(id /* block */)a1;

@end
