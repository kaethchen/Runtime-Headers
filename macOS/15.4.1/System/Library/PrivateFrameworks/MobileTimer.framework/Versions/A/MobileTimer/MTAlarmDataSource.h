@class MTAlarm, MTAlarmManager, NSMutableArray, MTObserverStore;

@interface MTAlarmDataSource : NSObject

@property (retain, nonatomic) MTAlarmManager *alarmManager;
@property (retain, nonatomic) MTObserverStore *observers;
@property (retain, nonatomic) NSMutableArray *alarms;
@property (retain, nonatomic) MTAlarm *sleepAlarm;
@property (retain, nonatomic) NSMutableArray *sleepAlarms;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_registerForNotifications;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (id)addAlarm:(id)a0;
- (id)removeAlarm:(id)a0;
- (id)updateAlarm:(id)a0;
- (id)initWithAlarmManager:(id)a0;
- (void)_handleAlarmNotification:(id)a0 block:(id /* block */)a1;
- (void)_iterateObserversWithBlock:(id /* block */)a0;
- (void)_stateReset;
- (id)alarmAtRow:(unsigned long long)a0;
- (BOOL)hasSleepAlarmMatchingAlarmIDString:(id)a0;
- (unsigned long long)numberOfAlarms;
- (id)reloadAlarms;
- (id)reloadAlarmsNotifyObservers:(BOOL)a0;
- (unsigned long long)rowForAlarm:(id)a0;
- (unsigned long long)rowForAlarmWithID:(id)a0;
- (id)updateAlarm:(id)a0 reload:(BOOL)a1;

@end
