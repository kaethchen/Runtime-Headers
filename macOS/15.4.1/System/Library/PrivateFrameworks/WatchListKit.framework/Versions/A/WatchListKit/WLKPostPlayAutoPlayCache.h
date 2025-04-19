@class NSUserDefaults;

@interface WLKPostPlayAutoPlayCache : NSObject {
    NSUserDefaults *_userDefaults;
    int _postPlayAutoPlayNextEpisodeSettingChangedNotificationToken;
    int _postPlayAutoPlayRecommendedItemsSettingChangedNotificationToken;
}

+ (void)_postLocalNotificationForType:(unsigned long long)a0 status:(BOOL)a1 error:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithUserDefaults:(id)a0;
- (id)currentSettings;
- (id)_cacheKeyForType:(unsigned long long)a0;
- (BOOL)_cacheResultForType:(unsigned long long)a0;
- (void)_setEnabled:(BOOL)a0 type:(unsigned long long)a1;
- (BOOL)currentSettingForType:(unsigned long long)a0;
- (BOOL)hasCacheForType:(unsigned long long)a0;
- (BOOL)isWaitingForConnection;
- (void)setIsWaitingForConnection:(BOOL)a0;
- (void)updateWithSettings:(id)a0;

@end
