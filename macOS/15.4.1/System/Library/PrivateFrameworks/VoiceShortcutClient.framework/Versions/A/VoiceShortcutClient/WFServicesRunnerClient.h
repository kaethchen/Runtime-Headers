@interface WFServicesRunnerClient : WFWorkflowRunnerClient

- (id)initWithServicesWorkflow:(id)a0 inputPasteboardName:(id)a1;
- (void)startAndExpectOutput:(BOOL)a0;
- (void)startAndExpectOutput:(BOOL)a0 runSurface:(unsigned long long)a1;

@end
