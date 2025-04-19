@class NSUserNotificationCenter, NSString;

@interface AMSNSUserNotificationStrategy : NSObject <NSUserNotificationCenterDelegate, AMSUserNotificationStrategy>

@property (retain) NSUserNotificationCenter *center;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_badgeBundleId:(id)a0 increment:(BOOL)a1 error:(id *)a2;
+ (id)_activeNotificationsWithCenterBundleId:(id)a0;
+ (id)_centerForBundleId:(id)a0;
+ (id)_postNotification:(id)a0 bag:(id)a1 centerBundleId:(id)a2;
+ (id)_removeNotification:(id)a0 centerBundleId:(id)a1;
+ (id)_removeNotificationWithIdentifier:(id)a0 centerBundleId:(id)a1 logKey:(id)a2 scheduledOnly:(BOOL)a3;

- (void).cxx_destruct;

@end
