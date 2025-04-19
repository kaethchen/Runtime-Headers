@class AFInstanceContext, NSMutableDictionary;

@interface SOClockTimerManager : NSObject {
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
}

+ (void)warmUp;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)checkIn;
- (id)initWithInstanceContext:(id)a0;
- (id)timers;
- (id)addTimer:(id)a0;
- (id)removeTimer:(id)a0;
- (id)_registeredObservations;
- (void)addHandler:(id /* block */)a0 forEvent:(long long)a1;
- (id)dismissTimerWithIdentifier:(id)a0;
- (void)removeHandlerForEvent:(long long)a0;
- (id)updateTimer:(id)a0;

@end
