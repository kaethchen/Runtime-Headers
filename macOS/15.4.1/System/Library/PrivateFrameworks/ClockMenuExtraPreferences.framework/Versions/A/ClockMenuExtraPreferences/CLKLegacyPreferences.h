@class NSDictionary;

@interface CLKLegacyPreferences : NSObject {
    NSDictionary *preferencesDictionary;
}

+ (id)legacyPreferencesIfAvailable;

- (void)dealloc;
- (id)init;
- (id)preferencesDictionary;
- (void)removeLegacyPreferencesFile;

@end
