@class NSArray;

@interface SYRunningApplicationsObserver : NSObject {
    BOOL __isObservingRunningApplications;
    id /* block */ __runningApplicationsDidChangeHandler;
    NSArray *__cachedRunningApplications;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_runningApplicationsDidChange;
- (void)_sheduleRunningApplicationsDidChange;
- (void)startObservingRunningApplicationsWithHandler:(id /* block */)a0;

@end
