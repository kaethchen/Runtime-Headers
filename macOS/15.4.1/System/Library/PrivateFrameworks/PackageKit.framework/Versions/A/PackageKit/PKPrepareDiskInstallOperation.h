@interface PKPrepareDiskInstallOperation : PKInstallOperation

- (int)installState;
- (void)main;
- (unsigned long long)_currentSpaceDeficit;
- (BOOL)ensureAppleInternalExistsOnDestination;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;

@end
