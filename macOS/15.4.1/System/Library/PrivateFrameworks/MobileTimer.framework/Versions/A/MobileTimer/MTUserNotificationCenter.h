@class NSDictionary, NSString, MTUserNotificationActionDispatcher;

@interface MTUserNotificationCenter : NSObject <MTNotificationCenter>

@property (retain, nonatomic) NSDictionary *notificationCenters;
@property (retain, nonatomic) MTUserNotificationActionDispatcher *actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_setSnoozeCountdownTitleAndBody:(id)a0 forSnoozeCountdownNotification:(id)a1;
+ (id)_allIdentifiersForAlarm:(id)a0;
+ (id)_allIdentifiersForAlarm:(id)a0 includeMainIdentifier:(BOOL)a1;
+ (id)_allIdentifiersForAlarm:(id)a0 includeMainIdentifier:(BOOL)a1 includeSnooze:(BOOL)a2;
+ (id)_durationComponentsFormatter;
+ (id)_goToBedIdentifier:(id)a0;
+ (id)_mutableContentForScheduledAlarmWithCommonSettings:(id)a0;
+ (void)_setGoToBedTitleAndBody:(id)a0 forGoToBedNotification:(id)a1;
+ (void)_setSpecificContent:(id)a0 forGoToBedNotification:(id)a1;
+ (void)_setSpecificContent:(id)a0 forNormalScheduledAlarm:(id)a1;
+ (void)_setSpecificContent:(id)a0 forScheduledAlarm:(id)a1;
+ (void)_setSpecificContent:(id)a0 forSnoozeCountdownNotification:(id)a1;
+ (id)_snoozeCountdownIdentifier:(id)a0;
+ (id)_timeFormatter;
+ (id)_wakeUpAlarmStringForAlarm:(id)a0;
+ (id)categoryForScheduledAlarm:(id)a0;
+ (id)categoryForScheduledTimer:(id)a0;
+ (id)contentForScheduledAlarm:(id)a0;
+ (id)contentForScheduledTimer:(id)a0;
+ (id)launchURLForScheme:(id)a0;
+ (id)notificationPrefixes;
+ (id)requestIdentifierForScheduledAlarm:(id)a0;
+ (id)userInfoForAlarm:(id)a0;
+ (id)userInfoForTimer:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)removeAllDeliveredNotifications;
- (id)notificationCategories;
- (void)setupNotificationCenter;
- (id)alarmCategories;
- (id)timerCategories;
- (id)_notificationCenterForScheduledAlarm:(id)a0;
- (id)_notificationCenterForScheduledTimer;
- (id)bedtimeCategories;
- (unsigned long long)conditionalAlertDestination;
- (unsigned long long)conditionalListDestination;
- (unsigned long long)conditionalLockScreenDestination;
- (void)dismissNotificationsForAlarm:(id)a0;
- (void)dismissNotificationsForAlarm:(id)a0 dismissAction:(unsigned long long)a1;
- (void)dismissNotificationsForAlarm:(id)a0 includeMainIdentifier:(BOOL)a1;
- (void)dismissNotificationsForAlarm:(id)a0 includeMainIdentifier:(BOOL)a1 includeSnooze:(BOOL)a2;
- (void)dismissNotificationsForAlarm:(id)a0 includeSnooze:(BOOL)a1;
- (void)dismissNotificationsForTimer:(id)a0;
- (void)dismissNotificationsWithIdentifiers:(id)a0;
- (void)dismissRelatedNotificationsForScheduledAlarm:(id)a0;
- (void)interruptAudioAndLockDeviceWithCompletionBlock:(id /* block */)a0;
- (void)postBedtimeNotificationForAlarm:(id)a0 date:(id)a1;
- (void)postNotificationForScheduledAlarm:(id)a0 completionBlock:(id /* block */)a1;
- (void)postNotificationForScheduledAlarm:(id)a0 content:(id)a1 completionBlock:(id /* block */)a2;
- (void)postNotificationForScheduledTimer:(id)a0 completionBlock:(id /* block */)a1;
- (void)registerActionHandler:(id)a0;
- (void)tearDownNotificationsForEventIdentifiers:(id)a0;

@end
