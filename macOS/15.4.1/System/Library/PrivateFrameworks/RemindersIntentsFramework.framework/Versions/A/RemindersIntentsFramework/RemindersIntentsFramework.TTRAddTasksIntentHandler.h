@interface RemindersIntentsFramework.TTRAddTasksIntentHandler : NSObject <INAddTasksIntentHandlingPrivate> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ contactRepresentationResolver;
    void /* unknown type, empty encoding */ userActivityProvider;
    void /* unknown type, empty encoding */ timeProvider;
    void /* unknown type, empty encoding */ didNotSpecifyTargetList;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleAddTasks:(id)a0 completion:(id /* block */)a1;
- (void)resolveContactEventTriggerForAddTasks:(id)a0 completion:(id /* block */)a1;
- (void)resolveSpatialEventTriggerForAddTasks:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTargetTaskListForAddTasks:(id)a0 completion:(id /* block */)a1;
- (void)resolveTargetTaskListMembersForAddTasks:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTaskReferenceForAddTasks:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTaskTitlesForAddTasks:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTemporalEventTriggerForAddTasks:(id)a0 completion:(id /* block */)a1;

@end
