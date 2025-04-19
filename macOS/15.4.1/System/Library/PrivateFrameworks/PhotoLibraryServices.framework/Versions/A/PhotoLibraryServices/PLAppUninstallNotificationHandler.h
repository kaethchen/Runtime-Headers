@class PLPhotoLibraryBundleController;

@interface PLAppUninstallNotificationHandler : NSObject {
    PLPhotoLibraryBundleController *_libraryBundleController;
}

+ (id)applicationBundlesToValidate;

- (void).cxx_destruct;
- (void)_removeAppPhotoLibrariesForApplication:(id)a0;
- (void)handleApplicationUninstalledNotification:(id)a0;
- (id)initWithLibraryBundleController:(id)a0;

@end
