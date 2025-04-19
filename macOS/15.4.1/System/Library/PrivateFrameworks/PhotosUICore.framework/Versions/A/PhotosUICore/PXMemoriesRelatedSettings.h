@interface PXMemoriesRelatedSettings : PXSettings

@property (nonatomic) BOOL enableMemoriesLivingOnFeedback;
@property (nonatomic) BOOL fakePeopleProximity;
@property (nonatomic) BOOL showLocalMemories;
@property (nonatomic) BOOL useOnlyMusicForTopicInTopPickSuggestions;
@property (nonatomic) BOOL includeChillMixInMusicForYou;
@property (nonatomic) BOOL includeGetUpMixInMusicForYou;
@property (nonatomic) double refreshPhotoKitTimeout;
@property (nonatomic) double widgetRefreshTimeInterval;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForInterestingMoments;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForMemories;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForMovieHeader;
@property (nonatomic) unsigned long long deleteBehavior;
@property (nonatomic) BOOL recoverBlacklistedMemories;
@property (nonatomic) BOOL showMemoryTitleLayer;
@property (nonatomic) BOOL enableIPadWideHeader;
@property (nonatomic) long long subtitleFontSize;
@property (nonatomic) unsigned long long timelineContentMode;
@property (nonatomic) unsigned long long widgetSize;
@property (nonatomic) unsigned long long timelineSchedulerMode;
@property (nonatomic) BOOL enableDiscoveryFeed;
@property (nonatomic) unsigned long long discoveryRankingMode;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (BOOL)isAssetCountAcceptableForMemoryLensPlayback:(long long)a0;
+ (BOOL)isAssetCountAcceptableForMemoryPlayback:(long long)a0;
+ (id)schedulerOptionsFromTimelineSchedulerMode:(unsigned long long)a0;

- (void)setDefaultValues;
- (id)parentSettings;
- (void)performPostSaveActions;

@end
