@class NSURL;

@interface _NSLibraryArchiveFavoriteColorsStore : NSFavoriteColorsStore <NSFavoriteColorsStoreConcreteSubclass> {
    NSURL *_fileURL;
}

- (void)dealloc;
- (id)init;
- (id)colorsFromBacking;
- (id)initWithFileURL:(id)a0;
- (void)postDistributedNotification;
- (void)remoteColorsDidChange:(id)a0;
- (BOOL)writeColorsToBacking:(id)a0;

@end
