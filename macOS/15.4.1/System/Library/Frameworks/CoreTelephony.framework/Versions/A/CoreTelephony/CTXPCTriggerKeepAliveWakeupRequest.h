@interface CTXPCTriggerKeepAliveWakeupRequest : CTXPCRequestMessage

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithNetworkInterfaceType:(int)a0;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
