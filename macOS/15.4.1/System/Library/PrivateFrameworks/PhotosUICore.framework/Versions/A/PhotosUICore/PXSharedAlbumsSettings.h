@interface PXSharedAlbumsSettings : PXSettings

@property (readonly, nonatomic) BOOL shouldSimulateSharedAlbumsUnavailable;
@property (readonly, nonatomic) BOOL activityEntryAllowsMultipleLikeContributors;
@property (readonly, nonatomic) long long activityEntryAssetsAddedBatchingBehavior;
@property (readonly, nonatomic) long long shelfBehavior;
@property (readonly, nonatomic) BOOL showParticipantCountBadges;
@property (readonly, nonatomic) BOOL lemonadeActivityShelfUseActivityEntries;
@property (readonly, nonatomic) BOOL lemonadeActivityShelfAlwaysAppearUnread;
@property (readonly, nonatomic) BOOL lemonadeActivityShelfAvatarAppearsAsOverlay;
@property (readonly, nonatomic) BOOL lemonadeActivityShelfPreventUpdatingUnreadState;
@property (readonly, nonatomic) long long lemonadeActivityShelfPlaceholderBehavior;
@property (readonly, nonatomic) BOOL lemonadeActivityShelfShouldOpenActivityFeedModallyByItself;
@property (readonly, nonatomic) long long activityEntryFeedLoadMoreBatchSize;
@property (readonly, nonatomic) long long lemonadeActivityFeedMultipleAssetsBehavior;
@property (readonly, nonatomic) BOOL activityEntryFeedUseOnlyCompactCells;
@property (readonly, nonatomic) long long activityEntryFeedCompactCellDisplayStyle;
@property (readonly, nonatomic) BOOL activityEntryFeedAutoplaysVideosInline;
@property (readonly, nonatomic) BOOL activityEntryFeedCompactCellsOpen1upLimitedToEntryAssets;
@property (readonly, nonatomic) BOOL activityEntryFeedFollowsReadableWidth;
@property (readonly, nonatomic) double activityEntryFeedReadableWidth;
@property (readonly, nonatomic) BOOL activityEntryFeedDrawDebugBackgrounds;
@property (readonly, nonatomic) BOOL simulateEmptyActivityEntries;
@property (nonatomic) BOOL allowEmptyAddressesForDebugging;
@property (readonly, nonatomic) BOOL alwaysShowSpatialMediaDataLossAlertForSpatialMedia;
@property (readonly, nonatomic) long long simulatedSubscriptionError;
@property (readonly, nonatomic) BOOL showParticipantSectionHeader;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
