@interface OSIMSUInstallElement : OSIInstallQueueElement

- (id)initWithOptions:(id)a0;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (void)SUMacControllerDelegateConnectionClosed;
- (void)SUMacControllerDelegateReady;
- (id)_weakStringConstant:(id)a0;
- (double)estimatedTimeToComplete;

@end
