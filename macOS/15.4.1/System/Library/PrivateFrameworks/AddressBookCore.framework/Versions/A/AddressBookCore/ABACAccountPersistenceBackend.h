@class ABACAccount, NSString, ABAccountComponents;
@protocol ABACAccountStore;

@interface ABACAccountPersistenceBackend : NSObject <ABAccountPersistenceBackend> {
    ABAccountComponents *_components;
}

@property (readonly) ABACAccount *account;
@property (readonly) id<ABACAccountStore> store;
@property (readonly) NSString *path;
@property (readonly) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (void).cxx_destruct;
- (id)accountTypeIdentifier;
- (id)_persistentStoreURL;
- (id)acAccountIdentifier;
- (void)deleteAccountFromDiskWithAddressBook:(id)a0;
- (void)deleteAccountFromStoreWithCompletionBlock:(id /* block */)a0;
- (void)deletePersistentValuesWithAddressBook:(id)a0;
- (id)initWithAccountComponents:(id)a0;
- (id)loadPersistentValues;
- (id)parentAccountTypeIdentifier;
- (void)rediscoverPersistentValuesWithCompletionHandler:(id /* block */)a0;
- (BOOL)savePersistentValues:(id)a0 postNotifications:(BOOL)a1;

@end
