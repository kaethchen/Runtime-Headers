@class NSString;
@protocol _DKSimpleKeyValueStore;

@interface _DKThrottledActivity : NSObject {
    NSString *_namespace;
    id<_DKSimpleKeyValueStore> _store;
}

@property (readonly, nonatomic) id<_DKSimpleKeyValueStore> store;

+ (id)standardInstance;

- (id)description;
- (void).cxx_destruct;
- (void)performNoMoreOftenInHoursThan:(double)a0 name:(id)a1 activityBlock:(id /* block */)a2 throttleBlock:(id /* block */)a3;
- (void)performWithMinimumIntervalInSecondsOf:(double)a0 name:(id)a1 queue:(id)a2 activityBlock:(id /* block */)a3;
- (void)performWithMinimumIntervalInMinutesOf:(double)a0 name:(id)a1 queue:(id)a2 activityBlock:(id /* block */)a3;
- (void)clearHistoryForName:(id)a0;
- (id)initWithStore:(id)a0 namespace:(id)a1;
- (void)performNoMoreOftenInDaysThan:(double)a0 name:(id)a1 activityBlock:(id /* block */)a2;
- (void)performNoMoreOftenInDaysThan:(double)a0 name:(id)a1 activityBlock:(id /* block */)a2 throttleBlock:(id /* block */)a3;
- (void)performNoMoreOftenInHoursThan:(double)a0 name:(id)a1 activityBlock:(id /* block */)a2;
- (void)performNoMoreOftenInMinutesThan:(double)a0 name:(id)a1 activityBlock:(id /* block */)a2;
- (void)performNoMoreOftenInMinutesThan:(double)a0 name:(id)a1 activityBlock:(id /* block */)a2 throttleBlock:(id /* block */)a3;
- (void)performNoMoreOftenInMinutesThan:(double)a0 name:(id)a1 queue:(id)a2 activityBlock:(id /* block */)a3 throttleBlock:(id /* block */)a4;
- (void)performNoMoreOftenInSecondsThan:(double)a0 name:(id)a1 activityBlock:(id /* block */)a2;
- (void)performNoMoreOftenInSecondsThan:(double)a0 name:(id)a1 activityBlock:(id /* block */)a2 throttleBlock:(id /* block */)a3;
- (void)performWithDelayInDaysOf:(double)a0 name:(id)a1 queue:(id)a2 activityBlock:(id /* block */)a3;
- (void)performWithDelayInHoursOf:(double)a0 name:(id)a1 queue:(id)a2 activityBlock:(id /* block */)a3;
- (void)performWithDelayInMinutesOf:(double)a0 name:(id)a1 queue:(id)a2 activityBlock:(id /* block */)a3;
- (void)performWithDelayInSecondsOf:(double)a0 name:(id)a1 queue:(id)a2 activityBlock:(id /* block */)a3;
- (void)performWithMinimumIntervalInDaysOf:(double)a0 name:(id)a1 queue:(id)a2 activityBlock:(id /* block */)a3;
- (void)performWithMinimumIntervalInHoursOf:(double)a0 name:(id)a1 queue:(id)a2 activityBlock:(id /* block */)a3;
- (void)setDate:(id)a0 forName:(id)a1;

@end
