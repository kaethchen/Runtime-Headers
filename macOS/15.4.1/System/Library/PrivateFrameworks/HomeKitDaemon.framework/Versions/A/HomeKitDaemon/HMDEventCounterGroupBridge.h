@class NSDictionary;

@interface HMDEventCounterGroupBridge : HMDEventCounterGroup {
    void /* unknown type, empty encoding */ bridgedGroup;
    void /* unknown type, empty encoding */ dateQueryBlock;
}

@property (nonatomic, readonly) id /* block */ dateQueryBlock;
@property (nonatomic, readonly) NSDictionary *eventCounters;
@property (nonatomic, readonly) long long summedEventCounters;

- (void).cxx_destruct;
- (long long)fetchMaxValueForStatisticsName:(id)a0;
- (void)addMaxValueObserver:(id)a0 forStatisticsName:(id)a1;
- (void)addObserver:(id)a0 forEventName:(id)a1;
- (void)addValue:(long long)a0 toStatisticsName:(id)a1;
- (double)durationForCounter:(id)a0;
- (double)durationForCounter:(id)a0 forDate:(id)a1;
- (id)eventCountersForDate:(id)a0;
- (long long)fetchEventCounterForEventName:(id)a0;
- (long long)fetchEventCounterForEventName:(id)a0 forDate:(id)a1;
- (void)incrementEventCounterForEventName:(id)a0 withValue:(long long)a1;
- (id)initWithContext:(id)a0 serializedEventCounters:(id)a1 uptimeProvider:(id)a2;
- (void)iterateCountersUsingBlock:(id /* block */)a0;
- (void)pauseDurationCounter:(id)a0;
- (void)resetEventCounters;
- (void)resumeDurationCounter:(id)a0;
- (long long)summedEventCountersForDate:(id)a0;

@end
