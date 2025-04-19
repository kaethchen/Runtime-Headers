@interface OSIInstallRecoverySystemElement : OSIInstallQueueElement

@property BOOL installRecoveryDMGs;

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (id)localizedStatusString;
- (double)estimatedTimeToComplete;
- (id)initWithOptions:(id)a0 installRecoveryDMGs:(BOOL)a1;

@end
