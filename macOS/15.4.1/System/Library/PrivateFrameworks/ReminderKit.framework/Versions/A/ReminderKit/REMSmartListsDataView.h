@class REMStore;

@interface REMSmartListsDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

+ (id)smartListsFromSmartListStorages:(id)a0 accountStorages:(id)a1 parentListStorages:(id)a2 store:(id)a3;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)fetchCustomSmartListsWithError:(id *)a0;
- (id)fetchCustomSmartListWithObjectID:(id)a0 error:(id *)a1;
- (id)fetchCustomSmartListsInAccount:(id)a0 error:(id *)a1;
- (id)fetchCustomSmartListsInGroup:(id)a0 error:(id *)a1;
- (id)fetchNonCustomSmartListWithSmartListType:(id)a0 createIfNeeded:(BOOL)a1 error:(id *)a2;

@end
