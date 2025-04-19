@interface PLPhotoLibraryForceExitObserver : NSObject

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)_photoLibraryCorruptNotification;
- (void)_photoLibraryForceClientExitNotification;

@end
