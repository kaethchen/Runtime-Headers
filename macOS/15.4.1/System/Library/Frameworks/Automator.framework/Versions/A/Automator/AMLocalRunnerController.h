@class NSString, AMWorkflow, AMWorkflowRunner, NSProgress, NSError;
@protocol AMRunnerControllerDelegate;

@interface AMLocalRunnerController : NSObject <AMWorkflowRunnerDelegate, AMRunnerController>

@property (retain) AMWorkflow *workflow;
@property (retain) AMWorkflowRunner *runner;
@property (copy) id /* block */ completionHandler;
@property (retain) NSProgress *progress;
@property BOOL stopped;
@property (retain) id outputToCompleteWith;
@property (retain) NSError *errorToCompleteWith;
@property (nonatomic) BOOL shouldDisplayProgressInMenuBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isLoading) BOOL loading;
@property (weak, nonatomic) id<AMRunnerControllerDelegate> delegate;
@property (readonly, getter=isIdle) BOOL idle;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly, getter=isPaused) BOOL paused;
@property (readonly, getter=isStopping) BOOL stopping;

+ (id)localRunnerControllerWithWorkflow:(id)a0 error:(id *)a1;
+ (id)scriptMonitorURL;

- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)step;
- (id)initWithWorkflow:(id)a0;
- (void)stopWithError:(id)a0;
- (void)activateShowingProgressViaScriptMonitor;
- (void)completeWithOutput:(id)a0 error:(id)a1;
- (void)deactivateShowingProgressViaScriptMonitor;
- (BOOL)launchScriptMonitorReturningSuccess;
- (void)runWithInput:(id)a0 steppingInitially:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)workflowRunner:(id)a0 didError:(id)a1;
- (void)workflowRunner:(id)a0 didLogMessage:(id)a1 ofType:(unsigned long long)a2 fromAction:(id)a3;
- (void)workflowRunner:(id)a0 didResumeWithAction:(id)a1;
- (void)workflowRunner:(id)a0 didRunAction:(id)a1;
- (void)workflowRunner:(id)a0 didRunConversion:(id)a1;
- (void)workflowRunner:(id)a0 progressDidChange:(id)a1 forAction:(id)a2;
- (void)workflowRunner:(id)a0 willRunAction:(id)a1;
- (void)workflowRunner:(id)a0 willRunConversion:(id)a1;
- (void)workflowRunnerDidFinish:(id)a0;
- (void)workflowRunnerDidPause:(id)a0;
- (void)workflowRunnerDidRun:(id)a0;
- (void)workflowRunnerDidStop:(id)a0;
- (void)workflowRunnerWillPause:(id)a0;
- (void)workflowRunnerWillRun:(id)a0;
- (void)workflowRunnerWillStop:(id)a0;

@end
