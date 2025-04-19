@interface CTXPCSetSupports5GStandaloneRequest : CTXPCSubscriptionContextPrivateRequest

+ (id)allowedClassesForArguments;

- (id)initWithDescriptor:(id)a0 enabled:(BOOL)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
