@class NSString;

@interface CNManagedProfileConnection : NSObject <CNManagedProfileConnection>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConnection;

- (id)init;
- (id)filteredOpenInAccounts:(id)a0 originatingAppBundleID:(id)a1 sourceAccountManagement:(long long)a2;
- (id)filteredOpenInOriginatingAccounts:(id)a0 targetAppBundleID:(id)a1 targetAccountManagement:(long long)a2;
- (id)initWithProfileConnection:(id)a0;
- (BOOL)isOpenInRestrictionInEffect;
- (BOOL)mayShowLocalContactsAccountsForBundleID:(id)a0 sourceAccountManagement:(long long)a1;
- (BOOL)mayShowLocalContactsAccountsForTargetBundleID:(id)a0 targetAccountManagement:(long long)a1;

@end
