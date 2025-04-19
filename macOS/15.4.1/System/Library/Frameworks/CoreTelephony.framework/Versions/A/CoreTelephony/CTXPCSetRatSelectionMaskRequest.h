@interface CTXPCSetRatSelectionMaskRequest : CTXPCSubscriptionContextPrivateRequest

+ (id)allowedClassesForArguments;

- (id)initWithDescriptor:(id)a0 selection:(unsigned char)a1 preferred:(unsigned char)a2;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
