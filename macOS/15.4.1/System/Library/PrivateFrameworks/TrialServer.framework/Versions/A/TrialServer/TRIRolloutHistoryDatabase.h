@class TRIDatabase;

@interface TRIRolloutHistoryDatabase : NSObject {
    TRIDatabase *_db;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (BOOL)addRecord:(id)a0;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (BOOL)_enumerateRecordsMatchingWhereClause:(id)a0 bind:(id /* block */)a1 block:(id /* block */)a2;
- (BOOL)enumerateRecordsNewerThanDate:(id)a0 block:(id /* block */)a1;
- (BOOL)expireRecordsOlderThanDate:(id)a0 deletedCount:(unsigned long long *)a1;
- (id)getAllAllocationStatusesForRolloutId:(id)a0 rampId:(id)a1 deploymentId:(int)a2 factorPackSetId:(id)a3;

@end
