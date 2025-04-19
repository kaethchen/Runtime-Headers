@interface CTXPCConvertISOToMCCMNCRequest : CTXPCRequestMessage

- (int)requiredEntitlement;
- (id)iso;
- (id)initWithIso:(id)a0;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
