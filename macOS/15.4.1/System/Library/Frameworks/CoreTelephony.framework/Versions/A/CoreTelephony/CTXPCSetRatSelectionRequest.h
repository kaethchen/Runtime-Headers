@interface CTXPCSetRatSelectionRequest : CTXPCSubscriptionContextPrivateRequest

- (id)initWithContext:(id)a0 selection:(id)a1 preferred:(id)a2;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
