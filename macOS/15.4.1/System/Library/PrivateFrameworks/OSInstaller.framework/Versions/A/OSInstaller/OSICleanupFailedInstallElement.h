@interface OSICleanupFailedInstallElement : OSIInstallQueueElement

@property double timeSoFar;
@property double timeToComplete;

+ (BOOL)shouldRunForTarget:(id)a0;

- (id)initWithOptions:(id)a0;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (void)_cleanUpOSInstallSandbox;
- (void)_cleanupOSInstallSandboxForMountPoint:(id)a0;
- (void)_cleanupPartialInstall;
- (void)_pullFakeProgressTimer:(id)a0;
- (double)estimatedTimeToComplete;

@end
