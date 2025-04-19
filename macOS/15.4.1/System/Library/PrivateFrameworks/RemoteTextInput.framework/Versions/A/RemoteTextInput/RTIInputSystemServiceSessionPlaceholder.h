@interface RTIInputSystemServiceSessionPlaceholder : RTIInputSystemServiceSession

+ (id)placeholderServiceSessionWithIdentifier:(id)a0 traits:(id)a1 state:(id)a2;

- (id)initWithConnection:(id)a0;
- (int)pid;
- (id)bundleIdentifier;
- (id)valueForEntitlement:(id)a0;
- (void)flushOperations;
- (void)flushOperationsWithResultHandler:(id /* block */)a0;
- (void)_killConnectionWithCallback;
- (void)_updateAppIdsFromConnectionOnInternalQueueWithCompletionHandler:(id /* block */)a0;
- (void)didInitializeWithConnection:(id)a0;
- (id)initWithIdentifier:(id)a0 traits:(id)a1 state:(id)a2;

@end
