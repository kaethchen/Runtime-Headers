@class NSString, NSArray, _EKNotificationMonitor;

@interface CALNInboxNotificationMonitor : NSObject <CADModule, CALNInboxNotificationProvider>

@property (readonly, nonatomic) _EKNotificationMonitor *notificationMonitor;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *eventNotificationReferences;
@property (readonly, nonatomic) unsigned long long eventNotificationCount;

- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (void)protectedDataDidBecomeAvailable;
- (void)addNotificationCountChangedObserver:(id)a0 selector:(SEL)a1;
- (void)addNotificationsChangedObserver:(id)a0 selector:(SEL)a1;
- (void)addNotificationsLoadedObserver:(id)a0 selector:(SEL)a1;
- (void)didRegisterForAlarms;
- (id)initWithEventStoreProvider:(id)a0;
- (void)receivedAlarmNamed:(id)a0;
- (void)receivedNotificationNamed:(id)a0;
- (void)removeNotificationCountChangedObserver:(id)a0 selector:(SEL)a1;
- (void)removeNotificationsChangedObserver:(id)a0;
- (void)removeNotificationsLoadedObserver:(id)a0 selector:(SEL)a1;

@end
