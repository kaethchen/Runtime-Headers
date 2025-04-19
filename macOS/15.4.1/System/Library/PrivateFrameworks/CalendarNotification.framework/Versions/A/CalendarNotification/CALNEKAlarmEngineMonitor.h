@class NSNotificationCenter, _EKAlarmEngine, NSString;

@interface CALNEKAlarmEngineMonitor : NSObject <CALNAlarmEngineMonitor, CADModule>

@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) _EKAlarmEngine *alarmEngine;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (void)protectedDataDidBecomeAvailable;
- (void)addAlarmsFiredObserver:(id)a0 selector:(SEL)a1;
- (void)didRegisterForAlarms;
- (id)initWithAlarmEngine:(id)a0 notificationCenter:(id)a1;
- (void)receivedAlarmNamed:(id)a0;
- (void)receivedNotificationNamed:(id)a0;
- (void)removeAlarmsFiredObserver:(id)a0;

@end
