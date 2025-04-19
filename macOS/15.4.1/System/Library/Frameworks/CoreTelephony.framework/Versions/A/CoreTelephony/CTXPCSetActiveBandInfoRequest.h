@interface CTXPCSetActiveBandInfoRequest : CTXPCSubscriptionContextPrivateRequest

+ (id)allowedClassesForArguments;

- (id)initWithContext:(id)a0 type:(unsigned long long)a1 bandInfo:(id)a2;
- (id)initWithContext:(id)a0 type:(unsigned long long)a1 bands:(id)a2;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
