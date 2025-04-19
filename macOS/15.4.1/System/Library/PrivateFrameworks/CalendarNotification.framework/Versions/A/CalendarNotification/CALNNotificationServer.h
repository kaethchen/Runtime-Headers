@class NSArray, NSMutableDictionary, NSString, NSObject;
@protocol CALNUserNotificationCenter, CALNNotificationStorage, CALNAnalyticsHandler, OS_dispatch_queue;

@interface CALNNotificationServer : NSObject <CADModule, CALNUserNotificationCenterDelegate, CALNNotificationManager>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableDictionary *notificationSourceMap;
@property (retain, nonatomic) id<CALNNotificationStorage> storage;
@property (readonly, nonatomic) id<CALNAnalyticsHandler> analyticsHandler;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL isProtectedDataAvailable;
@property (readonly, nonatomic) id<CALNUserNotificationCenter> userNotificationCenter;
@property (readonly, nonatomic) NSArray *notificationSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_activate;
- (void).cxx_destruct;
- (void)activate;
- (void)addRecord:(id)a0;
- (void)deactivate;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_addRecord:(id)a0;
- (void)_deactivate;
- (void)protectedDataDidBecomeAvailable;
- (id)_notificationRecordWithSourceIdentifier:(id)a0 sourceClientIdentifier:(id)a1;
- (void)_didSetNotificationSources:(id)a0;
- (id)_fetchRecordsWithSourceIdentifier:(id)a0;
- (id)_notificationRecordResponseFromNotificationResponse:(id)a0;
- (id)_notificationSourceMapWithNotificationSources:(id)a0;
- (void)_removeRecordWithSourceIdentifier:(id)a0 sourceClientIdentifier:(id)a1;
- (void)_updateRecord:(id)a0;
- (void)aboutToPostNotification:(id)a0;
- (void)didRegisterForAlarms;
- (id)fetchRecordsWithSourceIdentifier:(id)a0;
- (id)initWithUserNotificationCenter:(id)a0 storage:(id)a1 analyticsHandler:(id)a2 deviceLockObserver:(id)a3;
- (id)notificationSourceForSourceIdentifier:(id)a0;
- (void)receivedAlarmNamed:(id)a0;
- (void)receivedNotificationNamed:(id)a0;
- (void)removeRecordWithSourceIdentifier:(id)a0 sourceClientIdentifier:(id)a1;
- (void)setNotificationSources:(id)a0;
- (void)updateRecord:(id)a0;

@end
