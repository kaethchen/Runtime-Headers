@interface CTXPCSetDefaultVoiceRequest : CTXPCSubscriptionContextRequest

- (int)requiredEntitlement;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
