@class NSDictionary, NSMutableArray, ABPersonEntriesList;
@protocol ABPersonListControllerProtocol;

@interface ABPersonListUIReflector : NSObject {
    NSMutableArray *_touchedEntries;
    NSMutableArray *_newEntries;
    NSMutableArray *_emptyEntries;
    BOOL _needsRearranged;
    BOOL _touchedEntryNeedsRearranged;
}

@property (retain) NSDictionary *notificationUserInfo;
@property (retain) id<ABPersonListControllerProtocol> personListController;
@property (retain) ABPersonEntriesList *personEntriesList;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)updateUI;
- (id)contactPredicate;
- (id)affectedStores;
- (id)recordsForIdentifiers:(id)a0;
- (void)reflectChangesInUI;
- (void)removeEntry:(id)a0;
- (void)processNotLinkedUpdatedRecords:(id)a0;
- (void)addEntryForLinkedRecords:(id)a0;
- (void)addEntryForRecord:(id)a0;
- (void)categorizeUpdatedRecords:(id)a0 asLinked:(id)a1 notLinked:(id)a2;
- (void)processDeletedIdentifiers:(id)a0;
- (void)processInsertedRecords:(id)a0;
- (void)processLinkedUpdatedRecords:(id)a0;
- (void)processUpdatedRecord:(id)a0;
- (void)processUpdatedRecords:(id)a0;
- (void)replaceEntry:(id)a0 withEntryForLinkedContacts:(id)a1;
- (void)replaceEntry:(id)a0 withEntryForRecord:(id)a1;
- (id)tableEntryForLinkedRecordIdentifier:(id)a0;
- (id)tableEntryForRecordIdentifier:(id)a0;

@end
