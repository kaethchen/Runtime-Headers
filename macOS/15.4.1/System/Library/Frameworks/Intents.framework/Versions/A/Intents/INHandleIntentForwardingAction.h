@interface INHandleIntentForwardingAction : INIntentForwardingAction

+ (Class)responseClass;

- (id /* block */)_completionHandlerWithActionCompletionHandler:(id /* block */)a0;
- (void)executeLocallyWithIntentDeliverer:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)executeRemotelyWithVendorRemote:(id)a0 completionHandler:(id /* block */)a1;

@end
