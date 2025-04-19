@interface RemindersIntentsFramework.TTRSnoozeTasksIntentHandler : NSObject <INSnoozeTasksIntentHandling> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ dataSource;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleSnoozeTasks:(id)a0 completion:(id /* block */)a1;
- (void)resolveNextTriggerTimeForSnoozeTasks:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTasksForSnoozeTasks:(id)a0 withCompletion:(id /* block */)a1;

@end
