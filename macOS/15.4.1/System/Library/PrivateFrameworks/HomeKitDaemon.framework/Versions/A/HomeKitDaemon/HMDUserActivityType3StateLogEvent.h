@interface HMDUserActivityType3StateLogEvent : HMMLogEvent

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long oldState;
@property (readonly, nonatomic) unsigned long long logReason;

- (BOOL)didEnterTransition;
- (BOOL)didEnterType5;
- (id)initWithState:(unsigned long long)a0 oldState:(unsigned long long)a1 logReason:(unsigned long long)a2;

@end
