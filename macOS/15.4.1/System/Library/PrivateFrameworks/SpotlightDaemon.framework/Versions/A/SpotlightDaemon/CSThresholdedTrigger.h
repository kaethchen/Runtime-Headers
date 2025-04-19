@class NSMutableDictionary;

@interface CSThresholdedTrigger : NSObject

@property (nonatomic) long long countThreshold;
@property (nonatomic) double timeInterval;
@property (retain, nonatomic) NSMutableDictionary *actionCounts;
@property (retain, nonatomic) NSMutableDictionary *lastActionDates;

- (void).cxx_destruct;
- (BOOL)incrementAndCheckPerformActionForKey:(id)a0;
- (id)initWithCountThreshold:(long long)a0 timeInterval:(double)a1;

@end
