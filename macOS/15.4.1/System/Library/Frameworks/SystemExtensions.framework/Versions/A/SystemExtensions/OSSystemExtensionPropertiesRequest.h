@interface OSSystemExtensionPropertiesRequest : OSSystemExtensionRequest

- (void)didConnectToDaemon;
- (void)failedWithError:(id)a0;
- (void)replyWithProperties:(id)a0;

@end
