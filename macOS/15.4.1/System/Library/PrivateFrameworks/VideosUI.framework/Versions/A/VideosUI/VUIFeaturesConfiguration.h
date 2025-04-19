@class VUIGDPRConfig, VUILivePostPlayConfig, VUIDropOnTabConfig, VUIAutoPlayConfig, VUINowPlayingConfig, VUILibConfig, VUIAccountConfig, NSMutableDictionary, VUIMediaShowcasingConfig, VUILiveLinkConfig, VUICanonicalConfig, VUIPlaybackUpNextConfig, VUILaunchConfig, VUISyndicationConfig, VUIUpNextConfig, VUIMultiviewConfig, VUITipKitConfig, VUITabItemsUpdateConfig, VUITimedMetadataConfig, VUIPlayerTabsConfig, VUIDownloadConfig, VUIAccountMessageConfig, VUIRootControllerConfig;

@interface VUIFeaturesConfiguration : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachedConfigDictionary;
@property (readonly, nonatomic) VUIPlaybackUpNextConfig *playbackUpNextConfig;
@property (readonly, nonatomic) VUINowPlayingConfig *nowPlayingConfig;
@property (readonly, nonatomic) VUIPlayerTabsConfig *playerTabsConfig;
@property (readonly, nonatomic) VUIAutoPlayConfig *autoPlayConfig;
@property (readonly, nonatomic) VUILiveLinkConfig *liveLinkConfig;
@property (readonly, nonatomic) VUIDownloadConfig *downloadConfig;
@property (readonly, nonatomic) VUISyndicationConfig *syndicationConfig;
@property (readonly, nonatomic) VUIDropOnTabConfig *dropOnTabConfig;
@property (readonly, nonatomic) VUIMediaShowcasingConfig *mediaShowcaseConfig;
@property (readonly, nonatomic) VUIUpNextConfig *upNextConfig;
@property (readonly, nonatomic) VUICanonicalConfig *canonicalConfig;
@property (readonly, nonatomic) VUIAccountConfig *accountConfig;
@property (readonly, nonatomic) VUIAccountMessageConfig *accountMessageConfig;
@property (readonly, nonatomic) VUIRootControllerConfig *rootControllerConfig;
@property (readonly, nonatomic) VUITabItemsUpdateConfig *tabItemsUpdateConfig;
@property (readonly, nonatomic) VUILaunchConfig *launchConfig;
@property (readonly, nonatomic) VUIMultiviewConfig *multiviewConfig;
@property (readonly, nonatomic) VUILibConfig *libConfig;
@property (readonly, nonatomic) VUIGDPRConfig *gdprConfig;
@property (readonly, nonatomic) VUITimedMetadataConfig *timedMetadataConfig;
@property (readonly, nonatomic) VUILivePostPlayConfig *livePostPlayConfig;
@property (readonly, nonatomic) VUITipKitConfig *tipKitConfig;

+ (id)sharedInstance;
+ (BOOL)boolValueForKey:(id)a0 fromDictionary:(id)a1 defaultValue:(BOOL)a2;
+ (id)defaultsNumberValueForKey:(id)a0;
+ (id)defaultsStringValueForKey:(id)a0;
+ (id)numberValueForKey:(id)a0 fromDictionary:(id)a1;
+ (id)stringValueForKey:(id)a0 fromDictionary:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (id)_cachePath;
- (void)_cacheFeatureConfiguration:(id)a0;
- (void)_populateAccountConfig:(id)a0;
- (void)_populateAccountMessageConfig:(id)a0;
- (void)_populateCanonicalConfig:(id)a0;
- (BOOL)_populateConfigWithDictionary:(id)a0 isLaunching:(BOOL)a1;
- (void)_populateGDPRConfig:(id)a0;
- (void)_populateLaunchConfig:(id)a0;
- (void)_populateLibConfig:(id)a0;
- (void)_populateLivePostPlayConfig:(id)a0;
- (void)_populateMediaShowcaseConfig:(id)a0;
- (void)_populateMultiviewConfig:(id)a0;
- (void)_populateRootControllerConfig:(id)a0;
- (void)_populateTabItemsUpdateConfig:(id)a0;
- (void)_populateTimedMetadataConfig:(id)a0;
- (void)_populateTipKitConfig:(id)a0;
- (BOOL)_updateFromCache;
- (void)_updateTVSettingsIfNeeded:(BOOL)a0;
- (void)parseUpNextConfig:(id)a0;

@end
