@class NSString;

@interface HMDUserActivityStateType6DetectorTransitionLogEvent : HMMLogEvent

@property (readonly, nonatomic) unsigned long long trackerType;
@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) long long stateEndOffset;
@property (readonly, nonatomic) NSString *eventString;

- (void).cxx_destruct;
- (id)initWithTrackerType:(unsigned long long)a0 reason:(unsigned long long)a1;
- (id)initWithTrackerType:(unsigned long long)a0 reason:(unsigned long long)a1 stateEndOffset:(long long)a2;

@end
