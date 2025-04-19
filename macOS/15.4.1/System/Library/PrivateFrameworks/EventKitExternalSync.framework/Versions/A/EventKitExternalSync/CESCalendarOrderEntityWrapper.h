@interface CESCalendarOrderEntityWrapper : CESEntityWrapper {
    BOOL _duplicateSeen;
}

+ (id)defaultWrapper;

- (id)entityName;
- (id)fullName;
- (BOOL)deleteAllRecords;
- (id)fetchAllRecords;
- (BOOL)deleteObjectWithRecordID:(id)a0;
- (id)fetchChangedRecords;
- (id)orderingOf:(id)a0;
- (int)processInsertWithValues:(id)a0 withSyncID:(id)a1 givingID:(id *)a2 error:(id *)a3 inSession:(id)a4;
- (int)processModify:(id)a0 withSyncID:(id)a1 givingID:(id *)a2 error:(id *)a3 record:(id)a4;
- (BOOL)shouldAcceptChangeWithValues:(id)a0 forSyncID:(id)a1 isInsert:(BOOL)a2;

@end
