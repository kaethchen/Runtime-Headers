@class NSMutableDictionary, NSDictionary, NSString, ACAccountStore, ACAccount;

@interface ICAccountUtilities : NSObject <ICStateHandlerProvider>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (copy, nonatomic) NSDictionary *currentICloudAccountState;
@property (retain, nonatomic) NSMutableDictionary *accountByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *accountIsManagedByIdentifier;
@property (nonatomic, getter=isPrimaryICloudACAccountValid) BOOL primaryICloudACAccountValid;
@property (readonly) ACAccount *primaryICloudACAccount;
@property (readonly, nonatomic) BOOL primaryICloudAccountEnabled;
@property (readonly, nonatomic) BOOL didChooseToMigratePrimaryICloudAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)registerStateHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateCache;
- (void)accountStoreDidChange:(id)a0;
- (id)initForObservingAccountStoreChanges:(BOOL)a0;
- (id)allICloudACAccounts;
- (id)applicationDataContainerURLForAccountIdentifier:(id)a0;
- (id)applicationDocumentsURLForAccountIdentifier:(id)a0;
- (BOOL)hasSyncingAccount;
- (id)iCloudACAccountWithIdentifier:(id)a0;
- (void)performBlockInPersonaContext:(id /* block */)a0 forAccountIdentifier:(id)a1;
- (id)temporaryDirectoryURLForAccountIdentifier:(id)a0;
- (void)createDirectoryIfNecessaryUsingURL:(id)a0;
- (void)internalInvalidatePrimaryICloudACAccount;
- (BOOL)isManagedACAccountWithIdentifier:(id)a0;
- (void)updateICloudACAccountFromStore;

@end
