@class BMStoreEvent, NSDate;

@interface HMDUserActivityType3Schedule : HMFObject

@property (retain, nonatomic) BMStoreEvent *biomeEvent;
@property (readonly, nonatomic) unsigned long long stateChangedReason;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSDate *stateChangedTime;

- (void).cxx_destruct;
- (id)initWithState:(unsigned long long)a0 stateChangedReason:(unsigned long long)a1 stateChangedTime:(id)a2;

@end
