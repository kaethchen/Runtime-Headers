@class NSNumber;

@interface MPSleepTimerControlCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSNumber *time;
@property (readonly, nonatomic) NSNumber *fireDate;
@property (readonly, nonatomic) long long stopMode;

- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
