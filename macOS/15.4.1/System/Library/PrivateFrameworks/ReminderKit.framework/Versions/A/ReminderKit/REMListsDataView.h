@class REMStore;

@interface REMListsDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

+ (id)listsFromAccountStorages:(id)a0 listStorages:(id)a1 store:(id)a2;
+ (id)listsFromAccountStorages:(id)a0 listStorages:(id)a1 store:(id)a2 requestedExternalIdentifiers:(id)a3;
+ (id)listsFromAccountStorages:(id)a0 listStorages:(id)a1 store:(id)a2 requestedListIDs:(id)a3;
+ (id)listsFromAccounts:(id)a0 listStorages:(id)a1 store:(id)a2;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)fetchDefaultListWithError:(id *)a0;
- (id)fetchListWithObjectID:(id)a0 error:(id *)a1;
- (id)fetchListIncludingSpecialContainerWithObjectID:(id)a0 error:(id *)a1;
- (id)debugFetchPhantomListsWithError:(id *)a0;
- (id)fetchAllListsWithExternalIdentifier:(id)a0 inAccount:(id)a1 error:(id *)a2;
- (id)fetchDefaultListRequiringCloudKitWithAccountID:(id)a0 error:(id *)a1;
- (id)fetchEligibleDefaultListsWithError:(id *)a0;
- (id)fetchListIncludingConcealedWithObjectID:(id)a0 includeMarkedForDeletionOnly:(BOOL)a1 error:(id *)a2;
- (id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)a0 inAccount:(id)a1 error:(id *)a2;
- (id)fetchListRepresentationOfTemplateWithObjectID:(id)a0 error:(id *)a1;
- (id)fetchListsAndSublistsInAccount:(id)a0 error:(id *)a1;
- (id)fetchListsInAccount:(id)a0 error:(id *)a1;
- (id)fetchListsInGroup:(id)a0 error:(id *)a1;
- (id)fetchListsIncludingSpecialContainersInAccount:(id)a0 error:(id *)a1;
- (id)fetchListsIncludingSpecialContainersWithObjectIDs:(id)a0 error:(id *)a1;
- (id)fetchListsWithExternalIdentifiers:(id)a0 inAccount:(id)a1 error:(id *)a2;
- (id)fetchListsWithObjectIDs:(id)a0 error:(id *)a1;

@end
