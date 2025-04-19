@interface SEMAdminXPCClient : SEMXPCClient <SEMAdminService>

- (id)init;
- (oneway void)endEvaluation:(id /* block */)a0;
- (oneway void)triggerMaintenance:(BOOL)a0 completion:(id /* block */)a1;
- (oneway void)beginEvaluation:(id)a0 completion:(id /* block */)a1;

@end
