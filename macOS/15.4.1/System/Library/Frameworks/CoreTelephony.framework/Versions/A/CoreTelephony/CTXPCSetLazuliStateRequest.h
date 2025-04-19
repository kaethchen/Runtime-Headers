@interface CTXPCSetLazuliStateRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) BOOL shouldEnable;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 shouldEnable:(BOOL)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
