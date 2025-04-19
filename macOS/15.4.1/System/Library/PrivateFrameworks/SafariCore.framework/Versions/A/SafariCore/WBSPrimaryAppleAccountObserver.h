@class ACMonitoredAccountStore, NSString, ACAccount, NSObject;
@protocol OS_dispatch_queue;

@interface WBSPrimaryAppleAccountObserver : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    ACMonitoredAccountStore *_accountStore;
    ACAccount *_primaryAppleAccount;
    NSString *_primaryAppleAccountAltDSID;
}

@property (class, readonly, nonatomic) WBSPrimaryAppleAccountObserver *sharedObserver;

@property (readonly, nonatomic) BOOL isCurrentAppleIDManaged;
@property (readonly, nonatomic) BOOL isUsingICloud;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)accountWasAdded:(id)a0;
- (void)accountWasModified:(id)a0;
- (void)accountWasRemoved:(id)a0;
- (void)_registerForUpdates;
- (void)_setAccountIfPrimary:(id)a0;
- (void)_setAccountOnInternalQueue:(id)a0;
- (void)getPrimaryAppleAccountAltDSIDWithCompletionHandler:(id /* block */)a0;
- (void)getPrimaryAppleAccountHasSafariSyncEnabledWithCompletionHandler:(id /* block */)a0;
- (void)getPrimaryAppleAccountWithCompletionHandler:(id /* block */)a0;
- (void)needsToVerifyTermsWithCompletionHandler:(id /* block */)a0;

@end
