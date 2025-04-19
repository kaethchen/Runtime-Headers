@class EMCoreAnalyticsCollector, NSMutableDictionary;
@protocol EFScheduler;

@interface MSUserNotificationCenterAnalyticsLogger : NSObject

@property (retain, nonatomic) EMCoreAnalyticsCollector *coreAnalytics;
@property (readonly, nonatomic) id<EFScheduler> scheduler;
@property (retain, nonatomic) NSMutableDictionary *notificationIntervals;
@property (nonatomic) BOOL generatedSummarySupported;

- (void).cxx_destruct;
- (void)notificationSummaryUpdatedForNotificationID:(id)a0;
- (void)notificationWithSummaryPostedForNotificationID:(id)a0;
- (void)notificationWithoutSummaryPostedForNotificationID:(id)a0;
- (id)initWithCoreAnalyticsCollector:(id)a0;
- (void)messageAddedWithNotificationIDs:(id)a0;
- (void)messageSummaryAddedForNotificationID:(id)a0 isGeneratedSummary:(BOOL)a1;
- (void)notificationRemovedWithNotificationIDs:(id)a0;

@end
