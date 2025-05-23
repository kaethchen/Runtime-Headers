@class REMStore;

@interface REMEventKitBridgingDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)fetchListsWithError:(id *)a0;
- (id)fetchCompletedRemindersWithCompletionDateFrom:(id)a0 to:(id)a1 withListIDs:(id)a2 error:(id *)a3;
- (id)fetchIncompleteRemindersWithDueDateFrom:(id)a0 to:(id)a1 withListIDs:(id)a2 error:(id *)a3;
- (id)fetchRemindersWithListIDs:(id)a0 error:(id *)a1;

@end
