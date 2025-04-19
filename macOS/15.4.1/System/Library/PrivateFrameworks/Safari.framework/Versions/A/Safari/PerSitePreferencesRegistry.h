@class NSMutableDictionary;

@interface PerSitePreferencesRegistry : NSObject {
    NSMutableDictionary *_mapOfPreferenceToUserInterfaceInformation;
}

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (void)_buildMapIfNeeded;
- (id)userInterfaceInformationForPreference:(id)a0;

@end
