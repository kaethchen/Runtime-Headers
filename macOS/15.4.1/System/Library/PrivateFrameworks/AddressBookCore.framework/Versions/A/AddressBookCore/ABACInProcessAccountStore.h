@class NSString, ACMonitoredAccountStore, NSObject;
@protocol OS_os_log, CNScheduler;

@interface ABACInProcessAccountStore : NSObject <ABACAccountStore>

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) ACMonitoredAccountStore *accountStore;
@property (readonly, nonatomic) id<CNScheduler> scheduler;
@property (nonatomic) double migrationDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ACAccountFromABACAccount:(id)a0 store:(id)a1;
+ (id)ABACAccountStoreFromACAccountStore:(id)a0;
+ (id)sharedAccountStore;

- (id)init;
- (void).cxx_destruct;
- (id)accountWithIdentifier:(id)a0;
- (void)removeAccount:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)saveVerifiedAccount:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)discoverPropertiesForAccount:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)accountWithABAccountIdentifier:(id)a0;
- (id)initWithAccountStore:(id)a0 scheduler:(id)a1;
- (id)abAccountForAccount:(id)a0 repository:(id)a1;
- (id)accountTypeWithIdentifier:(id)a0;
- (id)accountWithIdentifier:(id)a0 returnCachedVersion:(BOOL)a1;
- (id)accountsWithAccountType:(id)a0 error:(id *)a1;
- (id)accountsWithAccountTypeIdentifiers:(id)a0;
- (id)cachedAccountWithIdentifier:(id)a0;
- (id)cardDAVAndExchangeAccounts;
- (id)contactsAccountsWithFetchOptions:(unsigned long long)a0;
- (BOOL)hasDataToMergeFromAccount:(id)a0;
- (id)ldapAccounts;
- (BOOL)mergeLocalDataIntoParentAccountWithID:(id)a0;
- (id)passwordForAccount:(id)a0;
- (BOOL)shouldRescheduleLocalDataMergerIntoParentAccountWithID:(id)a0;

@end
