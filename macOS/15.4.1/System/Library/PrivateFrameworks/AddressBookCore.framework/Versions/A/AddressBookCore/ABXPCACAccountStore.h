@class NSString, NSXPCConnection;

@interface ABXPCACAccountStore : NSObject <ABACAccountStore> {
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;
+ (id)ABACAccountStoreFromACAccountStore:(id)a0;
+ (id)contactsAccountServiceInterface;
+ (id)resumedContactsAccountsConnection;
+ (id)sharedACAccountStore;
+ (id)sharedAccountStore;

- (void).cxx_destruct;
- (void)removeAccount:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)saveVerifiedAccount:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)resumeConnection;
- (void)discoverPropertiesForAccount:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)accountWithABAccountIdentifier:(id)a0;
- (id)_accountWithIdentifier:(id)a0;
- (id)_cachedAccountWithIdentifier:(id)a0;
- (id)accountWithIdentifier:(id)a0 returnCachedVersion:(BOOL)a1;
- (id)contactsAccountsWithFetchOptions:(unsigned long long)a0;
- (BOOL)mergeLocalDataIntoParentAccountWithID:(id)a0;
- (id)passwordForAccount:(id)a0;
- (id)prepareStore:(id)a0;

@end
