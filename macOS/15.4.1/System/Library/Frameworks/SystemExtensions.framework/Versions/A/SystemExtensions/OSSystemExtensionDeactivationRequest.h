@interface OSSystemExtensionDeactivationRequest : OSSystemExtensionRequest

- (void)didConnectToDaemon;
- (void)failedWithError:(id)a0;
- (BOOL)makeAuthorization:(const struct AuthorizationOpaqueRef **)a0 form:(struct { char x0[32]; } *)a1 error:(id *)a2;
- (void)onceMoreWithFeeling:(id)a0;
- (BOOL)requiresAuthorization:(id)a0;

@end
