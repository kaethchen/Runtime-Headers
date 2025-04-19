@class PLPhotoLibraryBundleController, NSObject;
@protocol OS_dispatch_queue;

@interface PLDistributedNotificationHandler : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    PLPhotoLibraryBundleController *_libraryBundleController;
}

- (void).cxx_destruct;
- (void)registerForNotifications;
- (void)_handleNotification:(id)a0;
- (void)_handleCloudPhotoNotification;
- (void)_openSystemPhotoLibrary;
- (id)initWithLibraryBundleController:(id)a0;

@end
