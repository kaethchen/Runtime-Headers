@class WFTriggerUserNotificationManager, NSObject;
@protocol WFDatabaseProvider, OS_dispatch_queue;

@interface WFTriggerNotificationScheduler : NSObject

@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) WFTriggerUserNotificationManager *userNotificationManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (BOOL)shortenTimeIntervalsForTesting;

- (void).cxx_destruct;
- (void)cancelActivitiesFromTrigger:(id)a0;
- (void)cancelActivitiesFromTriggerIdentifier:(id)a0;
- (void)cancelAllActivitiesFromTriggers:(id)a0;
- (id)initWithUserNotificationManager:(id)a0 databaseProvider:(id)a1;
- (id)initialRunDateForConfiguredTrigger:(id)a0;
- (void)migrateAllTriggersCreatedBeforeBackgroundRunningWithDatabase:(id)a0;
- (void)postBackgroundRunningNotificationForTrigger:(id)a0;
- (void)registerConfiguredTrigger:(id)a0 delay:(id)a1;
- (void)registerWithDatabaseProvider:(id)a0;
- (void)scheduleTriggerForNotifications:(id)a0;
- (int)updateTriggerNotificationLevels:(id)a0 database:(id)a1;

@end
