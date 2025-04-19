@interface OSIPrepareVolumeElement : OSIInstallQueueElement

@property BOOL skipActivateVM;

+ (id)virtualMemoryFolderName;

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (BOOL)_activateVMOnDiskWithMountPoint:(id)a0;
- (BOOL)_enableJournalingOnDiskIfDiskAllowsJournaling;
- (BOOL)_enablePermissions;
- (void)_fixUpACLs;
- (id)_getBoardID;
- (void)_setSyrahBlackIfAppropriate;
- (double)estimatedTimeToComplete;

@end
