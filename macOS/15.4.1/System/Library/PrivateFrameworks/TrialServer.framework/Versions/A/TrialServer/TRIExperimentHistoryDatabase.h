@class NSString, TRIDatabase;

@interface TRIExperimentHistoryDatabase : NSObject <TRIExperimentPostLaunchStoring, TRIPreviousExperimentStateProviding> {
    TRIDatabase *_db;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (BOOL)addRecord:(id)a0;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (BOOL)_enumerateRecordsMatchingWhereClause:(id)a0 bind:(id /* block */)a1 block:(id /* block */)a2;
- (BOOL)_isPreviouslyRecordedStateForEvent:(id)a0;
- (BOOL)enumerateRecordsNewerThanDate:(id)a0 matchingDeploymentEnvironments:(id)a1 block:(id /* block */)a2;
- (BOOL)expireRecordsOlderThanDate:(id)a0 deletedCount:(unsigned long long *)a1;
- (id)getAllAllocationStatusesForExperimentId:(id)a0 deploymentId:(int)a1 treatmentId:(id)a2;
- (unsigned char)previousExperimentStateForTriple:(id)a0;
- (BOOL)storeExperimentEvent:(id)a0 wasNewEvent:(BOOL *)a1;

@end
