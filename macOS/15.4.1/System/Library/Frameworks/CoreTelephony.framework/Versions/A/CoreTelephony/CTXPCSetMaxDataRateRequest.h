@interface CTXPCSetMaxDataRateRequest : CTXPCSubscriptionContextRequest

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 rate:(long long)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
