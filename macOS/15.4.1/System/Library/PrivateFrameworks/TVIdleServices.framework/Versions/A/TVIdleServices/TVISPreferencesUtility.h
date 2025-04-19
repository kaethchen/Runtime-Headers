@interface TVISPreferencesUtility : NSObject

+ (id)idleCharacterJetPackURLOverride;
+ (long long)scheduledUpdateIntervalOverride;
+ (id)_idleAssetsDefaults;
+ (id)_idleScreenDefaults;
+ (id)_screenSaverDefaults;
+ (void)activatePhotosSharingFilter:(id)a0;
+ (void)activatePhotosSourceFilter:(id)a0;
+ (long long)activeScreenSaverType;
+ (id)aerialManifestURL;
+ (id)aerialManifestURLOverride;
+ (long long)assetDownloadInterval;
+ (id)idleCharacterActiveDate;
+ (BOOL)isAcceleratedDownloadIntervalEnabled;
+ (BOOL)isIdleCharacterPasswordsDisabled;
+ (BOOL)isIdleScreenEnabled;
+ (BOOL)isUnsafePhotoLibraryShutdownDisabled;
+ (id)nextScheduledUpdate;
+ (long long)photosSharingFilter;
+ (long long)photosSourceFilter;
+ (double)portraitClockBSDeviationThreshold;
+ (BOOL)portraitClockCityscapesEnabled;
+ (BOOL)portraitClockNatureEnabled;
+ (id)portraitClockPeopleFilter;
+ (BOOL)portraitClockPetsEnabled;
+ (id)portraitClockPhotoSource;
+ (long long)scheduledUpdateIntervalOverrideForService:(id)a0;
+ (void)setAcceleratedDownloadIntervalEnabled:(BOOL)a0;
+ (void)setActiveScreenSaverType:(long long)a0;
+ (void)setAerialManifestURL:(id)a0;
+ (void)setAssetDownloadInterval:(long long)a0;
+ (void)setNextScheduledUpdate:(id)a0;
+ (void)setPortraitClockCityscapesEnabled:(BOOL)a0;
+ (void)setPortraitClockNatureEnabled:(BOOL)a0;
+ (void)setPortraitClockPeopleFilter:(id)a0;
+ (void)setPortraitClockPetsEnabled:(BOOL)a0;

@end
