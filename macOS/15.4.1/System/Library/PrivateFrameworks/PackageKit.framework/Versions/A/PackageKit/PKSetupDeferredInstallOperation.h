@interface PKSetupDeferredInstallOperation : PKInstallOperation

- (int)installState;
- (void)main;
- (BOOL)_arrangeForDeferredInstallReturningError:(id *)a0;

@end
