@class ATXUserNotification, ATXNotificationResolutionByPercentage, ATXNotificationVolumeByCountAndPercentage;

@interface ATXHistoricalResolutonsForNotification : NSObject

@property (readonly, nonatomic) ATXUserNotification *userNotification;
@property (readonly, nonatomic) ATXNotificationVolumeByCountAndPercentage *historicalVolumeByCountAndPercentage;
@property (readonly, nonatomic) ATXNotificationVolumeByCountAndPercentage *modeConditionedHistoricalVolumeByCountAndPercentage;
@property (readonly, nonatomic) ATXNotificationResolutionByPercentage *historicalResolutionByPercentage;
@property (readonly, nonatomic) ATXNotificationResolutionByPercentage *modeConditionedHistoricalResolutionByPercentage;

- (void).cxx_destruct;
- (id)initWithNotification:(id)a0 historicalVolumeByCountAndPercentage:(id)a1 modeConditionedHistoricalVolumeByCountAndPercentage:(id)a2 historicalResolutionByPercentage:(id)a3 modeConditionedHistoricalResolutionByPercentage:(id)a4;

@end
