@class NSArray, NSDictionary, NSString;

@interface FCSmarterMessagingConfig : NSObject

@property (readonly, nonatomic) long long lowChurnPropensitySegmentSetId;
@property (readonly, nonatomic) long long mediumChurnPropensitySegmentSetId;
@property (readonly, nonatomic) long long highChurnPropensitySegmentSetId;
@property (readonly, copy, nonatomic) NSArray *segmentSetIdsAllowlist;
@property (readonly, copy, nonatomic) NSArray *placementsBlocklist;
@property (readonly, nonatomic) BOOL todayFeedMastheadBannerEnabledForSubscribers;
@property (readonly, copy, nonatomic) NSDictionary *engagementUpsellConfig;
@property (readonly, nonatomic) long long maxEnableNotificationBubbleTipPresentations;
@property (readonly, nonatomic) long long notificationBubbleTipPresentationsQuiescenceInterval;
@property (readonly, nonatomic) long long maxSportsOnboardingBubbleTipPresentations;
@property (readonly, nonatomic) long long sportsBubbleTipPresentationsQuiescenceInterval;
@property (readonly, nonatomic) long long maxSportsScoresBubbleTipPresentations;
@property (readonly, nonatomic) long long sportsScoresBubbleTipPresentationsQuiescenceInterval;
@property (readonly, nonatomic) long long maxShortcutsBubbleTipPresentations;
@property (readonly, nonatomic) long long shortcutsBubbleTipPresentationsQuiescenceInterval;
@property (readonly, nonatomic) long long maxPuzzleHubInfoBubbleTipPresentations;
@property (readonly, nonatomic) long long puzzleHubInfoBubbleTipPresentationsQuiescenceInterval;
@property (copy, nonatomic) NSString *puzzleHubInfoBubbleTipTitle;
@property (copy, nonatomic) NSString *puzzleHubInfoBubbleTipBody;
@property (copy, nonatomic) NSString *puzzleHubInfoBubbleTipIconUrl;
@property (copy, nonatomic) NSString *discoverNewsPlusBubbleTipTitle;
@property (copy, nonatomic) NSString *discoverNewsPlusBubbleTipBody;
@property (readonly, nonatomic) BOOL discoverNewsPlusBubbleTipEnabled;
@property (readonly, nonatomic) long long maxNewsPlusStoriesBubbleTipPresentations;
@property (readonly, nonatomic) long long newsPlusStoriesBubbleTipPresentationsQuiescenceInterval;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
