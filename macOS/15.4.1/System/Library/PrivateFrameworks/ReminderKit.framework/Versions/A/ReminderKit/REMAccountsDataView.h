@class REMStore;

@interface REMAccountsDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

+ (id)accountsFromAccountStorages:(id)a0 store:(id)a1;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)fetchAccountWithExternalIdentifier:(id)a0 error:(id *)a1;
- (id)fetchAccountWithObjectID:(id)a0 error:(id *)a1;
- (id)accountsFromStorages:(id)a0;
- (id)fetchAccountsWithExternalIdentifiers:(id)a0 error:(id *)a1;
- (id)fetchAccountsWithObjectIDs:(id)a0 error:(id *)a1;
- (id)fetchActiveCloudKitAccountObjectIDsWithFetchOption:(long long)a0 error:(id *)a1;
- (id)fetchAllAccountsForAccountManagementWithError:(id *)a0;
- (id)fetchAllAccountsForDumpingWithError:(id *)a0;
- (id)fetchAllAccountsWithError:(id *)a0;
- (id)fetchPrimaryActiveCloudKitAccountREMObjectIDWithError:(id *)a0;
- (id)fetchPrimaryActiveCloudKitAccountWithError:(id *)a0;

@end
