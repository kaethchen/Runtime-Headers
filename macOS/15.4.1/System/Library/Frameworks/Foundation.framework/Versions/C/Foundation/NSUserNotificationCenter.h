@class NSData, NSArray;
@protocol NSUserNotificationCenterDelegate, _NSUserNotificationCenterDelegatePrivate;

@interface NSUserNotificationCenter : NSObject {
    id _internal;
}

@property (class, readonly) NSUserNotificationCenter *defaultUserNotificationCenter;

@property (nonatomic) id<_NSUserNotificationCenterDelegatePrivate> _appDelegate;
@property (readonly) BOOL _notificationsDisabled;
@property (setter=_setPreventApplicationLaunching:) BOOL _preventApplicationLaunching;
@property (readonly, copy) NSData *_registeredPushToken;
@property (setter=_setReverseDeliveredNotifications:) BOOL _reverseDeliveredNotifications;
@property (readonly) unsigned long long _maxPresentedNotifications;
@property (readonly) NSArray *_displayedNotifications;
@property (readonly) NSArray *_presentedAlerts;
@property (copy) NSArray *_todaySummaryNotifications;
@property (copy) NSArray *_tomorrowSummaryNotifications;
@property (readonly) unsigned long long _notificationPreferences;
@property id<NSUserNotificationCenterDelegate> delegate;
@property (copy) NSArray *scheduledNotifications;
@property (readonly, copy) NSArray *deliveredNotifications;

+ (id)_centerForBundleIdentifier:(id)a0;
+ (id)_centerForIdentifier:(id)a0 type:(unsigned long long)a1;
+ (BOOL)_doNotDisturbEnabled;
+ (id)_identifiersForCenterType:(unsigned long long)a0;
+ (void)_registerConnectionCallback:(id /* block */)a0;
+ (void)_registerForOnDemandCallback:(id /* block */)a0;
+ (id)_searchPathForCenterType:(unsigned long long)a0;
+ (id)_webNotificationCenterSearchPath;
+ (id)_webNotificationIdentifiers;

- (id)init;
- (void)removeAllDeliveredNotifications;
- (void)_invalidateAndUnregister;
- (void)_registerForRemotePushNotificationTypes:(unsigned long long)a0;
- (void)_registerForRemotePushNotificationsWithEnvironment:(id)a0 types:(unsigned long long)a1;
- (void)_removeAllDisplayedNotifications;
- (void)_removeAllPresentedAlerts;
- (void)_removeDisplayedNotification:(id)a0;
- (void)_removePresentedAlert:(id)a0;
- (void)_setAppDelegate:(id)a0 connect:(BOOL)a1;
- (void)_setDeliveredNotifications:(id)a0;
- (void)_setProgress:(double)a0 forNotificationWithIdentifier:(id)a1;
- (void)_unRegisterForRemotePushNotifications;
- (void)deliverNotification:(id)a0;
- (void)removeDeliveredNotification:(id)a0;
- (void)removeScheduledNotification:(id)a0;
- (void)scheduleNotification:(id)a0;

@end
