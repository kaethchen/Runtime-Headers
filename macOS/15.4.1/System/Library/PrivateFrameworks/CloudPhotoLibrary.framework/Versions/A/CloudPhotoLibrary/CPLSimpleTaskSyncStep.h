@class CPLEngineSyncTask;

@interface CPLSimpleTaskSyncStep : CPLSyncStep

@property (readonly, nonatomic) Class taskClass;
@property (readonly, nonatomic) CPLEngineSyncTask *currentTask;

- (void).cxx_destruct;
- (BOOL)hasTasks;
- (void)cancelAllTasks:(BOOL)a0;
- (id)newTask;
- (BOOL)containsTask:(id)a0;
- (id)descriptionForTasks;
- (BOOL)didFinishTask:(id)a0 withError:(id)a1 shouldStop:(BOOL *)a2;
- (id)initWithSyncManager:(id)a0 syncSession:(id)a1 taskClass:(Class)a2;
- (BOOL)launchNecessaryTasks;
- (void)moveTasksToBackground;

@end
