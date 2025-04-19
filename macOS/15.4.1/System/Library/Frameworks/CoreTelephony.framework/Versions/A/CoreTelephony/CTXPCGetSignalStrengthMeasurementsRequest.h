@interface CTXPCGetSignalStrengthMeasurementsRequest : CTXPCSubscriptionContextPrivateRequest

+ (id)allowedClassesForArguments;

- (id)initWithDescriptor:(id)a0 synchronous:(BOOL)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
