@class NSArray, NSString, NSOperationQueue, MCTaskList, NSMutableArray, NSMutableSet;

@interface MCTaskManager : NSObject <MCTaskListDelegate, MCHandlerDelegate, MCActivityDelegate> {
    NSMutableArray *_networkHandlers;
    NSMutableArray *_persistenceHandlers;
    NSMutableSet *_handlersCleaningUp;
    NSMutableSet *_activities;
    NSMutableArray *_terminationBlocks;
}

@property BOOL reassignTasksWillRun;
@property BOOL hasActivity;
@property (readonly, copy, nonatomic) NSArray *persistenceHandlers;
@property unsigned long long maximumNetworkHandlers;
@property unsigned long long maximumPersistenceHandlers;
@property (readonly, nonatomic) BOOL isInSerializationQueue;
@property (readonly, nonatomic) NSOperationQueue *utilityQueue;
@property (readonly, nonatomic) MCTaskList *taskList;
@property (readonly, copy, nonatomic) NSArray *networkHandlers;
@property (readonly, copy, nonatomic) NSArray *orderedNetworkHandlers;
@property (readonly, copy, nonatomic) NSArray *orderedPersistenceHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSOperationQueue *serializationQueue;
@property (readonly, nonatomic) BOOL networkIsLimited;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)terminate:(id /* block */)a0;
- (void)addActivity:(id)a0;
- (void)cleanUp;
- (void)activity:(id)a0 didEncounterError:(id)a1;
- (void)activityDidFinish:(id)a0;
- (void)goOffline;
- (id)newBodyFetchContext;
- (void)resetNetworkHandlers;
- (void)tasksNeedAssignment;
- (void)test_terminateAndWaitUntilFinished;
- (void)assignIdleTasks;
- (void)addNetworkHandler:(id)a0;
- (void)assignActiveTasks;
- (void)failedToCreateNetworkHandler;
- (void)removeNetworkHandler:(id)a0;
- (void)_reassignTasks;
- (void)addPersistenceHandler:(id)a0;
- (void)adjustHandlers;
- (void)handler:(id)a0 didFinishOperation:(id)a1;
- (void)handlerDidCleanUp:(id)a0;
- (void)removePersistenceHandler:(id)a0;
- (void)taskListDidChange:(id)a0;

@end
