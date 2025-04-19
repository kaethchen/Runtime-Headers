@interface PKLSRegisterInstallOperation : PKInstallOperation

- (int)installState;
- (void)main;
- (BOOL)_registerLaunchServicesBundlesReturningError:(id *)a0;

@end
