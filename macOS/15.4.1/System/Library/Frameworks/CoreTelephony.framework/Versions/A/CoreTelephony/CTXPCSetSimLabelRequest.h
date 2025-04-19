@interface CTXPCSetSimLabelRequest : CTXPCSubscriptionContextRequest

- (id)label;
- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 label:(id)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
