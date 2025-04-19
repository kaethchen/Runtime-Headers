@class APSConnection, NSString, NSUserNotificationCenter, NSArray;

@interface IMMacNotificationCenterManager : NSObject

@property (retain, nonatomic) APSConnection *connection;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSUserNotificationCenter *center;
@property (retain, nonatomic) NSArray *topics;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)userNotificationCenter:(id)a0 notificationPreferencesChanged:(unsigned long long)a1;
- (void)userNotificationCenter:(id)a0 notificationsDisabled:(BOOL)a1;
- (void)_NCUpdated:(id)a0;
- (void)_cleanupNotificationCenter;
- (void)enableNotificationCenter:(BOOL)a0;
- (id)initWithIdentifier:(id)a0 topics:(id)a1 connection:(id)a2;
- (void)updateNotificationsStatus;

@end
