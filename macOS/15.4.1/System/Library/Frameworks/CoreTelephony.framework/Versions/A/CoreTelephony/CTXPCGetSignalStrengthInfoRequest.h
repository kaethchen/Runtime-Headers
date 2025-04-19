@interface CTXPCGetSignalStrengthInfoRequest : CTXPCSubscriptionContextRequest

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 forPublic:(BOOL)a1;
- (id)initWithDescriptor:(id)a0 forPublic:(BOOL)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
