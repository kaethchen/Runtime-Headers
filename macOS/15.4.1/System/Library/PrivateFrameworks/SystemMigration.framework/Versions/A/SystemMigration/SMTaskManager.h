@class NSConditionLock;

@interface SMTaskManager : NSObject {
    NSConditionLock *taskTerminationLock;
    int termStatus;
}

- (void).cxx_destruct;
- (void)timeout;
- (void)_launchTaskSync:(id)a0;
- (BOOL)launchTaskSync:(id)a0 :(id)a1 :(double)a2;

@end
