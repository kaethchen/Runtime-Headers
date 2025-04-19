@class NSString, NSArray, ATXNotificationVolumeByCountAndPercentage, ATXNotificationResolutionByPercentage;

@interface ATXNotificationCategorizationFeatureCollectionSet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) long long notificationDeliveryUrgency;
@property (readonly, nonatomic) unsigned long long contactRelationships;
@property (readonly, nonatomic) NSArray *relationshipsFromMegadome;
@property (readonly, nonatomic) unsigned long long dayOfWeek;
@property (readonly, nonatomic) int timeOfDay;
@property (readonly, nonatomic) int locationSemantic;
@property (readonly, nonatomic) double appModeAffinityScore;
@property (readonly, nonatomic) double contactModeAffinityScore;
@property (readonly, nonatomic) double notificationModeAffinityScore;
@property (readonly, nonatomic) double appCategoryScoreInMode;
@property (readonly, nonatomic) double urgencyScore;
@property (readonly, nonatomic) double importanceScore;
@property (readonly, nonatomic) unsigned long long bucketizedLengthOfNotificationBody;
@property (readonly, nonatomic) unsigned long long currentUnifiedMode;
@property (readonly, nonatomic) unsigned long long timeToLaunchApp;
@property (readonly, nonatomic) ATXNotificationVolumeByCountAndPercentage *historicalVolumeByCountAndPercentage;
@property (readonly, nonatomic) ATXNotificationVolumeByCountAndPercentage *modeConditionedHistoricalVolumeByCountAndPercentage;
@property (readonly, nonatomic) ATXNotificationResolutionByPercentage *historicalResolutionByPercentage;
@property (readonly, nonatomic) ATXNotificationResolutionByPercentage *modeConditionedHistoricalResolutionByPercentage;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0 notificationDeliveryUrgency:(long long)a1 contactRelationships:(unsigned long long)a2 relationshipsFromMegadome:(id)a3 dayOfWeek:(unsigned long long)a4 timeOfDay:(int)a5 locationSemantic:(int)a6 appModeAffinityScore:(double)a7 contactModeAffinityScore:(double)a8 notificationModeAffinityScore:(double)a9 appCategoryScoreInMode:(double)a10 urgencyScore:(double)a11 importanceScore:(double)a12 bucketizedLengthOfNotificationBody:(unsigned long long)a13 currentMode:(unsigned long long)a14 timeToLaunchApp:(unsigned long long)a15 historicalVolumeByCountAndPercentage:(id)a16 modeConditionedHistoricalVolumeByCountAndPercentage:(id)a17 historicalResolutionByPercentage:(id)a18 modeConditionedHistoricalResolutionByPercentage:(id)a19;

@end
