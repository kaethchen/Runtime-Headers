@interface _EDReplaceReconciliationMergeHandler : NSObject <EDProtectedDatabasePersistenceReconciliationMergeHandler>

@property (class, readonly, nonatomic) _EDReplaceReconciliationMergeHandler *sharedInstance;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (unsigned long long)handleReconciliationMergeErrorForTable:(id)a0 columnName:(id)a1 statement:(id)a2 journalRowID:(id)a3 protectedRowID:(id)a4 connection:(id)a5 rowsUpdated:(unsigned long long *)a6 error:(id *)a7;

@end
