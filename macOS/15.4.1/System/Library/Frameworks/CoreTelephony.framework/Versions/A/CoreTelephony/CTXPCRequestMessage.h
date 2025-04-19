@interface CTXPCRequestMessage : CTXPCMessage

@property (readonly, nonatomic) int requiredEntitlement;

- (id)init;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
