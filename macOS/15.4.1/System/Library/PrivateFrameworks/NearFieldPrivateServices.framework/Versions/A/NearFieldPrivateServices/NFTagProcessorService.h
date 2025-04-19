@interface NFTagProcessorService : NFPrivateService

- (id)serviceName;
- (BOOL)canRun;
- (void)processURL:(id)a0 forNDEFTag:(id)a1 completionHandler:(id /* block */)a2;

@end
