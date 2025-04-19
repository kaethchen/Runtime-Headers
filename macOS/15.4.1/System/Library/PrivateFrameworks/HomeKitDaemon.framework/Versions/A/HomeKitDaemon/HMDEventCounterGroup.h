@class NSDictionary, NSMutableDictionary;
@protocol HMMUptimeProvider, HMDEventCounterContext;

@interface HMDEventCounterGroup : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_mutableEventCounters;
    NSMutableDictionary *_runningDurationCounters;
}

@property (readonly, nonatomic) id<HMMUptimeProvider> uptimeProvider;
@property (readonly, weak, nonatomic) id<HMDEventCounterContext> context;
@property (readonly, nonatomic) NSDictionary *eventCounters;
@property (readonly, nonatomic) unsigned long long summedEventCounters;

- (void).cxx_destruct;
- (unsigned long long)fetchMaxValueForStatisticsName:(id)a0;
- (BOOL)_resetEventCounterForEventName:(id)a0;
- (unsigned long long)maxCounterName:(id *)a0;
- (id)_getOrCreateEventCounterForEventName:(id)a0;
- (void)_incrementEventCounterForEventName:(id)a0 withValue:(unsigned long long)a1;
- (void)addDuration:(double)a0 toCounter:(id)a1;
- (void)addMaxValueObserver:(id)a0 forStatisticsName:(id)a1;
- (void)addObserver:(id)a0 forEventName:(id)a1;
- (void)addValue:(unsigned long long)a0 toStatisticsName:(id)a1;
- (double)durationForCounter:(id)a0;
- (double)durationForCounter:(id)a0 forDate:(id)a1;
- (id)eventCountersForDate:(id)a0;
- (unsigned long long)fetchEventCounterForEventName:(id)a0;
- (unsigned long long)fetchEventCounterForEventName:(id)a0 forDate:(id)a1;
- (void)forceSave;
- (void)incrementEventCounterForEventName:(id)a0;
- (void)incrementEventCounterForEventName:(id)a0 withValue:(unsigned long long)a1;
- (id)initWithContext:(id)a0 serializedEventCounters:(id)a1;
- (id)initWithContext:(id)a0 serializedEventCounters:(id)a1 uptimeProvider:(id)a2;
- (void)iterateCountersUsingBlock:(id /* block */)a0;
- (void)pauseDurationCounter:(id)a0;
- (void)resetEventCounters;
- (void)resumeDurationCounter:(id)a0;
- (unsigned long long)summedEventCountersForDate:(id)a0;
- (void)updateAllDurationCounters;
- (void)updateDurationCounter:(id)a0;

@end
