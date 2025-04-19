@interface OSIAIPostInstall : OSIInstallQueueElement

+ (id)extrasDirectoryWithPayloadDmgMountPoint:(id)a0;
+ (BOOL)shouldBeRunWithPayloadDmgMountPoint:(id)a0;

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;

@end
