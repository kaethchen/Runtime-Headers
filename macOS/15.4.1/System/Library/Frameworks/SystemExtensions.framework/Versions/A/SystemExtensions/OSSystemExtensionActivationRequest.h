@interface OSSystemExtensionActivationRequest : OSSystemExtensionRequest

- (void)activatedWithResult:(long long)a0;
- (void)didConnectToDaemon;
- (void)failedWithError:(id)a0;
- (void)needsUserApproval;
- (void)requestReplacementActionForExistingExtension:(id)a0 withExtension:(id)a1;
- (void)sendActivationRequest;

@end
