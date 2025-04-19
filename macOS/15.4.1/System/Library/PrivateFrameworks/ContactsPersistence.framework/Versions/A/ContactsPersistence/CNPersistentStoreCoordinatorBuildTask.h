@class NSArray, CNPersistentStoreBuilder;
@protocol CNAccountCollection;

@interface CNPersistentStoreCoordinatorBuildTask : CNTask

@property (readonly, nonatomic) id<CNAccountCollection> accountCollection;
@property (readonly, nonatomic) CNPersistentStoreBuilder *storeBuilder;
@property (readonly, nonatomic) NSArray *identifiers;
@property (readonly, nonatomic) NSArray *urls;
@property (readonly, nonatomic) BOOL isPristineDatabase;
@property (readonly, nonatomic) BOOL didMigrate;

+ (BOOL)isLocalAccountIdentifier:(id)a0;
+ (id)urlForAccountWithIdentifier:(id)a0 baseURL:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)run:(id *)a0;
- (void)makeAccountURLs;
- (void)addLocalAccountIdentifierIfRequested;
- (void)addPersistentStores;
- (id)initWithAccountCollection:(id)a0 storeBuilder:(id)a1;
- (void)makeAccountIdentifiers;
- (void)makeIdentifiersForMyAccounts;
- (void)reportBuildMetrics;

@end
