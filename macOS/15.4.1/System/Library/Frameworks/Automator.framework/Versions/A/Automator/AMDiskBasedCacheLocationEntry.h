@interface AMDiskBasedCacheLocationEntry : AMCacheLocationEntry

- (id)initWithURL:(id)a0;
- (id)_extensionForActionUTI:(id)a0;
- (id)_generateActionForURLFromDisk:(id)a0;
- (id)_generateActionsForActionType:(id)a0;
- (id)actionWithBundleIdentifier:(id)a0;
- (BOOL)needsWrite;

@end
