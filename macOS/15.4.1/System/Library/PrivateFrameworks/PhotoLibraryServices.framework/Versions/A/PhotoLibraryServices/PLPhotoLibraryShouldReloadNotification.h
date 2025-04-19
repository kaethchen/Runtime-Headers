@class PLPhotoLibrary;

@interface PLPhotoLibraryShouldReloadNotification : PLChangeNotification {
    PLPhotoLibrary *_photoLibrary;
}

- (id)name;
- (void).cxx_destruct;
- (id)object;
- (id)userInfo;
- (id)initNotificationWithPhotoLibrary:(id)a0;

@end
