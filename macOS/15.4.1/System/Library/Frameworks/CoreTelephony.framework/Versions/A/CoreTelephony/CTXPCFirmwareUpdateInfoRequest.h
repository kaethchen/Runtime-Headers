@interface CTXPCFirmwareUpdateInfoRequest : CTXPCRequestMessage

- (int)requiredEntitlement;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
