@class CKSQLiteDatabaseRegistry, CKSQLiteDatabaseActivities, CKSQLiteDatabaseManagerTimer;

@interface CKSQLiteDatabaseManager : CKSQLiteTableGroup {
    CKSQLiteDatabaseManagerTimer *_timer;
    CKSQLiteDatabaseRegistry *_registry;
    CKSQLiteDatabaseActivities *_activities;
}

+ (id)managerInDatabase:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)flush;
- (void)waitForComplete;
- (id)activitiesStartingBeforeDate:(id)a0;
- (id)activityEntryForTarget:(id)a0 error:(id *)a1;
- (id)addActivityTriggerWithTarget:(id)a0 date:(id)a1 coalescingInterval:(double)a2 minimumSeparation:(double)a3;
- (id)createTables:(id *)a0;
- (void)databaseWasRemoved:(id)a0;
- (id)earliestActivityDate;
- (id)finishInitializing;
- (id)migrateDataFromGroup:(id)a0;
- (id)nextActivityDate;
- (id)nextActivityDateForTarget:(id)a0;
- (id)registerDatabase:(id)a0;
- (void)runActivities:(id)a0;
- (void)scheduleActivityDate:(id)a0;
- (void)setSchedulingDataInActivity:(id)a0 date:(id)a1 coalescingInterval:(double)a2 minimumSeparation:(double)a3;
- (void)target:(id)a0 group:(id)a1 didRunActivity:(id)a2;
- (id)target:(id)a0 group:(id)a1 willRunActivity:(id)a2;
- (void)waitForTargetActivityComplete:(id)a0;

@end
