@class NSDate;
@protocol RTWatchdogProtocol;

@interface RTWatchdogRecord : NSObject

@property (weak, nonatomic) id<RTWatchdogProtocol> object;
@property (retain, nonatomic) NSDate *checkInStartDate;
@property (retain, nonatomic) NSDate *checkInStopDate;
@property (readonly, nonatomic) double timeout;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (double)getLatency;
- (id)initWithObject:(id)a0 timeout:(double)a1;
- (BOOL)isPendingCheckIn;

@end
