@class NSMutableArray;

@interface _ABAggregateTask : ABTask {
    NSMutableArray *_tasks;
}

- (void)dealloc;
- (id)description;
- (BOOL)cancel;
- (void)cancelSubtasks;
- (id)run:(id *)a0;
- (id)runSubtask:(id)a0 error:(id *)a1;
- (id)initWithTasks:(id)a0;

@end
