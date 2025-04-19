@interface AMApplicationStub : NSObject

@property (retain) id applicationStubController;
@property (readonly, nonatomic) BOOL stayOpen;
@property (nonatomic) BOOL displayInMenuBar;

- (id)init;
- (void).cxx_destruct;
- (void)_presentRecoverableErrorAndTerminateIfNeeded:(id)a0;
- (BOOL)loadWorkflowAtPath:(id)a0 error:(id *)a1;
- (BOOL)runWorkflowAtPath:(id)a0 withInput:(id)a1 error:(id *)a2;

@end
