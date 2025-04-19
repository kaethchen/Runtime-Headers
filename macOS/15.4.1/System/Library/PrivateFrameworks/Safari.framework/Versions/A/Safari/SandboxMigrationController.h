@class SandboxFileExtensionController, ResourcePreferencesController;

@interface SandboxMigrationController : NSObject {
    ResourcePreferencesController *_resourcePreferencesController;
    SandboxFileExtensionController *_fileExtensionController;
}

- (void).cxx_destruct;
- (void)_addMigratedExtensions:(id)a0 migrationType:(unsigned long long)a1;
- (id)_downloadFolderURLForMigration;
- (BOOL)_hasPerformedOneTimeDownloadFolderSandboxMigration;
- (BOOL)_hasPerformedOneTimeSandboxMigration;
- (BOOL)_hasPerformedOneTimeSandboxSecureDefaultsMigration;
- (id)_sandboxMigrationResources;
- (id)initWithResourcePreferencesController:(id)a0 fileExtensionController:(id)a1;
- (void)performOneTimeSandboxResourceMigrationIfNecessary;

@end
