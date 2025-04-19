@class NSString, NSError, NSRunLoop;

@interface AMWorkspace : NSObject <AMRunnerControllerDelegate>

@property (class, readonly, nonatomic) AMWorkspace *sharedWorkspace;

@property (retain) id runnerController;
@property (retain) id output;
@property (retain, nonatomic) NSError *error;
@property BOOL didStart;
@property BOOL finishedRunning;
@property (retain) id dispatchQueue;
@property (retain, nonatomic) NSRunLoop *runLoop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_finishRunningOnBackgroundThreadWithOutput:(id)a0 error:(id)a1;
- (void)_performOnExcecutionRunLoop:(id /* block */)a0;
- (void)_runOnBackgroundThreadWithWorkflow:(id)a0 input:(id)a1;
- (void)_runOnDispatchQueueWithInput:(id)a0;
- (void)_runWorkflowOnMainThreadWithURL:(id)a0 input:(id)a1;
- (id)runWorkflowAtPath:(id)a0 withInput:(id)a1 error:(id *)a2;
- (void)runnerController:(id)a0 didError:(id)a1;
- (void)runnerControllerDidRun:(id)a0;
- (void)runnerControllerDidStop:(id)a0;
- (void)runnerControllerWillRun:(id)a0;

@end
