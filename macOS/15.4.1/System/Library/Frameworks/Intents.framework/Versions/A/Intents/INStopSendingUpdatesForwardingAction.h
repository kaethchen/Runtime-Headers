@interface INStopSendingUpdatesForwardingAction : INIntentForwardingAction

+ (Class)responseClass;

- (void)executeLocallyWithIntentDeliverer:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)executeRemotelyWithVendorRemote:(id)a0 completionHandler:(id /* block */)a1;

@end
