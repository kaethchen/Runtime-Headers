@class NSMutableArray, AMLocalRunnerController;

@interface AMApplicationStubController : NSObject

@property (retain) AMLocalRunnerController *runnerController;
@property (retain) NSMutableArray *queuedInputByURL;
@property (readonly, nonatomic) BOOL stayOpen;

- (id)init;
- (void).cxx_destruct;
- (BOOL)runWorkflowAtURL:(id)a0 withInput:(id)a1 error:(id *)a2;
- (void)executeNextQueuedInput;
- (void)exitOrContinueIfNeeded;
- (void)presentError:(id)a0 terminating:(BOOL)a1;
- (id)recoverableErrorForError:(id)a0;
- (BOOL)validateWorkflowAtURL:(id)a0 error:(id *)a1;

@end
