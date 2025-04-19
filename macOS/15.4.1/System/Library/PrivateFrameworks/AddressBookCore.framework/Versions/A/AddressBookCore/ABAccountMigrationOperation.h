@class ABAccountRepository, NSString;

@interface ABAccountMigrationOperation : NSOperation {
    ABAccountRepository *_accountRepository;
    NSString *_originAccountIdentifier;
    NSString *_destinationAccountIdentifier;
}

@property BOOL mergeData;
@property BOOL deleteOriginalData;
@property (copy) id /* block */ errorHandler;

+ (id)os_log;

- (void).cxx_destruct;
- (void)main;
- (id)initWithAccountRepository:(id)a0 originAccountIdentifier:(id)a1 destinationAccountIdentifier:(id)a2;
- (id)makeAddressBookWithAccounts:(id)a0;
- (id)makePersistentStoreCoordinatorCacheWithAccounts:(id)a0;

@end
