@class SAThread, SATask, SAThreadState, SATaskState;

@interface SADependencyGraphNode : NSObject {
    BOOL _isPartOfADeadlock;
    BOOL _isBlockedByADeadlock;
    BOOL _analyzedDependenciesAlready;
    SADependencyGraphNode *_dependency;
}

@property (readonly) SATask *task;
@property (readonly) SATaskState *taskState;
@property (readonly) SAThread *thread;
@property (readonly) SAThreadState *threadState;
@property (readonly, weak) SADependencyGraphNode *dependency;
@property (readonly) BOOL isPartOfADeadlock;
@property (readonly) BOOL isBlockedByADeadlock;

+ (id)dependencyGraphForThreadsInSampleStore:(id)a0 atTimestamp:(id)a1;

- (void).cxx_destruct;

@end
