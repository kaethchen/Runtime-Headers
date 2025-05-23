@class UNUserNotificationCenter, WFTriggerManager, NSString, NSObject;
@protocol WFDatabaseProvider, OS_dispatch_queue;

@interface WFTriggerBootManager : NSObject <UNUserNotificationCenterDelegate>

@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (retain, nonatomic) WFTriggerManager *triggerManager;
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)category;
+ (void)clearDeliveredNotificationsWithUserNotificationCenter:(id)a0;
+ (void)registerForNotificationRemovalWithUserNotificationCenter:(id)a0 scheduleIfNeeded:(BOOL)a1;

- (void).cxx_destruct;
- (void)start;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)bootUUIDFileURL;
- (id)firstUnlockDate;
- (BOOL)canRunAutomations;
- (void)configuredTriggersDidChange:(id)a0;
- (BOOL)createFirstUnlockTimeFile;
- (void)createOrUpdateBootTimeFileIfNeeded;
- (void)deviceWasUnlockedForTheFirstTime;
- (BOOL)enabledTriggers:(id)a0;
- (id)firstUnlockTimeURL;
- (id)initWithDatabaseProvider:(id)a0;
- (id)lastKnownBootUUID;
- (BOOL)lastKnownBootUUIDDiffersFromCurrentBootUUID;
- (id)notificationContentForDeviceWithKnownUnlockedState:(BOOL)a0;
- (void)postNotificationWithUserNotificationCenterIfNecessary:(id)a0 completionHandler:(id /* block */)a1;
- (void)queue_postNotification;
- (void)registerForInitialBootXPCActivityWithUserNotificationCenterIfNeeded:(id)a0;
- (void)replaceNotificationContentWithUpdatedTitleIfNeeded;
- (id)runningThresholdDate;
- (BOOL)triggerRunningTimeoutHasPassed;
- (void)willRunAutomations;

@end
