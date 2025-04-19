@class NSString;

@interface _NSGlobalPrefs10_3FavoriteColorsStore : NSFavoriteColorsStore <NSFavoriteColorsStoreConcreteSubclass> {
    NSString *_preferenceKey;
    NSString *_domain;
}

- (void)dealloc;
- (id)init;
- (id)colorsFromBacking;
- (id)initWithPreferenceKey:(id)a0 domain:(id)a1;
- (void)postDistributedNotification;
- (void)remoteColorsDidChange:(id)a0;
- (BOOL)writeColorsToBacking:(id)a0;

@end
