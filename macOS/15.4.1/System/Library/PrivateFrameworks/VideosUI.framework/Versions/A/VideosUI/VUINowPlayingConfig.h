@class NSArray, NSDictionary;

@interface VUINowPlayingConfig : NSObject

@property (nonatomic) BOOL showsLozengeForLivePlayback;
@property (nonatomic) BOOL showsUpNextInHUDForVOD;
@property (nonatomic) BOOL showsUpNextInHUDForLive;
@property (nonatomic) BOOL refetchesUpNextDataForVOD;
@property (nonatomic) BOOL refetchesUpNextDataForLive;
@property (nonatomic) BOOL showsStillWatchingAlert;
@property (nonatomic) double stillWatchingAlertDuration;
@property (nonatomic) double alertIdleTimeout;
@property (copy, nonatomic) NSArray *mediaTypesExcludedFromReporting;
@property (nonatomic) BOOL allowQOSReportingForiTunesLibraryPlayback;
@property (nonatomic) BOOL convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero;
@property (copy, nonatomic) NSArray *mediaCharacteristicsToLocalize;
@property (copy, nonatomic) NSDictionary *mediaLocalizationKeyMapping;
@property (copy, nonatomic) NSArray *audioIDPrefixes;
@property (nonatomic) double liveSportsStartFromBeginningOffset;
@property (nonatomic) BOOL shouldSendLiveStreamStartAndEndTimesToAVKit;
@property (nonatomic) BOOL shouldAdjustLiveStreamStartTimeToMatchSeekableRangeStartTime;
@property (nonatomic) BOOL shouldAdjustLiveStreamEndTimeToMatchSeekableRangeEndTime;
@property (nonatomic) double liveStreamStartTimeAdjustmentSlopFactor;
@property (nonatomic) double liveStreamStartAndEndTimeBadMetadataCutoff;
@property (nonatomic) double liveStreamOverrunExtension;
@property (nonatomic) double prerollFadeInEndOffset;
@property (nonatomic) BOOL showsLongLoadingAlert;
@property (nonatomic) double longLoadingTimeout;
@property (nonatomic) double smartHapticSyncOffset;

- (id)init;
- (void).cxx_destruct;

@end
