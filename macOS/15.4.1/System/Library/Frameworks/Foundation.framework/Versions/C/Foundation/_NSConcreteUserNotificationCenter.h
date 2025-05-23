@class NSString, NSObject;
@protocol _NSUserNotificationCenterAppKitDelegatePrivate, OS_xpc_object, _NSUserNotificationCenterDelegatePrivate, OS_dispatch_queue;

@interface _NSConcreteUserNotificationCenter : NSUserNotificationCenter {
    unsigned long long _maxPresentedNotifications;
    id<_NSUserNotificationCenterDelegatePrivate> _delegate;
    unsigned long long _type;
    BOOL _invalidated;
    BOOL _needsAuthentication;
    BOOL _serverConnectionFailure;
    BOOL _preventApplicationLaunching;
    unsigned long long _notificationPreferences;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connection_queue;
}

@property (readonly, copy) NSString *bundleIdentifier;
@property (nonatomic) id<_NSUserNotificationCenterAppKitDelegatePrivate> _appDelegate;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)_scheduledNotificationsExpired:(id)a0;
- (id)_initWithBundleIdentifier:(id)a0 type:(unsigned long long)a1;
- (void)_send_connection_authentication;
- (void)removeAllDeliveredNotifications;
- (void)_addScheduledNotification:(id)a0 immediate:(BOOL)a1;
- (void)_alertDismissed:(id)a0;
- (void)_alertSnoozed:(id)a0;
- (void)_clearCenterCache;
- (void)_connectToServerIfNecessary;
- (void)_deliveredMessagesRemoved:(id)a0;
- (id)_displayedNotifications;
- (void)_invalidateAndUnregister;
- (unsigned long long)_maxPresentedNotifications;
- (void)_notificationClickedMessage:(id)a0;
- (unsigned long long)_notificationPreferences;
- (void)_notificationPresentedMessage:(id)a0;
- (BOOL)_notificationsDisabled;
- (id)_presentedAlerts;
- (BOOL)_preventApplicationLaunching;
- (void)_registerForRemotePushNotificationTypes:(unsigned long long)a0;
- (void)_registerForRemotePushNotificationsWithEnvironment:(id)a0 types:(unsigned long long)a1;
- (id)_registeredPushToken;
- (void)_remotePushResponse:(id)a0;
- (void)_removeAllDisplayedNotifications;
- (void)_removeAllPresentedAlerts;
- (void)_removeDisplayedNotification:(id)a0;
- (void)_removeNotification:(id)a0 withMessageType:(int)a1;
- (void)_removePresentedAlert:(id)a0;
- (void)_responseChangedMessage:(id)a0;
- (id)_retrieveServerArrayForMessageType:(int)a0 timedOut:(BOOL *)a1;
- (BOOL)_reverseDeliveredNotifications;
- (void)_sendAsyncMessage:(int)a0 withBlock:(id /* block */)a1;
- (void)_sendDelegateMessage:(SEL)a0 sendToAppDelegate:(BOOL)a1 withNotificationFromMessage:(id)a2;
- (void)_sendDelegateMessage:(SEL)a0 sendToAppDelegate:(BOOL)a1 withObject:(id)a2;
- (void)_sendNotificationPrefsChanged:(id)a0;
- (void)_sendNotificationsDisabledChanged:(id)a0;
- (void)_sendSummaryStateChanged:(id)a0;
- (id)_sendSyncMessage:(int)a0 result:(id /* block */)a1;
- (id)_serverConnection;
- (void)_server_did_come_alive:(id)a0;
- (void)_setAppDelegate:(id)a0 connect:(BOOL)a1;
- (void)_setDeliveredNotifications:(id)a0;
- (void)_setNotifications:(id)a0 forMessageType:(int)a1;
- (void)_setPreventApplicationLaunching:(BOOL)a0;
- (void)_setProgress:(double)a0 forNotificationWithIdentifier:(id)a1;
- (void)_setReverseDeliveredNotifications:(BOOL)a0;
- (void)_shouldPresentNotification:(id)a0;
- (id)_todaySummaryNotifications;
- (id)_tomorrowSummaryNotifications;
- (void)_unRegisterForRemotePushNotifications;
- (void)deliverNotification:(id)a0;
- (id)deliveredNotifications;
- (void)removeDeliveredNotification:(id)a0;
- (void)removeScheduledNotification:(id)a0;
- (void)scheduleNotification:(id)a0;
- (id)scheduledNotifications;
- (void)setScheduledNotifications:(id)a0;
- (void)set_todaySummaryNotifications:(id)a0;
- (void)set_tomorrowSummaryNotifications:(id)a0;

@end
