@class EXSSyncEngine, NSArray, NSMutableArray;

@interface EXSAccountManager : NSObject {
    NSMutableArray *_accounts;
}

@property (retain, nonatomic) EXSSyncEngine *syncEngine;
@property (readonly, nonatomic) NSArray *accounts;

+ (id)log;
+ (id)accountsForAccountMetadataArray:(id)a0;
+ (id)dataclassesToWatch;

- (void).cxx_destruct;
- (void)disableKeepAlive;
- (void)removeAccount:(id)a0;
- (void)startup:(id /* block */)a0;
- (void)shutdown:(id /* block */)a0;
- (id)accountWithKey:(id)a0;
- (void)enableKeepAlive;
- (id)_addDelegateForOwningACAccount:(id)a0 delegateEmail:(id)a1 delegateFullname:(id)a2 readOnly:(BOOL)a3;
- (BOOL)_arePushPollOptionsEqualForACAccount:(id)a0 with:(id)a1;
- (id)_fetchDelegatesFromACAccount:(id)a0;
- (void)_removeDelegateForACAccount:(id)a0 delegateKey:(id)a1;
- (id)accountChangedWithType:(long long)a0 accountId:(id)a1;
- (void)addDelegateForACAccount:(id)a0 delegateKey:(id)a1 delegateEmail:(id)a2 delegateFullname:(id)a3;
- (id)addDelegateForAccountId:(id)a0 delegateEmail:(id)a1 delegateFullname:(id)a2 readOnly:(BOOL)a3;
- (id)addDelegateForMigration:(id)a0 parentIdentifier:(id)a1;
- (BOOL)evaluateOurNeedToRun;
- (BOOL)exchangeAccountIsTracked:(id)a0;
- (id)fetchMigrationDelegatesFromEXSAccount:(id)a0;
- (id)initWithSyncEngine:(id)a0;
- (void)initialLoadAccounts:(id /* block */)a0;
- (id)launchdKeepAlivePath;
- (id)pullRemovedAccountFromAccountsArray:(id)a0;
- (id)removeDelegateFromAccountId:(id)a0 delegateSourceID:(id)a1;
- (void)updateDelegateForACAccountPostMigration:(id)a0 delegate:(id)a1;

@end
