@class REMStore;

@interface REMSmartListSectionsDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)fetchSmartListSectionWithObjectID:(id)a0 error:(id *)a1;
- (id)fetchSmartListSectionsInSmartList:(id)a0 error:(id *)a1;
- (id)fetchSmartListSectionsWithObjectIDs:(id)a0 error:(id *)a1;
- (id)smartListSectionsFromAccountStorages:(id)a0 smartListStorages:(id)a1 groupStorages:(id)a2 smartListSectionStorages:(id)a3 store:(id)a4;

@end
