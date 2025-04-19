@class AFInstanceContext, NSMutableDictionary;

@interface SOClockAlarmManager : NSObject {
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
}

+ (void)warmUp;

- (id)init;
- (void).cxx_destruct;
- (void)checkIn;
- (id)addAlarm:(id)a0;
- (id)alarms;
- (id)removeAlarm:(id)a0;
- (id)initWithInstanceContext:(id)a0;
- (id)_registeredObservations;
- (void)addHandler:(id /* block */)a0 forEvent:(long long)a1;
- (id)alarmsIncludingSleepAlarm:(BOOL)a0;
- (id)dismissAlarmWithIdentifier:(id)a0;
- (void)removeHandlerForEvent:(long long)a0;
- (id)updateAlarm:(id)a0;

@end
