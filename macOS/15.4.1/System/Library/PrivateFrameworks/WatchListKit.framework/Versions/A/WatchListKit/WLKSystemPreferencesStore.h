@class NSObject, NSString, NSArray, NSNumber, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface WLKSystemPreferencesStore : NSObject {
    int _preferencesDidChangeNotificationToken;
    NSUserDefaults *_defaultsAccessor;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (nonatomic) BOOL useCellularDataPlayback;
@property (copy, nonatomic) NSString *cellularQualityPlayback;
@property (copy, nonatomic) NSString *wifiQualityPlayback;
@property (nonatomic) BOOL useCellularDataDownload;
@property (copy, nonatomic) NSString *wifiQualityDownload;
@property (copy, nonatomic) NSString *cellularQualityDownload;
@property (copy, nonatomic) NSString *audioLanguageCode;
@property (readonly, nonatomic) NSString *audioLanguageCodeIncludingSentinel;
@property (copy, nonatomic) NSArray *selectedAudioLanguagesDownload;
@property (copy, nonatomic) NSArray *subtitleAudioLanguagesDownload;
@property (nonatomic) BOOL subtitleDefaultLanguageEnabledDownload;
@property (copy, nonatomic) NSArray *supplementaryAvailableAudioLanguages;
@property (nonatomic) BOOL privateModeEnabled;
@property (nonatomic) BOOL sportsScoreSpoilersAllowed;
@property (nonatomic) BOOL postPlayAutoPlayNextVideo;
@property (copy, nonatomic) NSString *purchaseResolution;
@property (nonatomic) BOOL hasAVAdapterEvenBeenConnected;
@property (nonatomic) BOOL downloadsCompatibleWithAVAdapter;
@property (nonatomic) BOOL upNextLockupsUseCoverArt;
@property (copy, nonatomic) NSNumber *preferredPlaybackDimensionality;

+ (id)sharedPreferences;
+ (BOOL)isSystemPreferencesStoreInitializing;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_getPreferencesValue:(id)a0 fallbackValue:(id)a1;
- (void)_publishCrossProcessPreferencesChangedNotification;
- (void)_setDefaultsValue:(id)a0 key:(id)a1 syncNPS:(BOOL)a2;
- (void)_setPreferencesValue:(id)a0 forKey:(id)a1;
- (BOOL)hasPostPlayAutoPlayNextVideoPreferences;
- (void)migratePrivateModeFromDiskIfNeeded:(id)a0;
- (void)migrateSportsSpoilersFromDiskIfNeeded:(id)a0;
- (void)removePostPlayAutoPlayNextVideoPreferences;

@end
