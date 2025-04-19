@class ABAccount, NSString, ABAccountPersistence, ABACAccount, NSArray, NSNumber;
@protocol ABAccountCustomizationPolicy, ABACAccountStore;

@interface ABAccountBuilder : NSObject {
    NSArray *_childAccounts;
    BOOL _supportsDistributionLists;
    id /* block */ _searchPolicyBlock;
    ABAccountPersistence *_persistence;
    ABACAccount *_parentACAccount;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *basePath;
@property (nonatomic) Class primitiveSourceClass;
@property (copy, nonatomic) id /* block */ primitiveSourceCreationBlock;
@property (retain, nonatomic) id<ABAccountCustomizationPolicy> customizationPolicy;
@property (nonatomic) BOOL isMainAccount;
@property (nonatomic) Class configurationClass;
@property (retain, nonatomic) ABAccountPersistence *persistence;
@property (retain, nonatomic) ABAccount *parentAccount;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (retain, nonatomic) ABACAccount *acAccount;
@property (retain, nonatomic) ABACAccount *acParentAccount;
@property (retain, nonatomic) id<ABACAccountStore> accountStore;

- (void).cxx_destruct;
- (id)baseURL;
- (id)initWithIdentifier:(id)a0;
- (id)childAccounts;
- (void)setDSID:(id)a0;
- (id)makePersistence;
- (id)newFutureSource;
- (void)setSourceClass:(Class)a0;
- (id)accountComponents;
- (id)buildAccount;
- (id)buildMigrationAccount;
- (id /* block */)defaultSourceCreationBlock;
- (id)makeAccountConfigurationWithAccount:(id)a0;
- (id)makeSearchPolicyWithAccount:(id)a0;
- (id)newBaseURL;
- (void)overrideSourceClass:(Class)a0;
- (void)setExistingSource:(id)a0;
- (void)setSearchPolicyBlock:(id /* block */)a0;
- (void)setSourceCreationBlock:(id /* block */)a0;
- (id /* block */)sourceCreationBlock;

@end
